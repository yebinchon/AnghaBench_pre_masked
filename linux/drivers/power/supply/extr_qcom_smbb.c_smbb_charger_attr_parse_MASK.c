
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smbb_charger_attr {int fail_ok; int name; } ;
struct smbb_charger {TYPE_1__* dev; } ;
typedef enum smbb_attr { ____Placeholder_smbb_attr } smbb_attr ;
struct TYPE_2__ {int of_node; } ;


 int FUNC_0 (int ,int ,unsigned int*) ;
 int FUNC_1 (struct smbb_charger*,int) ;
 int FUNC_2 (struct smbb_charger*,int,unsigned int) ;
 struct smbb_charger_attr* VAR_0 ;

__attribute__((used)) static int FUNC_3(struct smbb_charger *VAR_1,
  enum smbb_attr VAR_2)
{
 const struct smbb_charger_attr *VAR_3;
 unsigned int VAR_4;
 int VAR_5;

 VAR_3 = &VAR_0[VAR_2];

 VAR_5 = FUNC_0(VAR_1->dev->of_node, VAR_3->name, &VAR_4);
 if (VAR_5 == 0) {
  VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_4);
  if (!VAR_5 || !VAR_3->fail_ok)
   return VAR_5;
 }
 return FUNC_1(VAR_1, VAR_2);
}
