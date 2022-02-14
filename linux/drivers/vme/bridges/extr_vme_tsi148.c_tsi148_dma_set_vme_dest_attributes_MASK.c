
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;
typedef int __be32 ;


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




 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct device*,char*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_31, __be32 *VAR_32,
 u32 VAR_33, u32 VAR_34, u32 VAR_35)
{
 u32 VAR_36;

 VAR_36 = FUNC_0(*VAR_32);


 switch (VAR_34 & (141 | 140 | 139)) {
 case 141:
  VAR_36 |= VAR_1;
  break;
 case 140:
  VAR_36 |= VAR_2;
  break;
 case 139:
  VAR_36 |= VAR_3;
  break;
 }


 if (VAR_34 & VAR_29)
  VAR_36 |= VAR_22;

 if (VAR_34 & VAR_26)
  VAR_36 |= VAR_20;

 if (VAR_34 & VAR_27)
  VAR_36 |= VAR_21;

 if (VAR_34 & VAR_25)
  VAR_36 |= VAR_19;

 if (VAR_34 & VAR_23)
  VAR_36 |= VAR_17;

 if (VAR_34 & VAR_24) {
  FUNC_2(VAR_31, "Currently not setting Broadcast Select "
   "Registers\n");
  VAR_36 |= VAR_18;
 }


 switch (VAR_35) {
 case 133:
  VAR_36 |= VAR_13;
  break;
 case 132:
  VAR_36 |= VAR_14;
  break;
 default:
  FUNC_2(VAR_31, "Invalid data width\n");
  return -VAR_0;
 }


 switch (VAR_33) {
 case 138:
  VAR_36 |= VAR_4;
  break;
 case 137:
  VAR_36 |= VAR_5;
  break;
 case 136:
  VAR_36 |= VAR_6;
  break;
 case 135:
  VAR_36 |= VAR_7;
  break;
 case 134:
  VAR_36 |= VAR_8;
  break;
 case 131:
  VAR_36 |= VAR_9;
  break;
 case 130:
  VAR_36 |= VAR_10;
  break;
 case 129:
  VAR_36 |= VAR_11;
  break;
 case 128:
  VAR_36 |= VAR_12;
  break;
 default:
  FUNC_2(VAR_31, "Invalid address space\n");
  return -VAR_0;
  break;
 }

 if (VAR_34 & VAR_30)
  VAR_36 |= VAR_16;
 if (VAR_34 & VAR_28)
  VAR_36 |= VAR_15;

 *VAR_32 = FUNC_1(VAR_36);

 return 0;
}
