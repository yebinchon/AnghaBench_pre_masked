
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opp_table {int regulator_count; int * regulators; int opp_list; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct opp_table*) ;
 int FUNC_2 (struct opp_table*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

void FUNC_6(struct opp_table *VAR_0)
{
 int VAR_1;

 if (!VAR_0->regulators)
  goto put_opp_table;


 FUNC_0(!FUNC_4(&VAR_0->opp_list));

 for (VAR_1 = VAR_0->regulator_count - 1; VAR_1 >= 0; VAR_1--)
  FUNC_5(VAR_0->regulators[VAR_1]);

 FUNC_1(VAR_0);

 FUNC_3(VAR_0->regulators);
 VAR_0->regulators = ((void*)0);
 VAR_0->regulator_count = -1;

put_opp_table:
 FUNC_2(VAR_0);
}
