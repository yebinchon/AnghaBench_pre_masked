
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dwc2_qtd {size_t isoc_frame_index; int isoc_split_offset; int complete_split; struct dwc2_hcd_urb* urb; } ;
struct TYPE_4__ {int host_dma; } ;
struct dwc2_hsotg {int dev; TYPE_2__ params; } ;
struct dwc2_host_chan {int ep_is_in; int ep_type; TYPE_1__* qh; } ;
struct dwc2_hcd_urb {size_t packet_count; int error_count; struct dwc2_hcd_iso_packet_desc* iso_descs; } ;
struct dwc2_hcd_iso_packet_desc {void* actual_length; int status; } ;
typedef enum dwc2_halt_status { ____Placeholder_dwc2_halt_status } dwc2_halt_status ;
struct TYPE_3__ {int do_split; } ;





 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int) ;
 void* FUNC_1 (struct dwc2_hsotg*,struct dwc2_host_chan*,int,struct dwc2_qtd*,int,int *) ;
 int FUNC_2 (struct dwc2_hsotg*,struct dwc2_qtd*,int ) ;

__attribute__((used)) static enum dwc2_halt_status FUNC_3(
  struct dwc2_hsotg *VAR_7, struct dwc2_host_chan *VAR_8,
  int VAR_9, struct dwc2_qtd *VAR_10,
  enum dwc2_halt_status VAR_11)
{
 struct dwc2_hcd_iso_packet_desc *VAR_12;
 struct dwc2_hcd_urb *VAR_13 = VAR_10->urb;

 if (!VAR_13)
  return VAR_0;

 VAR_12 = &VAR_13->iso_descs[VAR_10->isoc_frame_index];

 switch (VAR_11) {
 case 130:
  VAR_12->status = 0;
  VAR_12->actual_length = FUNC_1(VAR_7,
     VAR_8, VAR_9, VAR_10, VAR_11, ((void*)0));
  break;
 case 129:
  VAR_13->error_count++;
  if (VAR_8->ep_is_in)
   VAR_12->status = -VAR_3;
  else
   VAR_12->status = -VAR_2;
  VAR_12->actual_length = 0;
  break;
 case 131:
  VAR_13->error_count++;
  VAR_12->status = -VAR_4;

  break;
 case 128:
  VAR_13->error_count++;
  VAR_12->status = -VAR_5;
  VAR_12->actual_length = FUNC_1(VAR_7,
     VAR_8, VAR_9, VAR_10, VAR_11, ((void*)0));


  if (VAR_8->qh->do_split &&
      VAR_8->ep_type == VAR_6 && VAR_8->ep_is_in &&
      VAR_7->params.host_dma) {
   VAR_10->complete_split = 0;
   VAR_10->isoc_split_offset = 0;
  }

  break;
 default:
  FUNC_0(VAR_7->dev, "Unhandled halt_status (%d)\n",
   VAR_11);
  break;
 }

 if (++VAR_10->isoc_frame_index == VAR_13->packet_count) {




  FUNC_2(VAR_7, VAR_10, 0);
  VAR_11 = VAR_1;
 } else {
  VAR_11 = 130;
 }

 return VAR_11;
}
