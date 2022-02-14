
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adv76xx_state {int sd; int * hpd_gpio; TYPE_1__* info; } ;
struct TYPE_2__ {unsigned int num_dv_ports; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int *,int ,unsigned int*) ;

__attribute__((used)) static void FUNC_3(struct adv76xx_state *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->info->num_dv_ports; ++VAR_3)
  FUNC_1(VAR_1->hpd_gpio[VAR_3], VAR_2 & FUNC_0(VAR_3));

 FUNC_2(&VAR_1->sd, VAR_0, &VAR_2);
}
