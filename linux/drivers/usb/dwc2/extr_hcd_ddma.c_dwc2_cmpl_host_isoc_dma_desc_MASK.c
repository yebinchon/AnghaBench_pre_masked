
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct dwc2_qtd {size_t isoc_frame_index_last; scalar_t__ isoc_frame_index; TYPE_1__* urb; } ;
struct dwc2_qh {int ntd; scalar_t__* n_bytes; struct dwc2_dma_desc* desc_list; scalar_t__ desc_list_dma; } ;
struct dwc2_hsotg {int dev; } ;
struct dwc2_host_chan {scalar_t__ halt_status; scalar_t__ ep_is_in; } ;
struct dwc2_hcd_iso_packet_desc {int status; scalar_t__ actual_length; scalar_t__ offset; } ;
struct dwc2_dma_desc {int status; scalar_t__ buf; } ;
struct TYPE_2__ {scalar_t__ packet_count; int error_count; scalar_t__ dma; struct dwc2_hcd_iso_packet_desc* iso_descs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,scalar_t__,int,int ) ;
 int FUNC_1 (struct dwc2_hsotg*,struct dwc2_qtd*,struct dwc2_qh*) ;
 int FUNC_2 (struct dwc2_hsotg*,struct dwc2_qtd*,int ) ;

__attribute__((used)) static int FUNC_3(struct dwc2_hsotg *VAR_11,
     struct dwc2_host_chan *VAR_12,
     struct dwc2_qtd *VAR_13,
     struct dwc2_qh *VAR_14, u16 VAR_15)
{
 struct dwc2_dma_desc *VAR_16;
 struct dwc2_hcd_iso_packet_desc *VAR_17;
 u16 VAR_18 = 0;
 int VAR_19 = 0;

 if (!VAR_13->urb)
  return -VAR_4;

 FUNC_0(VAR_11->dev, VAR_14->desc_list_dma + (VAR_15 *
    sizeof(struct dwc2_dma_desc)),
    sizeof(struct dwc2_dma_desc),
    VAR_0);

 VAR_16 = &VAR_14->desc_list[VAR_15];

 VAR_17 = &VAR_13->urb->iso_descs[VAR_13->isoc_frame_index_last];
 VAR_16->buf = (u32)(VAR_13->urb->dma + VAR_17->offset);
 if (VAR_12->ep_is_in)
  VAR_18 = (VAR_16->status & VAR_7) >>
    VAR_8;

 if ((VAR_16->status & VAR_9) == VAR_10) {





  VAR_13->urb->error_count++;
  VAR_17->actual_length = VAR_14->n_bytes[VAR_15] - VAR_18;
  VAR_17->status = -VAR_5;
 } else {

  VAR_17->actual_length = VAR_14->n_bytes[VAR_15] - VAR_18;
  VAR_17->status = 0;
 }

 if (++VAR_13->isoc_frame_index == VAR_13->urb->packet_count) {




  FUNC_2(VAR_11, VAR_13, 0);
  FUNC_1(VAR_11, VAR_13, VAR_14);







  if (VAR_12->halt_status == VAR_3)
   return -1;
  VAR_19 = VAR_1;
 }

 VAR_14->ntd--;


 if (VAR_16->status & VAR_6)
  VAR_19 = VAR_2;

 return VAR_19;
}
