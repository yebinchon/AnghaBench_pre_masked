
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcove_typec {int regmap; } ;
struct tcpc_dev {int dummy; } ;
typedef enum typec_role { ____Placeholder_typec_role } typec_role ;
typedef enum typec_data_role { ____Placeholder_typec_data_role } typec_data_role ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,unsigned int) ;
 struct wcove_typec* FUNC_1 (struct tcpc_dev*) ;
 int FUNC_2 (struct wcove_typec*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct tcpc_dev *VAR_8, bool VAR_9,
      enum typec_role VAR_10, enum typec_data_role VAR_11)
{
 struct wcove_typec *VAR_12 = FUNC_1(VAR_8);
 unsigned int VAR_13;
 int VAR_14;

 VAR_14 = FUNC_2(VAR_12, VAR_5, VAR_11 == VAR_1 ?
          VAR_7 : VAR_6);
 if (VAR_14)
  return VAR_14;

 VAR_13 = VAR_10;
 VAR_13 |= VAR_11 << VAR_3;
 VAR_13 |= VAR_0 << VAR_4;

 return FUNC_0(VAR_12->regmap, VAR_2, VAR_13);
}
