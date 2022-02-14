
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct uea_softc {TYPE_1__* usb_dev; } ;
struct uea_cmvs_v2 {int dummy; } ;
struct firmware {int size; scalar_t__ data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct uea_softc*) ;
 int VAR_1 ;
 int FUNC_1 (struct uea_softc*,char*,int) ;
 scalar_t__ FUNC_2 (int ,int*,int) ;
 scalar_t__ FUNC_3 (int*) ;
 int FUNC_4 (struct firmware const*) ;
 int FUNC_5 (struct uea_softc*,void**,struct firmware const**) ;
 int FUNC_6 (struct firmware const**,char*,int *) ;
 scalar_t__ FUNC_7 (int*,char*,int) ;
 int FUNC_8 (int ,char*,char*,...) ;
 int FUNC_9 (int ,char*,char*) ;

__attribute__((used)) static int FUNC_10(struct uea_softc *VAR_2,
   void **VAR_3, const struct firmware **VAR_4, int *VAR_5)
{
 int VAR_6, VAR_7;
 u32 VAR_8;
 u8 *VAR_9;
 char VAR_10[VAR_1];

 FUNC_1(VAR_2, VAR_10, 2);
 VAR_6 = FUNC_6(VAR_4, VAR_10, &VAR_2->usb_dev->dev);
 if (VAR_6 < 0) {

  if (*VAR_5 == 1) {
   FUNC_9(FUNC_0(VAR_2), "requesting "
       "firmware %s failed, "
    "try to get older cmvs\n", VAR_10);
   return FUNC_5(VAR_2, VAR_3, VAR_4);
  }
  FUNC_8(FUNC_0(VAR_2),
         "requesting firmware %s failed with error %d\n",
         VAR_10, VAR_6);
  return VAR_6;
 }

 VAR_7 = (*VAR_4)->size;
 VAR_9 = (u8 *) (*VAR_4)->data;
 if (VAR_7 < 4 || FUNC_7(VAR_9, "cmv2", 4) != 0) {
  if (*VAR_5 == 1) {
   FUNC_9(FUNC_0(VAR_2), "firmware %s is corrupted,"
    " try to get older cmvs\n", VAR_10);
   FUNC_4(*VAR_4);
   return FUNC_5(VAR_2, VAR_3, VAR_4);
  }
  goto err_fw_corrupted;
 }

 *VAR_5 = 2;

 VAR_9 += 4;
 VAR_7 -= 4;
 if (VAR_7 < 5)
  goto err_fw_corrupted;

 VAR_8 = FUNC_3(VAR_9);
 VAR_9 += 4;
 VAR_7 -= 4;
 if (FUNC_2(0, VAR_9, VAR_7) != VAR_8)
  goto err_fw_corrupted;

 if (VAR_7 != *VAR_9 * sizeof(struct uea_cmvs_v2) + 1)
  goto err_fw_corrupted;

 *VAR_3 = (void *) (VAR_9 + 1);
 return *VAR_9;

err_fw_corrupted:
 FUNC_8(FUNC_0(VAR_2), "firmware %s is corrupted\n", VAR_10);
 FUNC_4(*VAR_4);
 return -VAR_0;
}
