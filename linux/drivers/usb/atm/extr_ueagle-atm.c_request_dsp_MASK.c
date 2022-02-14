
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uea_softc {TYPE_2__* dsp_firm; TYPE_1__* usb_dev; } ;
struct TYPE_5__ {int size; int data; } ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct uea_softc*) ;
 scalar_t__ FUNC_1 (struct uea_softc*) ;
 scalar_t__ FUNC_2 (struct uea_softc*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__**,char*,int *) ;
 int FUNC_7 (int ,char*,char*,...) ;

__attribute__((used)) static int FUNC_8(struct uea_softc *VAR_9)
{
 int VAR_10;
 char *VAR_11;

 if (FUNC_2(VAR_9) == VAR_7) {
  if (FUNC_1(VAR_9))
   VAR_11 = VAR_1;
  else
   VAR_11 = VAR_2;
 } else if (FUNC_2(VAR_9) == VAR_0) {
  if (FUNC_1(VAR_9))
   VAR_11 = VAR_3;
  else
   VAR_11 = VAR_4;
 } else {
  if (FUNC_1(VAR_9))
   VAR_11 = VAR_5;
  else
   VAR_11 = VAR_6;
 }

 VAR_10 = FUNC_6(&VAR_9->dsp_firm, VAR_11, &VAR_9->usb_dev->dev);
 if (VAR_10 < 0) {
  FUNC_7(FUNC_0(VAR_9),
         "requesting firmware %s failed with error %d\n",
   VAR_11, VAR_10);
  return VAR_10;
 }

 if (FUNC_2(VAR_9) == VAR_7)
  VAR_10 = FUNC_4(VAR_9->dsp_firm->data, VAR_9->dsp_firm->size);
 else
  VAR_10 = FUNC_3(VAR_9->dsp_firm->data, VAR_9->dsp_firm->size);

 if (VAR_10) {
  FUNC_7(FUNC_0(VAR_9), "firmware %s is corrupted\n",
         VAR_11);
  FUNC_5(VAR_9->dsp_firm);
  VAR_9->dsp_firm = ((void*)0);
  return -VAR_8;
 }

 return 0;
}
