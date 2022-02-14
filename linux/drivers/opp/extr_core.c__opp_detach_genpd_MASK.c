
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opp_table {int required_opp_count; int ** genpd_virt_devs; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int **) ;

__attribute__((used)) static void FUNC_2(struct opp_table *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->required_opp_count; VAR_1++) {
  if (!VAR_0->genpd_virt_devs[VAR_1])
   continue;

  FUNC_0(VAR_0->genpd_virt_devs[VAR_1], 0);
  VAR_0->genpd_virt_devs[VAR_1] = ((void*)0);
 }

 FUNC_1(VAR_0->genpd_virt_devs);
 VAR_0->genpd_virt_devs = ((void*)0);
}
