
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcove_typec {int regmap; } ;
struct tcpc_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 struct wcove_typec* FUNC_1 (struct tcpc_dev*) ;

__attribute__((used)) static int FUNC_2(struct tcpc_dev *VAR_2, bool VAR_3)
{
 struct wcove_typec *VAR_4 = FUNC_1(VAR_2);

 return FUNC_0(VAR_4->regmap, VAR_0,
       VAR_3 ? VAR_1 : 0);
}
