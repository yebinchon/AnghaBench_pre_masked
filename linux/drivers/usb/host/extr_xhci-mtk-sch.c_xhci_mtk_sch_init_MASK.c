
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xhci_hcd_mtk {struct mu3h_sch_bw_info* sch_array; int hcd; } ;
struct TYPE_4__ {int num_ports; } ;
struct TYPE_3__ {int num_ports; } ;
struct xhci_hcd {TYPE_2__ usb2_rhub; TYPE_1__ usb3_rhub; } ;
struct mu3h_sch_bw_info {int bw_ep_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct xhci_hcd* FUNC_1 (int ) ;
 struct mu3h_sch_bw_info* FUNC_2 (int,int,int ) ;

int FUNC_3(struct xhci_hcd_mtk *VAR_2)
{
 struct xhci_hcd *VAR_3 = FUNC_1(VAR_2->hcd);
 struct mu3h_sch_bw_info *VAR_4;
 int VAR_5;
 int VAR_6;


 VAR_5 = VAR_3->usb3_rhub.num_ports * 2 + VAR_3->usb2_rhub.num_ports;

 VAR_4 = FUNC_2(VAR_5, sizeof(*VAR_4), VAR_1);
 if (VAR_4 == ((void*)0))
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
  FUNC_0(&VAR_4[VAR_6].bw_ep_list);

 VAR_2->sch_array = VAR_4;

 return 0;
}
