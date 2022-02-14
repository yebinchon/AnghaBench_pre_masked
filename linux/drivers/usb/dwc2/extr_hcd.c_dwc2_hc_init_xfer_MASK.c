
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dwc2_qtd {size_t isoc_frame_index; int isoc_split_offset; int data_toggle; int control_phase; struct dwc2_hcd_urb* urb; } ;
struct TYPE_2__ {int host_dma; int dma_desc_enable; } ;
struct dwc2_hsotg {int status_buf_dma; int status_buf; TYPE_1__ params; int dev; } ;
struct dwc2_host_chan {int ep_type; int ep_is_in; int xfer_dma; int xfer_buf; int xfer_len; int xact_pos; int data_pid_start; int do_ping; } ;
struct dwc2_hcd_urb {int setup_dma; int setup_packet; int dma; int buf; struct dwc2_hcd_iso_packet_desc* iso_descs; int pipe_info; int length; } ;
struct dwc2_hcd_iso_packet_desc {int offset; int length; int status; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct dwc2_hsotg *VAR_4,
         struct dwc2_host_chan *VAR_5,
         struct dwc2_qtd *VAR_6)
{
 struct dwc2_hcd_urb *VAR_7 = VAR_6->urb;
 struct dwc2_hcd_iso_packet_desc *VAR_8;

 switch (FUNC_1(&VAR_7->pipe_info)) {
 case 130:
  VAR_5->ep_type = 130;

  switch (VAR_6->control_phase) {
  case 133:
   FUNC_0(VAR_4->dev, "  Control setup transaction\n");
   VAR_5->do_ping = 0;
   VAR_5->ep_is_in = 0;
   VAR_5->data_pid_start = VAR_3;
   if (VAR_4->params.host_dma)
    VAR_5->xfer_dma = VAR_7->setup_dma;
   else
    VAR_5->xfer_buf = VAR_7->setup_packet;
   VAR_5->xfer_len = 8;
   break;

  case 134:
   FUNC_0(VAR_4->dev, "  Control data transaction\n");
   VAR_5->data_pid_start = VAR_6->data_toggle;
   break;

  case 132:




   FUNC_0(VAR_4->dev, "  Control status transaction\n");
   if (VAR_7->length == 0)
    VAR_5->ep_is_in = 1;
   else
    VAR_5->ep_is_in =
     FUNC_2(&VAR_7->pipe_info);
   if (VAR_5->ep_is_in)
    VAR_5->do_ping = 0;
   VAR_5->data_pid_start = VAR_2;
   VAR_5->xfer_len = 0;
   if (VAR_4->params.host_dma)
    VAR_5->xfer_dma = VAR_4->status_buf_dma;
   else
    VAR_5->xfer_buf = VAR_4->status_buf;
   break;
  }
  break;

 case 131:
  VAR_5->ep_type = 131;
  break;

 case 129:
  VAR_5->ep_type = 129;
  break;

 case 128:
  VAR_5->ep_type = 128;
  if (VAR_4->params.dma_desc_enable)
   break;

  VAR_8 = &VAR_7->iso_descs[VAR_6->isoc_frame_index];
  VAR_8->status = 0;

  if (VAR_4->params.host_dma) {
   VAR_5->xfer_dma = VAR_7->dma;
   VAR_5->xfer_dma += VAR_8->offset +
     VAR_6->isoc_split_offset;
  } else {
   VAR_5->xfer_buf = VAR_7->buf;
   VAR_5->xfer_buf += VAR_8->offset +
     VAR_6->isoc_split_offset;
  }

  VAR_5->xfer_len = VAR_8->length - VAR_6->isoc_split_offset;

  if (VAR_5->xact_pos == VAR_0) {
   if (VAR_5->xfer_len <= 188)
    VAR_5->xact_pos = VAR_0;
   else
    VAR_5->xact_pos = VAR_1;
  }
  break;
 }
}
