
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dwc2_qh {scalar_t__ desc_list; scalar_t__ ntd; struct dwc2_host_chan* channel; } ;
struct TYPE_2__ {scalar_t__ uframe_sched; } ;
struct dwc2_hsotg {int free_hc_list; int available_host_channels; int non_periodic_channels; TYPE_1__ params; } ;
struct dwc2_host_chan {int * qh; int hc_list_entry; } ;
struct dwc2_dma_desc {int dummy; } ;


 int FUNC_0 (struct dwc2_hsotg*,struct dwc2_host_chan*) ;
 int FUNC_1 (struct dwc2_qh*) ;
 scalar_t__ FUNC_2 (struct dwc2_qh*) ;
 int FUNC_3 (struct dwc2_hsotg*,struct dwc2_qh*,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__,int ,int) ;

__attribute__((used)) static void FUNC_8(struct dwc2_hsotg *VAR_0,
          struct dwc2_qh *VAR_1)
{
 struct dwc2_host_chan *VAR_2 = VAR_1->channel;

 if (FUNC_2(VAR_1)) {
  if (VAR_0->params.uframe_sched)
   VAR_0->available_host_channels++;
  else
   VAR_0->non_periodic_channels--;
 } else {
  FUNC_3(VAR_0, VAR_1, 0);
  VAR_0->available_host_channels++;
 }





 if (VAR_2->qh) {
  if (!FUNC_6(&VAR_2->hc_list_entry))
   FUNC_5(&VAR_2->hc_list_entry);
  FUNC_0(VAR_0, VAR_2);
  FUNC_4(&VAR_2->hc_list_entry, &VAR_0->free_hc_list);
  VAR_2->qh = ((void*)0);
 }

 VAR_1->channel = ((void*)0);
 VAR_1->ntd = 0;

 if (VAR_1->desc_list)
  FUNC_7(VAR_1->desc_list, 0, sizeof(struct dwc2_dma_desc) *
         FUNC_1(VAR_1));
}
