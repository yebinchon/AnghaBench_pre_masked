
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opp_table {int head; } ;
struct notifier_block {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct opp_table*) ;
 int FUNC_1 (struct opp_table*) ;
 struct opp_table* FUNC_2 (struct device*) ;
 int FUNC_3 (int *,struct notifier_block*) ;
 int FUNC_4 (struct opp_table*) ;

int FUNC_5(struct device *VAR_0,
       struct notifier_block *VAR_1)
{
 struct opp_table *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_2(VAR_0);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_3 = FUNC_3(&VAR_2->head, VAR_1);

 FUNC_4(VAR_2);

 return VAR_3;
}
