
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mfd_cell {int dummy; } ;
struct TYPE_6__ {int reset; } ;
struct madera {int num_core_supplies; int type; unsigned int rev; int dcvdd; TYPE_1__* core_supplies; struct device* dev; int regmap; int type_name; TYPE_3__ pdata; int regmap_32bit; int dapm_ptr_lock; int notifier; } ;
struct device {int dummy; } ;
struct TYPE_5__ {struct mfd_cell supply; } ;


 int FUNC_0 (struct mfd_cell const*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (int ) ;

 struct mfd_cell const* VAR_16 ;
 int FUNC_5 (struct madera*) ;
 struct mfd_cell const* VAR_17 ;
 int FUNC_6 (struct madera*) ;
 struct mfd_cell const* VAR_18 ;
 int FUNC_7 (struct madera*) ;
 struct mfd_cell const* VAR_19 ;
 int FUNC_8 (struct madera*) ;
 struct mfd_cell const* VAR_20 ;
 int FUNC_9 (struct madera*) ;
 int FUNC_10 (struct device*,char*,int,...) ;
 scalar_t__ FUNC_11 (struct device*) ;
 int FUNC_12 (struct device*,char*,int ,unsigned int) ;
 int FUNC_13 (struct device*,struct madera*) ;
 int FUNC_14 (struct device*,int,TYPE_1__*) ;
 struct mfd_cell const* VAR_21 ;
 int FUNC_15 (struct madera*) ;
 int FUNC_16 (struct madera*) ;
 int FUNC_17 (struct madera*) ;
 struct mfd_cell const* VAR_22 ;
 int FUNC_18 (struct madera*) ;
 int FUNC_19 (struct madera*) ;
 int FUNC_20 (struct madera*) ;
 int FUNC_21 (TYPE_3__*,scalar_t__,int) ;
 int FUNC_22 (struct device*,int ,struct mfd_cell const*,int,int *,int ,int *) ;
 int FUNC_23 (struct device*) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (struct device*) ;
 int FUNC_26 (struct device*) ;
 int FUNC_27 (struct device*) ;
 int FUNC_28 (struct device*,int) ;
 int FUNC_29 (struct device*) ;
 int FUNC_30 (int ,int) ;
 int FUNC_31 (int ,int ,unsigned int*) ;
 int FUNC_32 (int ,int ,int,int) ;
 int FUNC_33 (int,TYPE_1__*) ;
 int FUNC_34 (int,TYPE_1__*) ;
 int FUNC_35 (int ) ;
 int FUNC_36 (int ) ;
 int FUNC_37 (struct device*,char*) ;
 int FUNC_38 (int ) ;

int FUNC_39(struct madera *VAR_23)
{
 struct device *VAR_24 = VAR_23->dev;
 unsigned int VAR_25;
 int (*VAR_26)(struct madera *) = ((void*)0);
 const struct mfd_cell *VAR_27;
 int VAR_28 = 0;
 int VAR_29, VAR_30;

 FUNC_13(VAR_23->dev, VAR_23);
 FUNC_1(&VAR_23->notifier);
 FUNC_24(&VAR_23->dapm_ptr_lock);

 FUNC_18(VAR_23);





 if (FUNC_11(VAR_23->dev)) {
  FUNC_21(&VAR_23->pdata, FUNC_11(VAR_23->dev),
         sizeof(VAR_23->pdata));
 }

 VAR_30 = FUNC_17(VAR_23);
 if (VAR_30)
  return VAR_30;

 FUNC_30(VAR_23->regmap, 1);
 FUNC_30(VAR_23->regmap_32bit, 1);

 for (VAR_29 = 0; VAR_29 < FUNC_0(VAR_21); VAR_29++)
  VAR_23->core_supplies[VAR_29].supply = VAR_21[VAR_29];

 VAR_23->num_core_supplies = FUNC_0(VAR_21);






 switch (VAR_23->type) {
 case 140:
 case 138:
 case 134:
 case 132:
 case 141:
 case 131:
 case 129:
  break;
 case 136:
 case 128:
  VAR_30 = FUNC_22(VAR_23->dev, VAR_15,
          VAR_22,
          FUNC_0(VAR_22),
          ((void*)0), 0, ((void*)0));
  if (VAR_30) {
   FUNC_10(VAR_24, "Failed to add LDO1 child: %d\n", VAR_30);
   return VAR_30;
  }
  break;
 default:

  FUNC_10(VAR_23->dev, "Unknown device type %d\n", VAR_23->type);
  return -VAR_6;
 }

 VAR_30 = FUNC_14(VAR_24, VAR_23->num_core_supplies,
          VAR_23->core_supplies);
 if (VAR_30) {
  FUNC_10(VAR_24, "Failed to request core supplies: %d\n", VAR_30);
  goto err_devs;
 }






 VAR_23->dcvdd = FUNC_37(VAR_23->dev, "DCVDD");
 if (FUNC_3(VAR_23->dcvdd)) {
  VAR_30 = FUNC_4(VAR_23->dcvdd);
  FUNC_10(VAR_24, "Failed to request DCVDD: %d\n", VAR_30);
  goto err_devs;
 }

 VAR_30 = FUNC_34(VAR_23->num_core_supplies,
        VAR_23->core_supplies);
 if (VAR_30) {
  FUNC_10(VAR_24, "Failed to enable core supplies: %d\n", VAR_30);
  goto err_dcvdd;
 }

 VAR_30 = FUNC_36(VAR_23->dcvdd);
 if (VAR_30) {
  FUNC_10(VAR_24, "Failed to enable DCVDD: %d\n", VAR_30);
  goto err_enable;
 }

 FUNC_15(VAR_23);

 FUNC_30(VAR_23->regmap, 0);
 FUNC_30(VAR_23->regmap_32bit, 0);





 VAR_30 = FUNC_31(VAR_23->regmap, VAR_14, &VAR_25);
 if (VAR_30) {
  FUNC_10(VAR_24, "Failed to read ID register: %d\n", VAR_30);
  goto err_reset;
 }

 switch (VAR_25) {
 case 139:
  if (FUNC_2(VAR_0)) {
   switch (VAR_23->type) {
   case 140:
    VAR_26 = &FUNC_5;
    VAR_27 = VAR_16;
    VAR_28 = FUNC_0(VAR_16);
    break;
   default:
    break;
   }
  }
  break;
 case 137:
  if (FUNC_2(VAR_1)) {
   switch (VAR_23->type) {
   case 138:
    VAR_26 = FUNC_6;
    VAR_27 = VAR_17;
    VAR_28 = FUNC_0(VAR_17);
    break;
   default:
    break;
   }
  }
  break;
 case 135:
  if (FUNC_2(VAR_2)) {
   switch (VAR_23->type) {
   case 136:
   case 128:
    VAR_26 = FUNC_7;
    VAR_27 = VAR_18;
    VAR_28 = FUNC_0(VAR_18);
    break;
   default:
    break;
   }
  }
  break;
 case 133:
  if (FUNC_2(VAR_3)) {
   switch (VAR_23->type) {
   case 134:
   case 132:
    VAR_26 = FUNC_8;
    VAR_27 = VAR_19;
    VAR_28 = FUNC_0(VAR_19);
    break;
   default:
    break;
   }
  }
  break;
 case 130:
  if (FUNC_2(VAR_4)) {
   switch (VAR_23->type) {
   case 141:
   case 131:
   case 129:
    VAR_26 = FUNC_9;
    VAR_27 = VAR_20;
    VAR_28 = FUNC_0(VAR_20);
    break;
   default:
    break;
   }
  }
  break;
 default:
  FUNC_10(VAR_23->dev, "Unknown device ID: %x\n", VAR_25);
  VAR_30 = -VAR_5;
  goto err_reset;
 }

 if (!VAR_28) {
  FUNC_10(VAR_23->dev, "Device ID 0x%x not a %s\n", VAR_25,
   VAR_23->type_name);
  VAR_30 = -VAR_6;
  goto err_reset;
 }





 if (!VAR_23->pdata.reset) {
  VAR_30 = FUNC_19(VAR_23);
  if (VAR_30)
   goto err_reset;
 }

 VAR_30 = FUNC_20(VAR_23);
 if (VAR_30) {
  FUNC_10(VAR_23->dev, "Device failed initial boot: %d\n", VAR_30);
  goto err_reset;
 }

 VAR_30 = FUNC_31(VAR_23->regmap, VAR_12,
     &VAR_23->rev);
 if (VAR_30) {
  FUNC_10(VAR_24, "Failed to read revision register: %d\n", VAR_30);
  goto err_reset;
 }
 VAR_23->rev &= VAR_13;

 FUNC_12(VAR_24, "%s silicon revision %d\n", VAR_23->type_name,
   VAR_23->rev);


 if (VAR_26) {
  VAR_30 = VAR_26(VAR_23);
  if (VAR_30) {
   FUNC_10(VAR_23->dev, "Failed to apply patch %d\n", VAR_30);
   goto err_reset;
  }
 }


 VAR_30 = FUNC_32(VAR_23->regmap,
   VAR_11,
   VAR_9 | VAR_10,
   VAR_8 | VAR_7);
 if (VAR_30) {
  FUNC_10(VAR_23->dev, "Failed to init 32k clock: %d\n", VAR_30);
  goto err_reset;
 }

 FUNC_27(VAR_23->dev);
 FUNC_26(VAR_23->dev);
 FUNC_28(VAR_23->dev, 100);
 FUNC_29(VAR_23->dev);


 VAR_30 = FUNC_22(VAR_23->dev, VAR_15,
         VAR_27, VAR_28,
         ((void*)0), 0, ((void*)0));
 if (VAR_30) {
  FUNC_10(VAR_23->dev, "Failed to add subdevices: %d\n", VAR_30);
  goto err_pm_runtime;
 }

 return 0;

err_pm_runtime:
 FUNC_25(VAR_23->dev);
err_reset:
 FUNC_16(VAR_23);
 FUNC_35(VAR_23->dcvdd);
err_enable:
 FUNC_33(VAR_23->num_core_supplies,
          VAR_23->core_supplies);
err_dcvdd:
 FUNC_38(VAR_23->dcvdd);
err_devs:
 FUNC_23(VAR_24);

 return VAR_30;
}
