
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpci_data {int dummy; } ;
struct tcpci {int dummy; } ;
struct rt1711h_chip {int dummy; } ;
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
 int VAR_9 ;



 int FUNC_0 (struct rt1711h_chip*,int ,unsigned int) ;
 struct rt1711h_chip* FUNC_1 (struct tcpci_data*) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct tcpci *VAR_10,
          struct tcpci_data *VAR_11,
          enum typec_cc_status VAR_12)
{
 struct rt1711h_chip *VAR_13 = FUNC_1(VAR_11);
 int VAR_14;
 unsigned int VAR_15 = 0;

 switch (VAR_12) {
 default:
 case 128:
  VAR_15 |= (VAR_7 <<
   VAR_8);
  break;
 case 130:
  VAR_15 |= (VAR_5 <<
   VAR_8);
  break;
 case 129:
  VAR_15 |= (VAR_6 <<
   VAR_8);
  break;
 }

 if (VAR_12 == VAR_9)
  VAR_15 |= (VAR_3 << VAR_1) |
      (VAR_3 << VAR_2);
 else
  VAR_15 |= (VAR_4 << VAR_1) |
      (VAR_4 << VAR_2);

 VAR_14 = FUNC_0(VAR_13, VAR_0, VAR_15);
 if (VAR_14 < 0)
  return VAR_14;
 FUNC_2(500, 1000);

 return 0;
}
