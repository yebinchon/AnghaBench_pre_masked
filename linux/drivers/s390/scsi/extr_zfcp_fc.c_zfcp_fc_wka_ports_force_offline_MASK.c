
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_fc_wka_ports {int as; int ds; int ts; int ms; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct zfcp_fc_wka_ports *VAR_0)
{
 if (!VAR_0)
  return;
 FUNC_0(&VAR_0->ms);
 FUNC_0(&VAR_0->ts);
 FUNC_0(&VAR_0->ds);
 FUNC_0(&VAR_0->as);
}
