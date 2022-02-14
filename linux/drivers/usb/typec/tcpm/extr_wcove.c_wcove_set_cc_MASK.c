
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcove_typec {int regmap; } ;
struct tcpc_dev {int dummy; } ;
typedef enum typec_cc_status { ____Placeholder_typec_cc_status } typec_cc_status ;


 int VAR_0 ;





 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (int ,int ,unsigned int) ;
 struct wcove_typec* FUNC_1 (struct tcpc_dev*) ;

__attribute__((used)) static int FUNC_2(struct tcpc_dev *VAR_7, enum typec_cc_status VAR_8)
{
 struct wcove_typec *VAR_9 = FUNC_1(VAR_7);
 unsigned int VAR_10;

 switch (VAR_8) {
 case 131:
  VAR_10 = VAR_5;
  break;
 case 128:
  VAR_10 = VAR_4 | VAR_6;
  break;
 case 130:
  VAR_10 = VAR_2 | VAR_6;
  break;
 case 129:
  VAR_10 = VAR_3 | VAR_6;
  break;
 case 132:
  VAR_10 = 0;
  break;
 default:
  return -VAR_0;
 }

 return FUNC_0(VAR_9->regmap, VAR_1, VAR_10);
}
