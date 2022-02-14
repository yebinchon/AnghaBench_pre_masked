
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtsx_chip {int dummy; } ;



 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ VAR_10 ;

 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;

 scalar_t__ VAR_13 ;

 scalar_t__ VAR_14 ;

 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;

 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;

 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;

 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 scalar_t__ VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;

__attribute__((used)) static int FUNC_0(struct rtsx_chip *VAR_45, u8 VAR_46,
      u8 VAR_47, u8 *VAR_48, int VAR_49)
{
 u8 VAR_50 = 0, VAR_51 = 0, VAR_52 = 0;
 int VAR_53 = 0, VAR_54 = 0, VAR_55 = 0;

 if (VAR_46 == VAR_34) {
  VAR_53 = VAR_18;
  VAR_54 = VAR_17;
  VAR_55 = VAR_16;

  switch (VAR_47) {
  case 130:
   VAR_50 = VAR_26;
   VAR_51 = VAR_25;
   VAR_52 = VAR_27;
   break;

  case 128:
   VAR_50 = VAR_32;
   VAR_51 = VAR_31;
   VAR_52 = VAR_33;
   break;

  case 129:
   VAR_50 = VAR_29;
   VAR_51 = VAR_28;
   VAR_52 = VAR_30;
   break;

  case 134:
   VAR_50 = VAR_11;
   VAR_51 = VAR_10;
   VAR_52 = VAR_12;
   break;

  default:
   return VAR_37;
  }
 } else if (VAR_46 == VAR_35) {
  VAR_53 = VAR_21;
  VAR_54 = VAR_20;
  VAR_55 = VAR_19;

  switch (VAR_47) {
  case 133:
   VAR_50 = VAR_13;
   VAR_51 = VAR_39;
   VAR_52 = VAR_40;
   break;

  case 132:
   VAR_50 = VAR_14;
   VAR_51 = VAR_41;
   VAR_52 = VAR_42;
   break;

  case 131:
   VAR_50 = VAR_15;
   VAR_51 = VAR_43;
   VAR_52 = VAR_44;
   break;

  default:
   return VAR_37;
  }
 } else if (VAR_46 == VAR_36) {
  VAR_53 = VAR_24;
  VAR_54 = VAR_23;
  VAR_55 = VAR_22;

  switch (VAR_47) {
  case 137:
   VAR_50 = VAR_0;
   VAR_51 = VAR_1;
   VAR_52 = VAR_2;
   break;

  case 136:
   VAR_50 = VAR_3;
   VAR_51 = VAR_4;
   VAR_52 = VAR_5;
   break;

  case 135:
   VAR_50 = VAR_6;
   VAR_51 = VAR_7;
   VAR_52 = VAR_8;
   break;

  default:
   return VAR_37;
  }
 } else {
  return VAR_37;
 }

 if (VAR_46 == VAR_34) {
  if (!(VAR_48[VAR_53] & VAR_50) ||
      ((VAR_48[VAR_54] & 0x0F) != VAR_51)) {
   return VAR_37;
  }
 }


 if ((VAR_48[VAR_9] == 0x01) &&
     ((VAR_48[VAR_55] & VAR_52) == VAR_52)) {
  return VAR_37;
 }

 return VAR_38;
}
