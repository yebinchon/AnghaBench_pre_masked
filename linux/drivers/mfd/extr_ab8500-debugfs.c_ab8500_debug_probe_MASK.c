
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct resource {int start; } ;
struct TYPE_4__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct dentry {int dummy; } ;
struct ab8500 {int mask_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 struct dentry* FUNC_0 (int ,struct dentry*) ;
 int FUNC_1 (char*,int,struct dentry*,TYPE_1__*,int *) ;
 void* VAR_56 ;
 int FUNC_2 (TYPE_1__*,char*,scalar_t__) ;
 struct ab8500* FUNC_3 (int ) ;
 void* FUNC_4 (TYPE_1__*,int ,int,int ) ;
 void* VAR_57 ;
 int VAR_58 ;
 void* VAR_59 ;
 scalar_t__ VAR_60 ;
 scalar_t__ VAR_61 ;
 scalar_t__ FUNC_5 (struct ab8500*) ;
 scalar_t__ FUNC_6 (struct ab8500*) ;
 scalar_t__ FUNC_7 (struct ab8500*) ;
 scalar_t__ FUNC_8 (struct ab8500*) ;
 int VAR_62 ;
 int VAR_63 ;
 scalar_t__ FUNC_9 (struct platform_device*,char*) ;
 struct resource* FUNC_10 (struct platform_device*,int ,char*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_64)
{
 struct dentry *VAR_65;
 struct dentry *VAR_66;
 struct ab8500 *VAR_67;
 struct resource *VAR_68;

 VAR_54 = VAR_1;
 VAR_53 = VAR_4 & 0x00FF;

 VAR_67 = FUNC_3(VAR_64->dev.parent);
 VAR_63 = VAR_67->mask_size;

 VAR_59 = FUNC_4(&VAR_64->dev,
     VAR_63, sizeof(*VAR_59), VAR_10);
 if (!VAR_59)
  return -VAR_8;

 VAR_56 = FUNC_4(&VAR_64->dev,
    VAR_63, sizeof(*VAR_56), VAR_10);
 if (!VAR_56)
  return -VAR_8;

 VAR_57 = FUNC_4(&VAR_64->dev,
      VAR_63, sizeof(*VAR_57), VAR_10);
 if (!VAR_57)
  return -VAR_8;

 VAR_68 = FUNC_10(VAR_64, 0, "IRQ_AB8500");
 if (!VAR_68) {
  FUNC_2(&VAR_64->dev, "AB8500 irq not found, err %d\n", VAR_60);
  return -VAR_9;
 }
 VAR_58 = VAR_68->start;

 VAR_60 = FUNC_9(VAR_64, "IRQ_FIRST");
 if (VAR_60 < 0)
  return VAR_60;

 VAR_61 = FUNC_9(VAR_64, "IRQ_LAST");
 if (VAR_61 < 0)
  return VAR_61;

 VAR_65 = FUNC_0(VAR_2, ((void*)0));

 VAR_66 = FUNC_0(VAR_0,
           VAR_65);

 FUNC_1("all-bank-registers", VAR_11, VAR_65,
       &VAR_64->dev, &VAR_18);
 FUNC_1("all-banks", VAR_11, VAR_65,
       &VAR_64->dev, &VAR_16);
 FUNC_1("register-bank", (VAR_11 | VAR_14 | VAR_12),
       VAR_65, &VAR_64->dev, &VAR_17);
 FUNC_1("register-address", (VAR_11 | VAR_14 | VAR_12),
       VAR_65, &VAR_64->dev, &VAR_15);
 FUNC_1("register-value", (VAR_11 | VAR_14 | VAR_12),
       VAR_65, &VAR_64->dev, &VAR_43);
 FUNC_1("irq-subscribe", (VAR_11 | VAR_14 | VAR_12),
       VAR_65, &VAR_64->dev, &VAR_41);

 if (FUNC_5(VAR_67)) {
  VAR_55 = VAR_19;
  VAR_62 = VAR_3;
 } else if (FUNC_6(VAR_67)) {
  VAR_55 = VAR_44;
  VAR_62 = VAR_5;
 } else if (FUNC_8(VAR_67)) {
  VAR_55 = VAR_44;
  VAR_62 = VAR_7;
 } else if (FUNC_7(VAR_67)) {
  VAR_55 = VAR_45;
  VAR_62 = VAR_6;
 }

