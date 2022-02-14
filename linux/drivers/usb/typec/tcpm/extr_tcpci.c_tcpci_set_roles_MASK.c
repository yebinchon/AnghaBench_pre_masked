
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpci {int regmap; } ;
struct tcpc_dev {int dummy; } ;
typedef enum typec_role { ____Placeholder_typec_role } typec_role ;
typedef enum typec_data_role { ____Placeholder_typec_data_role } typec_data_role ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,unsigned int) ;
 struct tcpci* FUNC_1 (struct tcpc_dev*) ;

__attribute__((used)) static int FUNC_2(struct tcpc_dev *VAR_7, bool VAR_8,
      enum typec_role VAR_9, enum typec_data_role VAR_10)
{
 struct tcpci *VAR_11 = FUNC_1(VAR_7);
 unsigned int VAR_12;
 int VAR_13;

 VAR_12 = VAR_0 << VAR_4;
 if (VAR_9 == VAR_6)
  VAR_12 |= VAR_3;
 if (VAR_10 == VAR_5)
  VAR_12 |= VAR_2;
 VAR_13 = FUNC_0(VAR_11->regmap, VAR_1, VAR_12);
 if (VAR_13 < 0)
  return VAR_13;

 return 0;
}
