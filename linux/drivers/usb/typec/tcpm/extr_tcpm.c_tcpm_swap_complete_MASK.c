
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpm_port {int swap_pending; int swap_status; int non_pd_role_swap; int swap_complete; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct tcpm_port *VAR_0, int VAR_1)
{
 if (VAR_0->swap_pending) {
  VAR_0->swap_status = VAR_1;
  VAR_0->swap_pending = 0;
  VAR_0->non_pd_role_swap = 0;
  FUNC_0(&VAR_0->swap_complete);
 }
}
