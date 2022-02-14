
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct twl4030_platform_data {int * power; int * bci; int vaux4; int vaux3; int vaux1; int vsim; int vmmc2; int vpll2; int vintdig; int vintana2; int vintana1; int vaux2; int vdac; int vmmc1; int vdd2; int vdd1; int vio; int vpll1; int * audio; int * usb; int * madc; int * keypad; int * gpio; } ;
struct TYPE_2__ {int valid_modes_mask; int valid_ops_mask; } ;
struct regulator_init_data {TYPE_1__ constraints; } ;
struct regulator_consumer_supply {char* supply; void* dev_name; } ;
struct device {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
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
 unsigned int VAR_15 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct device*) ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 int FUNC_2 (struct device*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned long VAR_23 ;
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
 unsigned long VAR_48 ;
 unsigned long VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 unsigned int VAR_57 ;
 unsigned int VAR_58 ;
 struct device* FUNC_3 (int ,char*,int *,int,int,unsigned int,unsigned int) ;
 struct device* FUNC_4 (int ,int ,unsigned long) ;
 struct device* FUNC_5 (int ,struct regulator_init_data*,struct regulator_consumer_supply*,int,unsigned long) ;
 void* FUNC_6 (struct device*) ;
 scalar_t__ FUNC_7 () ;

__attribute__((used)) static int
FUNC_8(struct twl4030_platform_data *VAR_59, unsigned VAR_60,
  unsigned long VAR_61)
{
 struct device *VAR_62;

 if (FUNC_0(VAR_3) && VAR_59->gpio) {
  VAR_62 = FUNC_3(VAR_25, "twl4030_gpio",
    VAR_59->gpio, sizeof(*VAR_59->gpio),
    0, VAR_60 + VAR_15, 0);
  if (FUNC_1(VAR_62))
   return FUNC_2(VAR_62);
 }

 if (FUNC_0(VAR_5) && VAR_59->keypad) {
  VAR_62 = FUNC_3(VAR_26, "twl4030_keypad",
    VAR_59->keypad, sizeof(*VAR_59->keypad),
    1, VAR_60 + VAR_16, 0);
  if (FUNC_1(VAR_62))
   return FUNC_2(VAR_62);
 }

 if (FUNC_0(VAR_11) && VAR_59->madc &&
     FUNC_7()) {
  VAR_62 = FUNC_3(VAR_27, "twl4030_madc",
    VAR_59->madc, sizeof(*VAR_59->madc),
    1, VAR_60 + VAR_17, 0);
  if (FUNC_1(VAR_62))
   return FUNC_2(VAR_62);
 }

 if (FUNC_0(VAR_10)) {







  VAR_62 = FUNC_3(VAR_55, "twl_rtc", ((void*)0), 0,
    1, VAR_60 + VAR_22, 0);
  if (FUNC_1(VAR_62))
   return FUNC_2(VAR_62);
 }

 if (FUNC_0(VAR_7)) {
  VAR_62 = FUNC_3(VAR_54, "twl-pwm", ((void*)0), 0,
      0, 0, 0);
  if (FUNC_1(VAR_62))
   return FUNC_2(VAR_62);
 }

 if (FUNC_0(VAR_8)) {
  VAR_62 = FUNC_3(VAR_50, "twl-pwmled", ((void*)0), 0,
      0, 0, 0);
  if (FUNC_1(VAR_62))
   return FUNC_2(VAR_62);
 }

 if (FUNC_0(VAR_13) && VAR_59->usb &&
     FUNC_7()) {

  static struct regulator_consumer_supply VAR_63 = {
   .supply = "usb1v5",
  };
  static struct regulator_consumer_supply VAR_64 = {
   .supply = "usb1v8",
  };
  static struct regulator_consumer_supply VAR_65 = {
   .supply = "usb3v1",
  };


  if (FUNC_0(VAR_9)) {

   struct regulator_init_data VAR_66 = {
    .constraints.valid_modes_mask =
     VAR_20
     | VAR_21,
    .constraints.valid_ops_mask =
     VAR_18
     | VAR_19,
   };

   VAR_62 = FUNC_5(VAR_45,
            &VAR_66, &VAR_63, 1,
            VAR_61);
   if (FUNC_1(VAR_62))
    return FUNC_2(VAR_62);

   VAR_62 = FUNC_5(VAR_46,
            &VAR_66, &VAR_64, 1,
            VAR_61);
   if (FUNC_1(VAR_62))
    return FUNC_2(VAR_62);

   VAR_62 = FUNC_5(VAR_47,
            &VAR_66, &VAR_65, 1,
            VAR_61);
   if (FUNC_1(VAR_62))
    return FUNC_2(VAR_62);

  }

  VAR_62 = FUNC_3(VAR_56, "twl4030_usb",
    VAR_59->usb, sizeof(*VAR_59->usb), 1,

    VAR_60 + VAR_58,
    VAR_60 + VAR_57);

  if (FUNC_1(VAR_62))
   return FUNC_2(VAR_62);


  if (FUNC_0(VAR_9) && VAR_62) {
   VAR_63 = FUNC_6(VAR_62);
   VAR_64 = FUNC_6(VAR_62);
   VAR_65 = FUNC_6(VAR_62);
  }
 }

 if (FUNC_0(VAR_14) && FUNC_7()) {
  VAR_62 = FUNC_3(VAR_53, "twl4030_wdt", ((void*)0),
      0, 0, 0, 0);
  if (FUNC_1(VAR_62))
   return FUNC_2(VAR_62);
 }

 if (FUNC_0(VAR_4) && FUNC_7()) {
  VAR_62 = FUNC_3(VAR_52, "twl4030_pwrbutton",
      ((void*)0), 0, 1, VAR_60 + 8 + 0, 0);
  if (FUNC_1(VAR_62))
   return FUNC_2(VAR_62);
 }

 if (FUNC_0(VAR_6) && VAR_59->audio &&
     FUNC_7()) {
  VAR_62 = FUNC_3(VAR_24, "twl4030-audio",
    VAR_59->audio, sizeof(*VAR_59->audio),
    0, 0, 0);
  if (FUNC_1(VAR_62))
   return FUNC_2(VAR_62);
 }


 if (FUNC_0(VAR_9) && FUNC_7()) {
  VAR_62 = FUNC_4(VAR_42, VAR_59->vpll1,
     VAR_61);
  if (FUNC_1(VAR_62))
   return FUNC_2(VAR_62);

  VAR_62 = FUNC_4(VAR_39, VAR_59->vio,
     VAR_61);
  if (FUNC_1(VAR_62))
   return FUNC_2(VAR_62);

  VAR_62 = FUNC_4(VAR_34, VAR_59->vdd1,
     VAR_61);
  if (FUNC_1(VAR_62))
   return FUNC_2(VAR_62);

  VAR_62 = FUNC_4(VAR_35, VAR_59->vdd2,
     VAR_61);
  if (FUNC_1(VAR_62))
   return FUNC_2(VAR_62);

  VAR_62 = FUNC_4(VAR_40, VAR_59->vmmc1,
     VAR_61);
  if (FUNC_1(VAR_62))
   return FUNC_2(VAR_62);

  VAR_62 = FUNC_4(VAR_33, VAR_59->vdac,
     VAR_61);
  if (FUNC_1(VAR_62))
   return FUNC_2(VAR_62);

  VAR_62 = FUNC_4((VAR_61 & VAR_48)
     ? VAR_30
     : VAR_29,
    VAR_59->vaux2, VAR_61);
  if (FUNC_1(VAR_62))
   return FUNC_2(VAR_62);

  VAR_62 = FUNC_4(VAR_36, VAR_59->vintana1,
     VAR_61);
  if (FUNC_1(VAR_62))
   return FUNC_2(VAR_62);

  VAR_62 = FUNC_4(VAR_37, VAR_59->vintana2,
     VAR_61);
  if (FUNC_1(VAR_62))
   return FUNC_2(VAR_62);

  VAR_62 = FUNC_4(VAR_38, VAR_59->vintdig,
     VAR_61);
  if (FUNC_1(VAR_62))
   return FUNC_2(VAR_62);
 }


 if (FUNC_0(VAR_9) && !(VAR_61 & VAR_23)
   && FUNC_7()) {
  VAR_62 = FUNC_4(VAR_43, VAR_59->vpll2,
     VAR_61);
  if (FUNC_1(VAR_62))
   return FUNC_2(VAR_62);

  VAR_62 = FUNC_4(VAR_41, VAR_59->vmmc2,
     VAR_61);
  if (FUNC_1(VAR_62))
   return FUNC_2(VAR_62);

  VAR_62 = FUNC_4(VAR_44, VAR_59->vsim,
     VAR_61);
  if (FUNC_1(VAR_62))
   return FUNC_2(VAR_62);

  VAR_62 = FUNC_4(VAR_28, VAR_59->vaux1,
     VAR_61);
  if (FUNC_1(VAR_62))
   return FUNC_2(VAR_62);

  VAR_62 = FUNC_4(VAR_31, VAR_59->vaux3,
     VAR_61);
  if (FUNC_1(VAR_62))
   return FUNC_2(VAR_62);

  VAR_62 = FUNC_4(VAR_32, VAR_59->vaux4,
     VAR_61);
  if (FUNC_1(VAR_62))
   return FUNC_2(VAR_62);
 }

 if (FUNC_0(VAR_2) && VAR_59->bci &&
   !(VAR_61 & (VAR_23 | VAR_49))) {
  VAR_62 = FUNC_3(VAR_51, "twl4030_bci",
    VAR_59->bci, sizeof(*VAR_59->bci), 0,

    VAR_60 + VAR_1,
    VAR_60 + VAR_0);
  if (FUNC_1(VAR_62))
   return FUNC_2(VAR_62);
 }

 if (FUNC_0(VAR_12) && VAR_59->power) {
  VAR_62 = FUNC_3(VAR_52, "twl4030_power",
      VAR_59->power, sizeof(*VAR_59->power), 0,
      0, 0);
  if (FUNC_1(VAR_62))
   return FUNC_2(VAR_62);
 }

 return 0;
}
