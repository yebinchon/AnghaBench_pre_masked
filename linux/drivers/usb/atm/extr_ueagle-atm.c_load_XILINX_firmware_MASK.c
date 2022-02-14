
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct uea_softc {TYPE_1__* usb_dev; } ;
struct firmware {int size; scalar_t__* data; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 char* VAR_1 ;
 TYPE_1__* FUNC_0 (struct uea_softc*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct firmware const*) ;
 int FUNC_3 (struct firmware const**,char*,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,char*,...) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct uea_softc*,int,int,int,scalar_t__ const*) ;
 int FUNC_8 (TYPE_1__*,int,int,scalar_t__*) ;

__attribute__((used)) static int FUNC_9(struct uea_softc *VAR_2)
{
 const struct firmware *VAR_3;
 int VAR_4, VAR_5, VAR_6, VAR_7;
 const u8 *VAR_8;
 u8 VAR_9;
 char *VAR_10 = VAR_1;

 FUNC_4(FUNC_0(VAR_2));

 VAR_4 = FUNC_3(&VAR_3, VAR_10, &VAR_2->usb_dev->dev);
 if (VAR_4) {
  FUNC_5(FUNC_0(VAR_2), "firmware %s is not available\n",
         VAR_10);
  goto err0;
 }

 VAR_8 = VAR_3->data;
 VAR_5 = VAR_3->size;
 if (VAR_5 != 0x577B) {
  FUNC_5(FUNC_0(VAR_2), "firmware %s is corrupted\n",
         VAR_10);
  VAR_4 = -VAR_0;
  goto err1;
 }
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6 += VAR_7) {
  VAR_7 = FUNC_1(VAR_5 - VAR_6, 64);
  VAR_4 = FUNC_7(VAR_2, 0xe, 0, VAR_7, VAR_8 + VAR_6);
  if (VAR_4 < 0) {
   FUNC_5(FUNC_0(VAR_2),
          "elsa download data failed (%d)\n", VAR_4);
   goto err1;
  }
 }


 VAR_4 = FUNC_7(VAR_2, 0xe, 1, 0, ((void*)0));
 if (VAR_4 < 0) {
  FUNC_5(FUNC_0(VAR_2),
    "elsa download data failed (%d)\n", VAR_4);
  goto err1;
 }


 VAR_9 = 0;
 VAR_4 = FUNC_8(VAR_2->usb_dev, 0xe, 1, &VAR_9);
 if (VAR_4 < 0)
  FUNC_5(VAR_2->usb_dev, "elsa de-assert failed with error"
        " %d\n", VAR_4);

err1:
 FUNC_2(VAR_3);
err0:
 FUNC_6(FUNC_0(VAR_2));
 return VAR_4;
}
