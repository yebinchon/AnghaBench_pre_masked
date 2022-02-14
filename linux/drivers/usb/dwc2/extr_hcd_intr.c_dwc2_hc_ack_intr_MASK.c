
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dwc2_qtd {int complete_split; int isoc_split_pos; int isoc_split_offset; size_t isoc_frame_index; scalar_t__ error_count; TYPE_1__* urb; int ssplit_out_xfer_count; } ;
struct dwc2_hsotg {int dev; } ;
struct dwc2_host_chan {scalar_t__ data_pid_start; scalar_t__ ep_type; int xact_pos; TYPE_2__* qh; scalar_t__ ep_is_in; int xfer_len; scalar_t__ do_split; } ;
struct dwc2_hcd_iso_packet_desc {int length; } ;
struct TYPE_4__ {scalar_t__ ping_state; } ;
struct TYPE_3__ {struct dwc2_hcd_iso_packet_desc* iso_descs; } ;






 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct dwc2_host_chan*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct dwc2_hsotg*,int,int ) ;
 int FUNC_3 (struct dwc2_hsotg*,struct dwc2_host_chan*,struct dwc2_qtd*,int ) ;

__attribute__((used)) static void FUNC_4(struct dwc2_hsotg *VAR_4,
        struct dwc2_host_chan *VAR_5, int VAR_6,
        struct dwc2_qtd *VAR_7)
{
 struct dwc2_hcd_iso_packet_desc *VAR_8;

 if (FUNC_0(VAR_5))
  FUNC_1(VAR_4->dev, "--Host Channel %d Interrupt: ACK Received--\n",
    VAR_6);

 if (VAR_5->do_split) {

  if (!VAR_5->ep_is_in &&
      VAR_5->data_pid_start != VAR_0)
   VAR_7->ssplit_out_xfer_count = VAR_5->xfer_len;

  if (VAR_5->ep_type != VAR_3 || VAR_5->ep_is_in) {
   VAR_7->complete_split = 1;
   FUNC_3(VAR_4, VAR_5, VAR_7, VAR_1);
  } else {

   switch (VAR_5->xact_pos) {
   case 131:
    break;
   case 129:
    VAR_7->isoc_split_pos = 131;
    VAR_7->isoc_split_offset = 0;
    break;
   case 130:
   case 128:





    VAR_8 = &VAR_7->urb->iso_descs[
      VAR_7->isoc_frame_index];
    VAR_7->isoc_split_offset += 188;

    if (VAR_8->length - VAR_7->isoc_split_offset
       <= 188)
     VAR_7->isoc_split_pos =
       129;
    else
     VAR_7->isoc_split_pos =
       128;
    break;
   }
  }
 } else {
  VAR_7->error_count = 0;

  if (VAR_5->qh->ping_state) {
   VAR_5->qh->ping_state = 0;







   FUNC_3(VAR_4, VAR_5, VAR_7, VAR_1);
  }
 }





 FUNC_2(VAR_4, VAR_6, VAR_2);
}
