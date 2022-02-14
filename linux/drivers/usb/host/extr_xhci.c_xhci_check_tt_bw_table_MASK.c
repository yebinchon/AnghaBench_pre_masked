
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xhci_virt_device {int real_port; struct xhci_tt_bw_info* tt_info; } ;
struct xhci_tt_bw_info {scalar_t__ active_eps; } ;
struct xhci_interval_bw_table {scalar_t__ bw_used; } ;
struct xhci_hcd {TYPE_1__* rh_bw; } ;
struct TYPE_2__ {struct xhci_interval_bw_table bw_table; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(struct xhci_hcd *VAR_3,
  struct xhci_virt_device *VAR_4,
  int VAR_5)
{
 struct xhci_interval_bw_table *VAR_6;
 struct xhci_tt_bw_info *VAR_7;


 VAR_6 = &VAR_3->rh_bw[VAR_4->real_port - 1].bw_table;
 VAR_7 = VAR_4->tt_info;




 if (VAR_5)
  return 0;
 if (VAR_5 == 0 && VAR_7->active_eps != 0) {
  if (VAR_6->bw_used + VAR_2 > VAR_1)
   return -VAR_0;
  return 0;
 }






 return 0;
}