 FUNC_1("interrupts", (VAR_11), VAR_65, &VAR_64->dev,
       &VAR_39);
 FUNC_1("irq-unsubscribe", (VAR_11 | VAR_14 | VAR_12),
       VAR_65, &VAR_64->dev, &VAR_42);
 FUNC_1("hwreg", (VAR_11 | VAR_14 | VAR_12), VAR_65,
       &VAR_64->dev, &VAR_38);
 FUNC_1("all-modem-registers", (VAR_11 | VAR_14 | VAR_12),
       VAR_65, &VAR_64->dev, &VAR_40);
 FUNC_1("bat_ctrl", (VAR_11 | VAR_14 | VAR_12),
       VAR_66, &VAR_64->dev,
       &VAR_25);
 FUNC_1("btemp_ball", (VAR_11 | VAR_14 | VAR_12),
       VAR_66, &VAR_64->dev,
       &VAR_27);
 FUNC_1("main_charger_v", (VAR_11 | VAR_14 | VAR_12),
       VAR_66, &VAR_64->dev,
       &VAR_32);
 FUNC_1("acc_detect1", (VAR_11 | VAR_14 | VAR_12),
       VAR_66, &VAR_64->dev,
       &VAR_20);
 FUNC_1("acc_detect2", (VAR_11 | VAR_14 | VAR_12),
       VAR_66, &VAR_64->dev,
       &VAR_21);
 FUNC_1("adc_aux1", (VAR_11 | VAR_14 | VAR_12),
       VAR_66, &VAR_64->dev,
       &VAR_22);
 FUNC_1("adc_aux2", (VAR_11 | VAR_14 | VAR_12),
       VAR_66, &VAR_64->dev,
       &VAR_23);
 FUNC_1("main_bat_v", (VAR_11 | VAR_14 | VAR_12),
       VAR_66, &VAR_64->dev,
       &VAR_30);
 FUNC_1("vbus_v", (VAR_11 | VAR_14 | VAR_12),
       VAR_66, &VAR_64->dev,
       &VAR_37);
 FUNC_1("main_charger_c", (VAR_11 | VAR_14 | VAR_12),
       VAR_66, &VAR_64->dev,
       &VAR_31);
 FUNC_1("usb_charger_c", (VAR_11 | VAR_14 | VAR_12),
       VAR_66, &VAR_64->dev,
       &VAR_35);
 FUNC_1("bk_bat_v", (VAR_11 | VAR_14 | VAR_12),
       VAR_66, &VAR_64->dev,
       &VAR_26);
 FUNC_1("die_temp", (VAR_11 | VAR_14 | VAR_12),
       VAR_66, &VAR_64->dev,
       &VAR_29);
 FUNC_1("usb_id", (VAR_11 | VAR_14 | VAR_12),
       VAR_66, &VAR_64->dev,
       &VAR_36);
 if (FUNC_7(VAR_67)) {
  FUNC_1("xtal_temp", (VAR_11 | VAR_14 | VAR_12),
        VAR_66, &VAR_64->dev,
        &VAR_52);
  FUNC_1("vbattruemeas", (VAR_11 | VAR_14 | VAR_12),
        VAR_66, &VAR_64->dev,
        &VAR_51);
  FUNC_1("batctrl_and_ibat", (VAR_11 | VAR_13),
        VAR_66, &VAR_64->dev,
        &VAR_46);
  FUNC_1("vbatmeas_and_ibat", (VAR_11 | VAR_13),
        VAR_66, &VAR_64->dev,
        &VAR_49);
  FUNC_1("vbattruemeas_and_ibat", (VAR_11 | VAR_13),
        VAR_66, &VAR_64->dev,
        &VAR_50);
  FUNC_1("battemp_and_ibat", (VAR_11 | VAR_13),
        VAR_66, &VAR_64->dev,
        &VAR_47);
  FUNC_1("otp_calib", (VAR_11 | VAR_14 | VAR_12),
        VAR_66, &VAR_64->dev,
        &VAR_48);
 }
 FUNC_1("avg_sample", (VAR_11 | VAR_14 | VAR_12),
       VAR_66, &VAR_64->dev,
       &VAR_24);
 FUNC_1("trig_edge", (VAR_11 | VAR_14 | VAR_12),
       VAR_66, &VAR_64->dev,
       &VAR_33);
 FUNC_1("trig_timer", (VAR_11 | VAR_14 | VAR_12),
       VAR_66, &VAR_64->dev,
       &VAR_34);
 FUNC_1("conv_type", (VAR_11 | VAR_14 | VAR_12),
       VAR_66, &VAR_64->dev,
       &VAR_28);

 return 0;
}
