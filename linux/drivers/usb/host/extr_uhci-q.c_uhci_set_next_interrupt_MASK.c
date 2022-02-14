
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uhci_hcd {TYPE_1__* term_td; scalar_t__ is_stopped; } ;
struct TYPE_4__ {int rh_timer; } ;
struct TYPE_3__ {int status; } ;


 int VAR_0 ;
 int FUNC_0 (struct uhci_hcd*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 TYPE_2__* FUNC_2 (struct uhci_hcd*) ;

__attribute__((used)) static void FUNC_3(struct uhci_hcd *VAR_2)
{
 if (VAR_2->is_stopped)
  FUNC_1(&FUNC_2(VAR_2)->rh_timer, VAR_1);
 VAR_2->term_td->status |= FUNC_0(VAR_2, VAR_0);
}
