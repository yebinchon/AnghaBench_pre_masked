
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opp_table {int regulator_count; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct opp_table*,struct device*,unsigned long,unsigned long,int) ;
 struct opp_table* FUNC_1 (struct device*) ;
 int FUNC_2 (struct opp_table*) ;

int FUNC_3(struct device *VAR_1, unsigned long VAR_2, unsigned long VAR_3)
{
 struct opp_table *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(VAR_1);
 if (!VAR_4)
  return -VAR_0;


 VAR_4->regulator_count = 1;

 VAR_5 = FUNC_0(VAR_4, VAR_1, VAR_2, VAR_3, 1);
 if (VAR_5)
  FUNC_2(VAR_4);

 return VAR_5;
}
