
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {scalar_t__ dma_desc_enable; scalar_t__ host_dma; } ;
struct dwc2_hsotg {TYPE_1__ params; int split_order; } ;
struct dwc2_host_chan {scalar_t__ ep_type; scalar_t__ data_pid_start; int max_packet; int xfer_started; int ep_is_in; scalar_t__ do_ping; int halt_status; scalar_t__ halt_on_queue; scalar_t__ halt_pending; TYPE_2__* qh; int split_order_list_entry; scalar_t__ do_split; } ;
struct TYPE_4__ {scalar_t__ ping_state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct dwc2_hsotg*,struct dwc2_host_chan*) ;
 int FUNC_1 (struct dwc2_hsotg*,struct dwc2_host_chan*,int ) ;
 int FUNC_2 (struct dwc2_hsotg*,struct dwc2_host_chan*) ;
 int FUNC_3 (struct dwc2_hsotg*,TYPE_2__*) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static int FUNC_5(struct dwc2_hsotg *VAR_2,
      struct dwc2_host_chan *VAR_3,
      u16 VAR_4)
{
 int VAR_5 = 0;

 if (VAR_3->do_split)

  FUNC_4(&VAR_3->split_order_list_entry,
          &VAR_2->split_order);

 if (VAR_2->params.host_dma) {
  if (VAR_2->params.dma_desc_enable) {
   if (!VAR_3->xfer_started ||
       VAR_3->ep_type == VAR_1) {
    FUNC_3(VAR_2, VAR_3->qh);
    VAR_3->qh->ping_state = 0;
   }
  } else if (!VAR_3->xfer_started) {
   FUNC_2(VAR_2, VAR_3);
   VAR_3->qh->ping_state = 0;
  }
 } else if (VAR_3->halt_pending) {

 } else if (VAR_3->halt_on_queue) {
  FUNC_1(VAR_2, VAR_3, VAR_3->halt_status);
 } else if (VAR_3->do_ping) {
  if (!VAR_3->xfer_started)
   FUNC_2(VAR_2, VAR_3);
 } else if (!VAR_3->ep_is_in ||
     VAR_3->data_pid_start == VAR_0) {
  if ((VAR_4 * 4) >= VAR_3->max_packet) {
   if (!VAR_3->xfer_started) {
    FUNC_2(VAR_2, VAR_3);
    VAR_5 = 1;
   } else {
    VAR_5 = FUNC_0(VAR_2, VAR_3);
   }
  } else {
   VAR_5 = -1;
  }
 } else {
  if (!VAR_3->xfer_started) {
   FUNC_2(VAR_2, VAR_3);
   VAR_5 = 1;
  } else {
   VAR_5 = FUNC_0(VAR_2, VAR_3);
  }
 }

 return VAR_5;
}
