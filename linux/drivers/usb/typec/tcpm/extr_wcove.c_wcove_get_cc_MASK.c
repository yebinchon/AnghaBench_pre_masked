
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcove_typec {int regmap; } ;
struct tcpc_dev {int dummy; } ;
typedef enum typec_cc_status { ____Placeholder_typec_cc_status } typec_cc_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 struct wcove_typec* FUNC_1 (struct tcpc_dev*) ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static int FUNC_3(struct tcpc_dev *VAR_2, enum typec_cc_status *VAR_3,
   enum typec_cc_status *VAR_4)
{
 struct wcove_typec *VAR_5 = FUNC_1(VAR_2);
 unsigned int VAR_6;
 unsigned int VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_5->regmap, VAR_0, &VAR_6);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_0(VAR_5->regmap, VAR_1, &VAR_7);
 if (VAR_8)
  return VAR_8;

 *VAR_3 = FUNC_2(VAR_6);
 *VAR_4 = FUNC_2(VAR_7);

 return 0;
}
