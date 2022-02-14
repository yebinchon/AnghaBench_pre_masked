
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ab8500_gpadc {scalar_t__ irq_sw; scalar_t__ irq_hw; int dev; int ab8500_gpadc_lock; int ab8500_gpadc_complete; int parent; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;

 scalar_t__ VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 int VAR_33 ;





 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 int FUNC_0 (int ,int ,scalar_t__,scalar_t__*) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,scalar_t__) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 unsigned long FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (unsigned int,unsigned int) ;
 int FUNC_15 (int *,unsigned long) ;

int FUNC_16(struct ab8500_gpadc *VAR_36, u8 VAR_37,
  u8 VAR_38, u8 VAR_39, u8 VAR_40, u8 VAR_41,
  int *VAR_42)
{
 int VAR_43;
 int VAR_44 = 0;
 unsigned long VAR_45;
 u8 VAR_46, VAR_47, VAR_48, VAR_49, VAR_50;
 u8 VAR_51 = 0;
 unsigned int VAR_52 = 0;
 unsigned int VAR_53 = 0;
 u8 VAR_54, VAR_55;

 if (!VAR_36)
  return -VAR_25;


 if ((VAR_36->irq_sw < 0) && (VAR_41 == VAR_13))
  return -VAR_26;
 if ((VAR_36->irq_hw < 0) && (VAR_41 == VAR_12))
  return -VAR_26;

 FUNC_8(&VAR_36->ab8500_gpadc_lock);

 FUNC_10(VAR_36->dev);


 do {
  VAR_43 = FUNC_0(VAR_36->dev,
   VAR_0, VAR_9, &VAR_46);
  if (VAR_43 < 0)
   goto out;
  if (!(VAR_46 & VAR_32))
   break;
  FUNC_7(20);
 } while (++VAR_44 < 10);
 if (VAR_44 >= 10 && (VAR_46 & VAR_32)) {
  FUNC_3(VAR_36->dev, "gpadc_conversion: GPADC busy");
  VAR_43 = -VAR_24;
  goto out;
 }


 VAR_51 |= VAR_29;


 switch (VAR_38) {
 case 131:
  VAR_46 = VAR_37 | VAR_15;
  break;
 case 130:
  VAR_46 = VAR_37 | VAR_17;
  break;
 case 129:
  VAR_46 = VAR_37 | VAR_18;
  break;
 default:
  VAR_46 = VAR_37 | VAR_16;
  break;
 }

 if (VAR_41 == VAR_12) {
  VAR_43 = FUNC_2(VAR_36->dev,
    VAR_0, VAR_6, VAR_46);
  VAR_51 |= VAR_31;
  if (VAR_39)
   VAR_51 |= VAR_28;
 } else
  VAR_43 = FUNC_2(VAR_36->dev,
    VAR_0, VAR_5, VAR_46);
 if (VAR_43 < 0) {
  FUNC_3(VAR_36->dev,
   "gpadc_conversion: set avg samples failed\n");
  goto out;
 }






 switch (VAR_37) {
 case 132:
 case 128:
  VAR_51 |= VAR_27 | VAR_30;
  break;
 case 133:
  if (!FUNC_5(VAR_36->parent)) {
   VAR_51 |= VAR_27 | VAR_21;




   VAR_52 = 1000;
   VAR_53 = 10000;
   break;
  }

 default:
  VAR_51 |= VAR_27;
  break;
 }


 VAR_43 = FUNC_2(VAR_36->dev,
  VAR_0, VAR_4, VAR_51);
 if (VAR_43 < 0) {
  FUNC_3(VAR_36->dev,
   "gpadc_conversion: set Control register failed\n");
  goto out;
 }

 if (VAR_52 != 0)
  FUNC_14(VAR_52, VAR_53);

 if (VAR_41 == VAR_12) {

  VAR_43 = FUNC_2(VAR_36->dev,
   VAR_0, VAR_3, VAR_40);
  if (VAR_43 < 0) {
   FUNC_3(VAR_36->dev,
    "gpadc_conversion: trig timer failed\n");
   goto out;
  }
  VAR_45 = 2 * VAR_33;
  VAR_54 = VAR_2;
  VAR_55 = VAR_1;
 } else {

  VAR_43 = FUNC_1(VAR_36->dev,
   VAR_0, VAR_4,
   VAR_14, VAR_14);
  if (VAR_43 < 0) {
   FUNC_3(VAR_36->dev,
    "gpadc_conversion: start s/w conv failed\n");
   goto out;
  }
  VAR_45 = FUNC_6(VAR_22);
  VAR_54 = VAR_8;
  VAR_55 = VAR_7;
 }


 if (!FUNC_15(&VAR_36->ab8500_gpadc_complete,
   VAR_45)) {
  FUNC_3(VAR_36->dev,
   "timeout didn't receive GPADC conv interrupt\n");
  VAR_43 = -VAR_24;
  goto out;
 }


 VAR_43 = FUNC_0(VAR_36->dev,
   VAR_0, VAR_54, &VAR_47);
 if (VAR_43 < 0) {
  FUNC_3(VAR_36->dev, "gpadc_conversion: read low data failed\n");
  goto out;
 }

 VAR_43 = FUNC_0(VAR_36->dev,
  VAR_0, VAR_55, &VAR_48);
 if (VAR_43 < 0) {
  FUNC_3(VAR_36->dev, "gpadc_conversion: read high data failed\n");
  goto out;
 }


 if ((VAR_37 == VAR_19) ||
   (VAR_37 == VAR_34) ||
   (VAR_37 == VAR_35) ||
   (VAR_37 == VAR_20)) {

  if (VAR_41 == VAR_12) {

   VAR_43 = -VAR_26;
   FUNC_3(VAR_36->dev,
    "gpadc_conversion: only SW double conversion supported\n");
   goto out;
  } else {

   VAR_43 = FUNC_0(VAR_36->dev,
    VAR_0, VAR_11,
    &VAR_49);
   if (VAR_43 < 0) {
    FUNC_3(VAR_36->dev,
     "gpadc_conversion: read sw low data 2 failed\n");
    goto out;
   }

   VAR_43 = FUNC_0(VAR_36->dev,
    VAR_0, VAR_10,
    &VAR_50);
   if (VAR_43 < 0) {
    FUNC_3(VAR_36->dev,
     "gpadc_conversion: read sw high data 2 failed\n");
    goto out;
   }
   if (VAR_42 != ((void*)0)) {
    *VAR_42 = (VAR_50 << 8) | VAR_49;
   } else {
    FUNC_4(VAR_36->dev,
     "gpadc_conversion: ibat not stored\n");
   }

  }
 }


 VAR_43 = FUNC_2(VAR_36->dev, VAR_0,
  VAR_4, VAR_23);
 if (VAR_43 < 0) {
  FUNC_3(VAR_36->dev, "gpadc_conversion: disable gpadc failed\n");
  goto out;
 }


 FUNC_11(VAR_36->dev);
 FUNC_13(VAR_36->dev);

 FUNC_9(&VAR_36->ab8500_gpadc_lock);

 return (VAR_48 << 8) | VAR_47;

out:






 (void) FUNC_2(VAR_36->dev, VAR_0,
  VAR_4, VAR_23);
 FUNC_12(VAR_36->dev);
 FUNC_9(&VAR_36->ab8500_gpadc_lock);
 FUNC_3(VAR_36->dev,
  "gpadc_conversion: Failed to AD convert channel %d\n", VAR_37);
 return VAR_43;
}
