
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xhci_virt_device {int real_port; TYPE_2__* tt_info; } ;
struct TYPE_3__ {int bw_used; } ;
struct xhci_root_port_bw_info {int num_active_tts; TYPE_1__ bw_table; } ;
struct xhci_hcd {struct xhci_root_port_bw_info* rh_bw; } ;
struct TYPE_4__ {scalar_t__ active_eps; } ;


 scalar_t__ VAR_0 ;

void FUNC_0(struct xhci_hcd *VAR_1,
  struct xhci_virt_device *VAR_2,
  int VAR_3)
{
 struct xhci_root_port_bw_info *VAR_4;
 if (!VAR_2->tt_info)
  return;

 VAR_4 = &VAR_1->rh_bw[VAR_2->real_port - 1];
 if (VAR_3 == 0 &&
    VAR_2->tt_info->active_eps != 0) {
  VAR_4->num_active_tts += 1;
  VAR_4->bw_table.bw_used += VAR_0;
 } else if (VAR_3 != 0 &&
    VAR_2->tt_info->active_eps == 0) {
  VAR_4->num_active_tts -= 1;
  VAR_4->bw_table.bw_used -= VAR_0;
 }
}
