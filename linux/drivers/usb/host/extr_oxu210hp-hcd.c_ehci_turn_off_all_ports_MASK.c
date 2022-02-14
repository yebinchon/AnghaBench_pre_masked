
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct oxu_hcd {TYPE_1__* regs; int hcs_params; } ;
struct TYPE_2__ {int * port_status; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct oxu_hcd *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1->hcs_params);

 while (VAR_2--)
  FUNC_1(VAR_0, &VAR_1->regs->port_status[VAR_2]);
}
