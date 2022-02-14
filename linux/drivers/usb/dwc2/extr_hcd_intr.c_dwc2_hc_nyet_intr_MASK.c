
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dwc2_qtd {scalar_t__ isoc_frame_index; TYPE_2__* urb; scalar_t__ error_count; scalar_t__ complete_split; scalar_t__ isoc_split_offset; } ;
struct dwc2_qh {int next_active_frame; int start_active_frame; int num_hs_transfers; scalar_t__ ep_type; int ping_state; scalar_t__ ep_is_in; } ;
struct TYPE_3__ {int uframe_sched; scalar_t__ host_dma; } ;
struct dwc2_hsotg {TYPE_1__ params; int dev; } ;
struct dwc2_host_chan {scalar_t__ ep_type; struct dwc2_qh* qh; scalar_t__ ep_is_in; scalar_t__ complete_split; scalar_t__ do_split; } ;
struct TYPE_4__ {scalar_t__ packet_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (struct dwc2_host_chan*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct dwc2_hsotg*,int,int ) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct dwc2_hsotg*,struct dwc2_host_chan*,struct dwc2_qtd*,int ) ;
 int FUNC_7 (struct dwc2_hsotg*) ;
 int FUNC_8 (struct dwc2_hsotg*,struct dwc2_host_chan*,int,struct dwc2_qtd*) ;
 int FUNC_9 (struct dwc2_hsotg*,struct dwc2_qtd*,int ) ;
 int FUNC_10 (struct dwc2_hsotg*,struct dwc2_host_chan*,struct dwc2_qtd*,int ) ;
 int FUNC_11 (struct dwc2_hsotg*,struct dwc2_host_chan*,int,TYPE_2__*,struct dwc2_qtd*,int ) ;

__attribute__((used)) static void FUNC_12(struct dwc2_hsotg *VAR_7,
         struct dwc2_host_chan *VAR_8, int VAR_9,
         struct dwc2_qtd *VAR_10)
{
 if (FUNC_0(VAR_8))
  FUNC_1(VAR_7->dev, "--Host Channel %d Interrupt: NYET Received--\n",
    VAR_9);





 if (VAR_8->do_split && VAR_8->complete_split) {
  if (VAR_8->ep_is_in && VAR_8->ep_type == VAR_6 &&
      VAR_7->params.host_dma) {
   VAR_10->complete_split = 0;
   VAR_10->isoc_split_offset = 0;
   VAR_10->isoc_frame_index++;
   if (VAR_10->urb &&
       VAR_10->isoc_frame_index == VAR_10->urb->packet_count) {
    FUNC_9(VAR_7, VAR_10, 0);
    FUNC_10(VAR_7, VAR_8, VAR_10,
           VAR_2);
   } else {
    FUNC_10(VAR_7, VAR_8, VAR_10,
      VAR_0);
   }
   goto handle_nyet_done;
  }

  if (VAR_8->ep_type == VAR_5 ||
      VAR_8->ep_type == VAR_6) {
   struct dwc2_qh *VAR_11 = VAR_8->qh;
   bool VAR_12;

   if (!VAR_7->params.uframe_sched) {
    int VAR_13 = FUNC_7(VAR_7);


    VAR_12 = FUNC_5(VAR_13) !=
         FUNC_5(VAR_11->next_active_frame);
   } else {
    int VAR_14;
    VAR_14 = FUNC_3(
     VAR_11->start_active_frame,
     VAR_11->num_hs_transfers);

    if (VAR_11->ep_type != VAR_6 ||
        VAR_11->ep_is_in)
     VAR_14 =
            FUNC_3(VAR_14, 1);

    VAR_12 = FUNC_4(
     VAR_14, VAR_11->next_active_frame);
   }

   if (VAR_12) {
    VAR_10->complete_split = 0;
    FUNC_6(VAR_7, VAR_8, VAR_10,
        VAR_3);

    goto handle_nyet_done;
   }
  }

  FUNC_6(VAR_7, VAR_8, VAR_10, VAR_1);
  goto handle_nyet_done;
 }

 VAR_8->qh->ping_state = 1;
 VAR_10->error_count = 0;

 FUNC_11(VAR_7, VAR_8, VAR_9, VAR_10->urb, VAR_10,
      VAR_1);
 FUNC_8(VAR_7, VAR_8, VAR_9, VAR_10);





 FUNC_6(VAR_7, VAR_8, VAR_10, VAR_1);

handle_nyet_done:
 FUNC_2(VAR_7, VAR_9, VAR_4);
}
