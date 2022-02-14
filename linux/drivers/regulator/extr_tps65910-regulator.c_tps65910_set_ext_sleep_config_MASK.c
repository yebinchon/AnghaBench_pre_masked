
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tps65910_reg {int* ext_sleep_control; int* board_ext_control; int (* get_ctrl_reg ) (int) ;struct tps65910* mfd; } ;
struct tps65910 {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
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
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct tps65910*) ;
 int FUNC_4 (struct tps65910*,int,int) ;
 int FUNC_5 (struct tps65910*,int,int*) ;
 int FUNC_6 (struct tps65910*,int,int) ;
 int FUNC_7 (struct tps65910*,int,int) ;

__attribute__((used)) static int FUNC_8(struct tps65910_reg *VAR_19,
  int VAR_20, int VAR_21)
{
 struct tps65910 *VAR_22 = VAR_19->mfd;
 u8 VAR_23 = (VAR_19->ext_sleep_control[VAR_20] >> 8) & 0xFF;
 u8 VAR_24 = (1 << VAR_19->ext_sleep_control[VAR_20] & 0xFF);
 int VAR_25;





 if (VAR_21 & VAR_1) {
  int VAR_26;
  VAR_26 = ((VAR_21 &
    VAR_9) != 0);
  VAR_26 += ((VAR_21 &
    VAR_10) != 0);
  VAR_26 += ((VAR_21 &
    VAR_11) != 0);
  VAR_26 += ((VAR_21 &
    VAR_16) != 0);
  if (VAR_26 > 1) {
   FUNC_0(VAR_22->dev,
    "External sleep control flag is not proper\n");
   return -VAR_0;
  }
 }

 VAR_19->board_ext_control[VAR_20] = VAR_21;


 if (VAR_21 & VAR_9)
  VAR_25 = FUNC_6(VAR_22,
    VAR_3 + VAR_23, VAR_24);
 else
  VAR_25 = FUNC_4(VAR_22,
    VAR_3 + VAR_23, VAR_24);
 if (VAR_25 < 0) {
  FUNC_0(VAR_22->dev,
   "Error in configuring external control EN1\n");
  return VAR_25;
 }


 if (VAR_21 & VAR_10)
  VAR_25 = FUNC_6(VAR_22,
    VAR_4 + VAR_23, VAR_24);
 else
  VAR_25 = FUNC_4(VAR_22,
    VAR_4 + VAR_23, VAR_24);
 if (VAR_25 < 0) {
  FUNC_0(VAR_22->dev,
   "Error in configuring external control EN2\n");
  return VAR_25;
 }


 if ((FUNC_3(VAR_22) == VAR_2) &&
   (VAR_20 >= VAR_8)) {
  if (VAR_21 & VAR_11)
   VAR_25 = FUNC_6(VAR_22,
    VAR_5 + VAR_23, VAR_24);
  else
   VAR_25 = FUNC_4(VAR_22,
    VAR_5 + VAR_23, VAR_24);
  if (VAR_25 < 0) {
   FUNC_0(VAR_22->dev,
    "Error in configuring external control EN3\n");
   return VAR_25;
  }
 }


 if (!(VAR_21 & VAR_1)) {

  VAR_25 = FUNC_4(VAR_22,
   VAR_12 + VAR_23, VAR_24);
  if (!VAR_25)
   VAR_25 = FUNC_4(VAR_22,
    VAR_13 + VAR_23, VAR_24);
  if (VAR_25 < 0)
   FUNC_0(VAR_22->dev,
    "Error in configuring SLEEP register\n");
  return VAR_25;
 }






 if ((VAR_20 == VAR_6) ||
  (VAR_20 == VAR_7) ||
   ((VAR_20 == VAR_15) &&
    (FUNC_3(VAR_22) == VAR_14))) {
  int VAR_27 = VAR_19->get_ctrl_reg(VAR_20) + 1;
  int VAR_28 = VAR_19->get_ctrl_reg(VAR_20) + 2;
  int VAR_29, VAR_30;

  VAR_25 = FUNC_5(VAR_19->mfd, VAR_27, &VAR_29);
  if (VAR_25 < 0)
   return VAR_25;
  VAR_25 = FUNC_5(VAR_19->mfd, VAR_28, &VAR_30);
  if (VAR_25 < 0)
   return VAR_25;

  if (VAR_29 & VAR_17) {
   u8 VAR_31 = VAR_30 & VAR_18;

   VAR_25 = FUNC_7(VAR_19->mfd, VAR_27,
       VAR_31);
   if (VAR_25 < 0) {
    FUNC_0(VAR_22->dev,
     "Error in configuring op register\n");
    return VAR_25;
   }
  }
  VAR_25 = FUNC_7(VAR_19->mfd, VAR_28, 0);
  if (VAR_25 < 0) {
   FUNC_0(VAR_22->dev, "Error in setting sr register\n");
   return VAR_25;
  }
 }

 VAR_25 = FUNC_4(VAR_22,
   VAR_12 + VAR_23, VAR_24);
 if (!VAR_25) {
  if (VAR_21 & VAR_16)
   VAR_25 = FUNC_6(VAR_22,
    VAR_13 + VAR_23, VAR_24);
  else
   VAR_25 = FUNC_4(VAR_22,
    VAR_13 + VAR_23, VAR_24);
 }
 if (VAR_25 < 0)
  FUNC_0(VAR_22->dev,
   "Error in configuring SLEEP register\n");

 return VAR_25;
}
