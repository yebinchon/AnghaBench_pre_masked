
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct dwc2_qtd {size_t isoc_frame_index; int isoc_split_offset; TYPE_2__* urb; scalar_t__ complete_split; } ;
struct dwc2_hsotg {int dev; } ;
struct dwc2_host_chan {TYPE_1__* qh; scalar_t__ xfer_dma; scalar_t__ align_buf; } ;
struct dwc2_hcd_iso_packet_desc {int actual_length; scalar_t__ length; scalar_t__ status; } ;
struct TYPE_4__ {size_t packet_count; scalar_t__ dma; scalar_t__ buf; struct dwc2_hcd_iso_packet_desc* iso_descs; } ;
struct TYPE_3__ {int dw_align_buf; int dw_align_buf_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (struct dwc2_hsotg*,struct dwc2_host_chan*,int,struct dwc2_qtd*,int ,int *) ;
 int FUNC_4 (struct dwc2_hsotg*,struct dwc2_qtd*,int ) ;
 int FUNC_5 (struct dwc2_hsotg*,int ) ;
 int FUNC_6 (struct dwc2_hsotg*,struct dwc2_host_chan*,struct dwc2_qtd*,int ) ;
 int FUNC_7 (scalar_t__,int ,int) ;

__attribute__((used)) static int FUNC_8(struct dwc2_hsotg *VAR_7,
           struct dwc2_host_chan *VAR_8, int VAR_9,
           struct dwc2_qtd *VAR_10)
{
 struct dwc2_hcd_iso_packet_desc *VAR_11;
 u32 VAR_12;
 u32 VAR_13;
 u32 VAR_14;

 if (!VAR_10->urb)
  return 0;

 VAR_11 = &VAR_10->urb->iso_descs[VAR_10->isoc_frame_index];
 VAR_12 = FUNC_3(VAR_7, VAR_8, VAR_9, VAR_10,
       VAR_1, ((void*)0));
 if (!VAR_12 && !VAR_10->isoc_split_offset) {
  VAR_10->complete_split = 0;
  return 0;
 }

 VAR_11->actual_length += VAR_12;

 if (VAR_8->align_buf) {
  FUNC_1(VAR_7->dev, "non-aligned buffer\n");
  FUNC_2(VAR_7->dev, VAR_8->qh->dw_align_buf_dma,
     VAR_4, VAR_0);
  FUNC_7(VAR_10->urb->buf + (VAR_8->xfer_dma - VAR_10->urb->dma),
         VAR_8->qh->dw_align_buf, VAR_12);
 }

 VAR_10->isoc_split_offset += VAR_12;

 VAR_13 = FUNC_5(VAR_7, FUNC_0(VAR_9));
 VAR_14 = (VAR_13 & VAR_5) >> VAR_6;

 if (VAR_11->actual_length >= VAR_11->length || VAR_14 == 0) {
  VAR_11->status = 0;
  VAR_10->isoc_frame_index++;
  VAR_10->complete_split = 0;
  VAR_10->isoc_split_offset = 0;
 }

 if (VAR_10->isoc_frame_index == VAR_10->urb->packet_count) {
  FUNC_4(VAR_7, VAR_10, 0);
  FUNC_6(VAR_7, VAR_8, VAR_10,
         VAR_3);
 } else {
  FUNC_6(VAR_7, VAR_8, VAR_10,
         VAR_2);
 }

 return 1;
}
