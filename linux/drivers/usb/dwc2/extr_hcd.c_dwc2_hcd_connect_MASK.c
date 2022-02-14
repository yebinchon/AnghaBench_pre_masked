
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int port_connect_status_change; int port_connect_status; } ;
struct TYPE_4__ {TYPE_1__ b; } ;
struct dwc2_hsotg {scalar_t__ lx_state; TYPE_2__ flags; int priv; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

void FUNC_1(struct dwc2_hsotg *VAR_1)
{
 if (VAR_1->lx_state != VAR_0)
  FUNC_0(VAR_1->priv);

 VAR_1->flags.b.port_connect_status_change = 1;
 VAR_1->flags.b.port_connect_status = 1;
}
