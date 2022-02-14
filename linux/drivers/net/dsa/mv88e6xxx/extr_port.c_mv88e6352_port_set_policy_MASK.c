
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mv88e6xxx_chip {int dummy; } ;
typedef enum mv88e6xxx_policy_mapping { ____Placeholder_mv88e6xxx_policy_mapping } mv88e6xxx_policy_mapping ;
typedef enum mv88e6xxx_policy_action { ____Placeholder_mv88e6xxx_policy_action } mv88e6xxx_policy_action ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int,int ,int*) ;
 int FUNC_2 (struct mv88e6xxx_chip*,int,int ,int) ;

int FUNC_3(struct mv88e6xxx_chip *VAR_14, int VAR_15,
         enum mv88e6xxx_policy_mapping VAR_16,
         enum mv88e6xxx_policy_action VAR_17)
{
 u16 VAR_18, VAR_19, VAR_20;
 int VAR_21;
 int VAR_22;

 switch (VAR_16) {
 case 135:
  VAR_21 = FUNC_0(VAR_2);
  VAR_19 = VAR_2;
  break;
 case 131:
  VAR_21 = FUNC_0(VAR_9);
  VAR_19 = VAR_9;
  break;
 case 128:
  VAR_21 = FUNC_0(VAR_13);
  VAR_19 = VAR_13;
  break;
 case 134:
  VAR_21 = FUNC_0(VAR_4);
  VAR_19 = VAR_4;
  break;
 case 132:
  VAR_21 = FUNC_0(VAR_8);
  VAR_19 = VAR_8;
  break;
 case 129:
  VAR_21 = FUNC_0(VAR_12);
  VAR_19 = VAR_12;
  break;
 case 133:
  VAR_21 = FUNC_0(VAR_7);
  VAR_19 = VAR_7;
  break;
 case 130:
  VAR_21 = FUNC_0(VAR_11);
  VAR_19 = VAR_11;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_17) {
 case 137:
  VAR_20 = VAR_6;
  break;
 case 138:
  VAR_20 = VAR_5;
  break;
 case 136:
  VAR_20 = VAR_10;
  break;
 case 139:
  VAR_20 = VAR_3;
  break;
 default:
  return -VAR_0;
 }

 VAR_22 = FUNC_1(VAR_14, VAR_15, VAR_1, &VAR_18);
 if (VAR_22)
  return VAR_22;

 VAR_18 &= ~VAR_19;
 VAR_18 |= (VAR_20 << VAR_21) & VAR_19;

 return FUNC_2(VAR_14, VAR_15, VAR_1, VAR_18);
}
