
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcove_typec {int regmap; } ;
struct tcpc_dev {int dummy; } ;
typedef enum typec_port_type { ____Placeholder_typec_port_type } typec_port_type ;
typedef enum typec_cc_status { ____Placeholder_typec_cc_status } typec_cc_status ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (int ,int ,unsigned int) ;
 struct wcove_typec* FUNC_1 (struct tcpc_dev*) ;

__attribute__((used)) static int FUNC_2(struct tcpc_dev *VAR_8,
    enum typec_port_type VAR_9,
    enum typec_cc_status VAR_10)
{
 struct wcove_typec *VAR_11 = FUNC_1(VAR_8);
 unsigned int VAR_12;

 if (VAR_9 != VAR_1)
  return -VAR_0;

 VAR_12 = VAR_7 | VAR_6;

 switch (VAR_10) {
 case 129:
  VAR_12 |= VAR_3;
  break;
 case 128:
  VAR_12 |= VAR_4;
  break;
 default:
  VAR_12 |= VAR_5;
  break;
 }

 return FUNC_0(VAR_11->regmap, VAR_2, VAR_12);
}
