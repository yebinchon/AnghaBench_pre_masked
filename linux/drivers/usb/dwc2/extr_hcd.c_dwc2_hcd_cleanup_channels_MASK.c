
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int host_channels; scalar_t__ uframe_sched; int host_dma; } ;
struct dwc2_hsotg {int available_host_channels; scalar_t__ periodic_channels; scalar_t__ non_periodic_channels; TYPE_1__ params; int free_hc_list; struct dwc2_host_chan** hc_ptr_array; } ;
struct dwc2_host_chan {int * qh; int hc_list_entry; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct dwc2_hsotg*,struct dwc2_host_chan*) ;
 int FUNC_2 (struct dwc2_hsotg*,int ) ;
 int FUNC_3 (struct dwc2_hsotg*,int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct dwc2_hsotg *VAR_3)
{
 int VAR_4 = VAR_3->params.host_channels;
 struct dwc2_host_chan *VAR_5;
 u32 VAR_6;
 int VAR_7;

 if (!VAR_3->params.host_dma) {

  for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
   VAR_5 = VAR_3->hc_ptr_array[VAR_7];
   if (!FUNC_5(&VAR_5->hc_list_entry))
    continue;
   VAR_6 = FUNC_2(VAR_3, FUNC_0(VAR_7));
   if (VAR_6 & VAR_1) {
    VAR_6 &= ~(VAR_1 | VAR_2);
    VAR_6 |= VAR_0;
    FUNC_3(VAR_3, VAR_6, FUNC_0(VAR_7));
   }
  }
 }

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_5 = VAR_3->hc_ptr_array[VAR_7];
  if (!FUNC_5(&VAR_5->hc_list_entry))
   continue;
  VAR_6 = FUNC_2(VAR_3, FUNC_0(VAR_7));
  if (VAR_6 & VAR_1) {

   VAR_6 |= VAR_0;
   FUNC_3(VAR_3, VAR_6, FUNC_0(VAR_7));
  }

  FUNC_1(VAR_3, VAR_5);
  FUNC_4(&VAR_5->hc_list_entry, &VAR_3->free_hc_list);





  VAR_5->qh = ((void*)0);
 }

 if (VAR_3->params.uframe_sched) {
  VAR_3->available_host_channels =
   VAR_3->params.host_channels;
 } else {
  VAR_3->non_periodic_channels = 0;
  VAR_3->periodic_channels = 0;
 }
}
