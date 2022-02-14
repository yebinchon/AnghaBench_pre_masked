
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct dwc2_qtd {scalar_t__ in_process; struct dwc2_qh* qh; } ;
struct dwc2_qh {int qtd_list; int * channel; } ;
struct TYPE_6__ {int dma_desc_enable; } ;
struct TYPE_4__ {scalar_t__ port_connect_status; } ;
struct TYPE_5__ {TYPE_1__ b; } ;
struct dwc2_hsotg {TYPE_3__ params; TYPE_2__ flags; int dev; } ;
struct dwc2_hcd_urb {int * priv; struct dwc2_qtd* qtd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct dwc2_hsotg*,int *) ;
 int FUNC_2 (struct dwc2_hsotg*,int *,int ) ;
 int FUNC_3 (struct dwc2_hsotg*,struct dwc2_qh*,int ) ;
 int FUNC_4 (struct dwc2_hsotg*,struct dwc2_qh*) ;
 int FUNC_5 (struct dwc2_hsotg*,struct dwc2_qtd*,struct dwc2_qh*) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct dwc2_hsotg *VAR_2,
    struct dwc2_hcd_urb *VAR_3)
{
 struct dwc2_qh *VAR_4;
 struct dwc2_qtd *VAR_5;

 VAR_5 = VAR_3->qtd;
 if (!VAR_5) {
  FUNC_0(VAR_2->dev, "## Urb QTD is NULL ##\n");
  return -VAR_1;
 }

 VAR_4 = VAR_5->qh;
 if (!VAR_4) {
  FUNC_0(VAR_2->dev, "## Urb QTD QH is NULL ##\n");
  return -VAR_1;
 }

 VAR_3->priv = ((void*)0);

 if (VAR_5->in_process && VAR_4->channel) {
  FUNC_1(VAR_2, VAR_4->channel);


  if (VAR_2->flags.b.port_connect_status)







   FUNC_2(VAR_2, VAR_4->channel,
         VAR_0);
 }





 if (!VAR_2->params.dma_desc_enable) {
  u8 VAR_6 = VAR_5->in_process;

  FUNC_5(VAR_2, VAR_5, VAR_4);
  if (VAR_6) {
   FUNC_3(VAR_2, VAR_4, 0);
   VAR_4->channel = ((void*)0);
  } else if (FUNC_6(&VAR_4->qtd_list)) {
   FUNC_4(VAR_2, VAR_4);
  }
 } else {
  FUNC_5(VAR_2, VAR_5, VAR_4);
 }

 return 0;
}
