
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct dwc2_qtd {size_t isoc_frame_index_last; TYPE_1__* urb; } ;
struct dwc2_qh {scalar_t__* n_bytes; scalar_t__ desc_list_dma; int ntd; struct dwc2_dma_desc* desc_list; } ;
struct dwc2_hsotg {int dev; } ;
struct dwc2_hcd_iso_packet_desc {scalar_t__ length; scalar_t__ offset; } ;
struct dwc2_dma_desc {int status; scalar_t__ buf; } ;
struct TYPE_2__ {size_t packet_count; scalar_t__ dma; struct dwc2_hcd_iso_packet_desc* iso_descs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,scalar_t__,int,int ) ;
 int FUNC_1 (struct dwc2_dma_desc*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct dwc2_hsotg *VAR_5,
      struct dwc2_qtd *VAR_6,
      struct dwc2_qh *VAR_7, u32 VAR_8,
      u16 VAR_9)
{
 struct dwc2_dma_desc *VAR_10 = &VAR_7->desc_list[VAR_9];
 struct dwc2_hcd_iso_packet_desc *VAR_11;

 FUNC_1(VAR_10, 0, sizeof(*VAR_10));
 VAR_11 = &VAR_6->urb->iso_descs[VAR_6->isoc_frame_index_last];

 if (VAR_11->length > VAR_8)
  VAR_7->n_bytes[VAR_9] = VAR_8;
 else
  VAR_7->n_bytes[VAR_9] = VAR_11->length;

 VAR_10->buf = (u32)(VAR_6->urb->dma + VAR_11->offset);
 VAR_10->status = VAR_7->n_bytes[VAR_9] << VAR_4 &
      VAR_3;


 VAR_10->status |= VAR_1;

 VAR_7->ntd++;
 VAR_6->isoc_frame_index_last++;







 FUNC_0(VAR_5->dev,
       VAR_7->desc_list_dma +
   (VAR_9 * sizeof(struct dwc2_dma_desc)),
   sizeof(struct dwc2_dma_desc),
   VAR_0);
}
