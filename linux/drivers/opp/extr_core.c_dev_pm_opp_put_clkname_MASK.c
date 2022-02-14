
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opp_table {int clk; int opp_list; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct opp_table*) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct opp_table *VAR_1)
{

 FUNC_1(!FUNC_4(&VAR_1->opp_list));

 FUNC_2(VAR_1->clk);
 VAR_1->clk = FUNC_0(-VAR_0);

 FUNC_3(VAR_1);
}
