
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc2_hsotg_ep {int desc_list_dma; int desc_list; } ;
struct dwc2_hsotg {int ep0_state; int dev; int ctrl_out_desc_dma; int ctrl_out_desc; int ctrl_in_desc_dma; int ctrl_in_desc; int * setup_desc_dma; int * setup_desc; } ;







 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int FUNC_1(struct dwc2_hsotg *VAR_1,
       struct dwc2_hsotg_ep *VAR_2)
{
 switch (VAR_1->ep0_state) {
 case 130:
 case 128:
  VAR_2->desc_list = VAR_1->setup_desc[0];
  VAR_2->desc_list_dma = VAR_1->setup_desc_dma[0];
  break;
 case 132:
 case 129:
  VAR_2->desc_list = VAR_1->ctrl_in_desc;
  VAR_2->desc_list_dma = VAR_1->ctrl_in_desc_dma;
  break;
 case 131:
  VAR_2->desc_list = VAR_1->ctrl_out_desc;
  VAR_2->desc_list_dma = VAR_1->ctrl_out_desc_dma;
  break;
 default:
  FUNC_0(VAR_1->dev, "invalid EP 0 state in queue %d\n",
   VAR_1->ep0_state);
  return -VAR_0;
 }

 return 0;
}
