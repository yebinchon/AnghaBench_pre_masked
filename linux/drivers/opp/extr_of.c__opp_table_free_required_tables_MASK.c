
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opp_table {int required_opp_count; struct opp_table** required_opp_tables; } ;


 scalar_t__ FUNC_0 (struct opp_table*) ;
 int FUNC_1 (struct opp_table*) ;
 int FUNC_2 (struct opp_table**) ;

__attribute__((used)) static void FUNC_3(struct opp_table *VAR_0)
{
 struct opp_table **VAR_1 = VAR_0->required_opp_tables;
 int VAR_2;

 if (!VAR_1)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_0->required_opp_count; VAR_2++) {
  if (FUNC_0(VAR_1[VAR_2]))
   break;

  FUNC_1(VAR_1[VAR_2]);
 }

 FUNC_2(VAR_1);

 VAR_0->required_opp_count = 0;
 VAR_0->required_opp_tables = ((void*)0);
}
