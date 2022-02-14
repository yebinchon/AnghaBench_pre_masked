
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct xdp_frame {int len; int data; } ;
struct page {int dummy; } ;
struct netsec_tx_pkt_ctrl {int dummy; } ;
struct netsec_priv {int dev; struct netsec_desc_ring* desc_ring; } ;
struct netsec_desc_ring {scalar_t__ head; scalar_t__ tail; int page_pool; } ;
struct netsec_desc {int len; int addr; scalar_t__ dma_addr; int buf_type; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,int ,int) ;
 int FUNC_3 (struct netsec_priv*,struct netsec_desc_ring*,struct netsec_tx_pkt_ctrl*,struct netsec_desc*,struct xdp_frame*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 int FUNC_5 (int ) ;
 struct page* FUNC_6 (int ) ;

__attribute__((used)) static u32 FUNC_7(struct netsec_priv *VAR_9,
    struct xdp_frame *VAR_10, bool VAR_11)

{
 struct netsec_desc_ring *VAR_12 = &VAR_9->desc_ring[VAR_3];
 struct page *VAR_13 = FUNC_6(VAR_10->data);
 struct netsec_tx_pkt_ctrl VAR_14 = {};
 struct netsec_desc VAR_15;
 dma_addr_t VAR_16;
 u16 VAR_17;

 if (VAR_12->head >= VAR_12->tail)
  VAR_17 = VAR_12->head - VAR_12->tail;
 else
  VAR_17 = VAR_12->head + VAR_0 - VAR_12->tail;

 if (VAR_0 - VAR_17 <= 1)
  return VAR_5;

 if (VAR_11) {



  VAR_16 = FUNC_0(VAR_9->dev, VAR_10->data, VAR_10->len,
         VAR_1);
  if (FUNC_1(VAR_9->dev, VAR_16))
   return VAR_5;
  VAR_15.buf_type = VAR_7;
 } else {



  struct netsec_desc_ring *VAR_18 =
   &VAR_9->desc_ring[VAR_2];
  enum dma_data_direction VAR_19 =
   FUNC_5(VAR_18->page_pool);

  VAR_16 = FUNC_4(VAR_13) +
   VAR_4;
  FUNC_2(VAR_9->dev, VAR_16, VAR_10->len,
        VAR_19);
  VAR_15.buf_type = VAR_8;
 }

 VAR_15.dma_addr = VAR_16;
 VAR_15.addr = VAR_10->data;
 VAR_15.len = VAR_10->len;

 FUNC_3(VAR_9, VAR_12, &VAR_14, &VAR_15, VAR_10);

 return VAR_6;
}
