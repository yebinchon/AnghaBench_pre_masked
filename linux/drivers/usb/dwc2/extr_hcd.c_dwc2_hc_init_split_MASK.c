
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct dwc2_qtd {int complete_split; int isoc_split_pos; } ;
struct dwc2_hsotg {int dummy; } ;
struct dwc2_host_chan {int do_split; void* hub_port; void* hub_addr; int complete_split; int xact_pos; } ;
struct dwc2_hcd_urb {int priv; } ;


 int FUNC_0 (struct dwc2_hsotg*,int ,int*,int*) ;

__attribute__((used)) static void FUNC_1(struct dwc2_hsotg *VAR_0,
          struct dwc2_host_chan *VAR_1,
          struct dwc2_qtd *VAR_2, struct dwc2_hcd_urb *VAR_3)
{
 int VAR_4, VAR_5;

 VAR_1->do_split = 1;
 VAR_1->xact_pos = VAR_2->isoc_split_pos;
 VAR_1->complete_split = VAR_2->complete_split;
 FUNC_0(VAR_0, VAR_3->priv, &VAR_4, &VAR_5);
 VAR_1->hub_addr = (u8)VAR_4;
 VAR_1->hub_port = (u8)VAR_5;
}
