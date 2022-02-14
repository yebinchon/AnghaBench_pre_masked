
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fotg210_hcd {scalar_t__ resuming_ports; scalar_t__ suspended_ports; scalar_t__ port_c_suspend; int * debug; TYPE_1__* regs; int next_statechange; int rh_state; } ;
struct TYPE_2__ {int command; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fotg210_hcd*,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct fotg210_hcd*,int *) ;
 int FUNC_4 (struct fotg210_hcd*) ;
 int FUNC_5 (struct fotg210_hcd*,int ,int *) ;
 int FUNC_6 (struct fotg210_hcd*,int *,int ,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_7(struct fotg210_hcd *VAR_3)
{
 int VAR_4;
 u32 VAR_5 = FUNC_3(VAR_3, &VAR_3->regs->command);




 if (VAR_3->debug && !FUNC_2(FUNC_4(VAR_3)))
  VAR_3->debug = ((void*)0);

 VAR_5 |= VAR_0;
 FUNC_0(VAR_3, "reset", VAR_5);
 FUNC_5(VAR_3, VAR_5, &VAR_3->regs->command);
 VAR_3->rh_state = VAR_1;
 VAR_3->next_statechange = VAR_2;
 VAR_4 = FUNC_6(VAR_3, &VAR_3->regs->command,
   VAR_0, 0, 250 * 1000);

 if (VAR_4)
  return VAR_4;

 if (VAR_3->debug)
  FUNC_1(FUNC_4(VAR_3));

 VAR_3->port_c_suspend = VAR_3->suspended_ports =
   VAR_3->resuming_ports = 0;
 return VAR_4;
}
