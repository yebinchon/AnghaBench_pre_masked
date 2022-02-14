
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {struct max8903_pdata* platform_data; } ;
struct platform_device {struct device dev; } ;
struct max8903_pdata {int dok; int dcm; int uok; int cen; int chg; int flt; int usus; scalar_t__ usb_valid; scalar_t__ dc_valid; } ;
struct TYPE_2__ {int name; } ;
struct max8903_data {int fault; int ta_in; int usb_in; TYPE_1__ psy_desc; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,int,int ) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 struct max8903_data* FUNC_5 (struct platform_device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 struct max8903_data *VAR_2 = FUNC_5(VAR_1);
 struct device *VAR_3 = &VAR_1->dev;
 struct max8903_pdata *VAR_4 = VAR_1->dev.platform_data;
 int VAR_5 = 0;
 int VAR_6;
 int VAR_7 = 0;
 int VAR_8 = 0;

 if (VAR_4->dc_valid) {
  if (FUNC_3(VAR_4->dok)) {
   VAR_5 = FUNC_1(VAR_3, VAR_4->dok,
      VAR_2->psy_desc.name);
   if (VAR_5) {
    FUNC_0(VAR_3,
     "Failed GPIO request for dok: %d err %d\n",
     VAR_4->dok, VAR_5);
    return VAR_5;
   }

   VAR_6 = VAR_4->dok;
   VAR_7 = FUNC_2(VAR_6) ? 0 : 1;
  } else {
   FUNC_0(VAR_3, "When DC is wired, DOK should be wired as well.\n");
   return -VAR_0;
  }
 }

 if (FUNC_3(VAR_4->dcm)) {
  VAR_5 = FUNC_1(VAR_3, VAR_4->dcm, VAR_2->psy_desc.name);
  if (VAR_5) {
   FUNC_0(VAR_3,
    "Failed GPIO request for dcm: %d err %d\n",
    VAR_4->dcm, VAR_5);
   return VAR_5;
  }

  VAR_6 = VAR_4->dcm;
  FUNC_4(VAR_6, VAR_7);
 }

 if (VAR_4->usb_valid) {
  if (FUNC_3(VAR_4->uok)) {
   VAR_5 = FUNC_1(VAR_3, VAR_4->uok,
      VAR_2->psy_desc.name);
   if (VAR_5) {
    FUNC_0(VAR_3,
     "Failed GPIO request for uok: %d err %d\n",
     VAR_4->uok, VAR_5);
    return VAR_5;
   }

   VAR_6 = VAR_4->uok;
   VAR_8 = FUNC_2(VAR_6) ? 0 : 1;
  } else {
   FUNC_0(VAR_3, "When USB is wired, UOK should be wired."
     "as well.\n");
   return -VAR_0;
  }
 }

 if (FUNC_3(VAR_4->cen)) {
  VAR_5 = FUNC_1(VAR_3, VAR_4->cen, VAR_2->psy_desc.name);
  if (VAR_5) {
   FUNC_0(VAR_3,
    "Failed GPIO request for cen: %d err %d\n",
    VAR_4->cen, VAR_5);
   return VAR_5;
  }

  FUNC_4(VAR_4->cen, (VAR_7 || VAR_8) ? 0 : 1);
 }

 if (FUNC_3(VAR_4->chg)) {
  VAR_5 = FUNC_1(VAR_3, VAR_4->chg, VAR_2->psy_desc.name);
  if (VAR_5) {
   FUNC_0(VAR_3,
    "Failed GPIO request for chg: %d err %d\n",
    VAR_4->chg, VAR_5);
   return VAR_5;
  }
 }

 if (FUNC_3(VAR_4->flt)) {
  VAR_5 = FUNC_1(VAR_3, VAR_4->flt, VAR_2->psy_desc.name);
  if (VAR_5) {
   FUNC_0(VAR_3,
    "Failed GPIO request for flt: %d err %d\n",
    VAR_4->flt, VAR_5);
   return VAR_5;
  }
 }

 if (FUNC_3(VAR_4->usus)) {
  VAR_5 = FUNC_1(VAR_3, VAR_4->usus, VAR_2->psy_desc.name);
  if (VAR_5) {
   FUNC_0(VAR_3,
    "Failed GPIO request for usus: %d err %d\n",
    VAR_4->usus, VAR_5);
   return VAR_5;
  }
 }

 VAR_2->fault = 0;
 VAR_2->ta_in = VAR_7;
 VAR_2->usb_in = VAR_8;

 return 0;
}
