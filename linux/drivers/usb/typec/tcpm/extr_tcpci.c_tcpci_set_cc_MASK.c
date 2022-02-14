
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpci {int regmap; } ;
struct tcpc_dev {int dummy; } ;
typedef enum typec_cc_status { ____Placeholder_typec_cc_status } typec_cc_status ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;






 int FUNC_0 (int ,int ,unsigned int) ;
 struct tcpci* FUNC_1 (struct tcpc_dev*) ;

__attribute__((used)) static int FUNC_2(struct tcpc_dev *VAR_11, enum typec_cc_status VAR_12)
{
 struct tcpci *VAR_13 = FUNC_1(VAR_11);
 unsigned int VAR_14;
 int VAR_15;

 switch (VAR_12) {
 case 132:
  VAR_14 = (VAR_4 << VAR_1) |
   (VAR_4 << VAR_2);
  break;
 case 131:
  VAR_14 = (VAR_5 << VAR_1) |
   (VAR_5 << VAR_2);
  break;
 case 128:
  VAR_14 = (VAR_6 << VAR_1) |
   (VAR_6 << VAR_2) |
   (VAR_9 <<
    VAR_10);
  break;
 case 130:
  VAR_14 = (VAR_6 << VAR_1) |
   (VAR_6 << VAR_2) |
   (VAR_7 <<
    VAR_10);
  break;
 case 129:
  VAR_14 = (VAR_6 << VAR_1) |
   (VAR_6 << VAR_2) |
   (VAR_8 <<
    VAR_10);
  break;
 case 133:
 default:
  VAR_14 = (VAR_3 << VAR_1) |
   (VAR_3 << VAR_2);
  break;
 }

 VAR_15 = FUNC_0(VAR_13->regmap, VAR_0, VAR_14);
 if (VAR_15 < 0)
  return VAR_15;

 return 0;
}
