
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
 int FUNC_0 (int ,int ,unsigned int*) ;
 struct tcpci* FUNC_1 (struct tcpc_dev*) ;
 int FUNC_2 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct tcpc_dev *VAR_6,
   enum typec_cc_status *VAR_7, enum typec_cc_status *VAR_8)
{
 struct tcpci *VAR_9 = FUNC_1(VAR_6);
 unsigned int VAR_10;
 int VAR_11;

 VAR_11 = FUNC_0(VAR_9->regmap, VAR_0, &VAR_10);
 if (VAR_11 < 0)
  return VAR_11;

 *VAR_7 = FUNC_2((VAR_10 >> VAR_2) &
     VAR_1,
     VAR_10 & VAR_5);
 *VAR_8 = FUNC_2((VAR_10 >> VAR_4) &
     VAR_3,
     VAR_10 & VAR_5);

 return 0;
}
