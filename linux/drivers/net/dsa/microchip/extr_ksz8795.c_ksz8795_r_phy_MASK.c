
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ksz_device {int dummy; } ;


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
 int FUNC_0 (struct ksz_device*,int,int ,int*) ;

__attribute__((used)) static void FUNC_1(struct ksz_device *VAR_56, u16 VAR_57, u16 VAR_58, u16 *VAR_59)
{
 u8 VAR_60, VAR_61, VAR_62, VAR_63;
 int VAR_64 = 1;
 u16 VAR_65 = 0;
 u8 VAR_66 = VAR_57;

 switch (VAR_58) {
 case 132:
  FUNC_0(VAR_56, VAR_66, VAR_53, &VAR_60);
  FUNC_0(VAR_56, VAR_66, VAR_55, &VAR_61);
  FUNC_0(VAR_56, VAR_66, VAR_50, &VAR_62);
  if (VAR_60 & VAR_41)
   VAR_65 |= VAR_22;
  if (VAR_62 & VAR_36)
   VAR_65 |= VAR_25;
  if (!(VAR_62 & VAR_33))
   VAR_65 |= VAR_14;
  if (VAR_60 & VAR_42)
   VAR_65 |= VAR_23;
  if (VAR_60 & VAR_34)
   VAR_65 |= VAR_15;
  if (VAR_62 & VAR_37)
   VAR_65 |= VAR_18;
  if (VAR_61 & VAR_39)
   VAR_65 |= VAR_19;
  if (VAR_60 & VAR_38)
   VAR_65 |= VAR_17;
  if (VAR_60 & VAR_27)
   VAR_65 |= VAR_6;
  if (VAR_60 & VAR_49)
   VAR_65 |= VAR_26;
  if (VAR_60 & VAR_40)
   VAR_65 |= VAR_20;
  break;
 case 128:
  FUNC_0(VAR_56, VAR_66, VAR_51, &VAR_63);
  VAR_65 = VAR_3 |
         VAR_2 |
         VAR_5 |
         VAR_4 |
         VAR_13;
  if (VAR_63 & VAR_32)
   VAR_65 |= VAR_12;
  if (VAR_63 & VAR_48)
   VAR_65 |= VAR_21;
  break;
 case 131:
  VAR_65 = VAR_0;
  break;
 case 130:
  VAR_65 = VAR_1;
  break;
 case 133:
  FUNC_0(VAR_56, VAR_66, VAR_52, &VAR_62);
  VAR_65 = VAR_11;
  if (VAR_62 & VAR_35)
   VAR_65 |= VAR_16;
  if (VAR_62 & VAR_29)
   VAR_65 |= VAR_8;
  if (VAR_62 & VAR_28)
   VAR_65 |= VAR_7;
  if (VAR_62 & VAR_31)
   VAR_65 |= VAR_10;
  if (VAR_62 & VAR_30)
   VAR_65 |= VAR_9;
  break;
 case 129:
  FUNC_0(VAR_56, VAR_66, VAR_54, &VAR_63);
  VAR_65 = VAR_11;
  if (VAR_63 & VAR_47)
   VAR_65 |= VAR_16;
  if (VAR_63 & VAR_44)
   VAR_65 |= VAR_8;
  if (VAR_63 & VAR_43)
   VAR_65 |= VAR_7;
  if (VAR_63 & VAR_46)
   VAR_65 |= VAR_10;
  if (VAR_63 & VAR_45)
   VAR_65 |= VAR_9;
  if (VAR_65 & ~VAR_11)
   VAR_65 |= VAR_24;
  break;
 default:
  VAR_64 = 0;
  break;
 }
 if (VAR_64)
  *VAR_59 = VAR_65;
}
