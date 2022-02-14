
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct dwc2_qtd {scalar_t__ control_phase; } ;
struct dwc2_qh {int* n_bytes; scalar_t__ ep_type; scalar_t__ desc_list_dma; struct dwc2_dma_desc* desc_list; } ;
struct dwc2_hsotg {int dev; } ;
struct dwc2_host_chan {int xfer_len; int max_packet; scalar_t__ xfer_dma; scalar_t__ ep_is_in; } ;
struct dwc2_dma_desc {int status; scalar_t__ buf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,scalar_t__,int,int ) ;

__attribute__((used)) static void FUNC_1(struct dwc2_hsotg *VAR_7,
        struct dwc2_host_chan *VAR_8,
        struct dwc2_qtd *VAR_9, struct dwc2_qh *VAR_10,
        int VAR_11)
{
 struct dwc2_dma_desc *VAR_12 = &VAR_10->desc_list[VAR_11];
 int VAR_13 = VAR_8->xfer_len;

 if (VAR_13 > VAR_2 - (VAR_8->max_packet - 1))
  VAR_13 = VAR_2 - (VAR_8->max_packet - 1);

 if (VAR_8->ep_is_in) {
  int VAR_14;

  if (VAR_13 > 0 && VAR_8->max_packet)
   VAR_14 = (VAR_13 + VAR_8->max_packet - 1)
     / VAR_8->max_packet;
  else

   VAR_14 = 1;


  VAR_13 = VAR_14 * VAR_8->max_packet;
 }

 VAR_12->status = VAR_13 << VAR_4 & VAR_3;
 VAR_10->n_bytes[VAR_11] = VAR_13;

 if (VAR_10->ep_type == VAR_6 &&
     VAR_9->control_phase == VAR_1)
  VAR_12->status |= VAR_5;

 VAR_12->buf = (u32)VAR_8->xfer_dma;

 FUNC_0(VAR_7->dev,
       VAR_10->desc_list_dma +
       (VAR_11 * sizeof(struct dwc2_dma_desc)),
       sizeof(struct dwc2_dma_desc),
       VAR_0);





 if (VAR_13 > VAR_8->xfer_len) {
  VAR_8->xfer_len = 0;
 } else {
  VAR_8->xfer_dma += VAR_13;
  VAR_8->xfer_len -= VAR_13;
 }
}
