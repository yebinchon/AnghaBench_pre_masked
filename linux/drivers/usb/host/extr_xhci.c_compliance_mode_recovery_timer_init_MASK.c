
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ expires; } ;
struct xhci_hcd {TYPE_1__ comp_mode_recovery_timer; scalar_t__ port_status_u0; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (struct xhci_hcd*,int ,char*) ;

__attribute__((used)) static void FUNC_4(struct xhci_hcd *VAR_4)
{
 VAR_4->port_status_u0 = 0;
 FUNC_2(&VAR_4->comp_mode_recovery_timer, VAR_1,
      0);
 VAR_4->comp_mode_recovery_timer.expires = VAR_2 +
   FUNC_1(VAR_0);

 FUNC_0(&VAR_4->comp_mode_recovery_timer);
 FUNC_3(VAR_4, VAR_3,
   "Compliance mode recovery timer initialized");
}
