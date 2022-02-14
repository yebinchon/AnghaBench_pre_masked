
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opp_table {int dummy; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,struct opp_table*) ;
 struct opp_table* FUNC_1 (struct device*,int) ;
 int FUNC_2 (struct opp_table*) ;
 int FUNC_3 (int ,char*,int *) ;

int FUNC_4(struct device *VAR_1, int VAR_2)
{
 struct opp_table *VAR_3;
 int VAR_4, VAR_5;

 if (VAR_2) {




  VAR_5 = FUNC_3(VAR_1->of_node,
         "operating-points-v2", ((void*)0));
  if (VAR_5 == 1)
   VAR_2 = 0;
 }

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (!VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_1, VAR_3);
 if (VAR_4)
  FUNC_2(VAR_3);

 return VAR_4;
}
