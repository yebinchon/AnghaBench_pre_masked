
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct netsec_tx_pkt_ctrl {int cksum_offload_flag; int tcp_seg_offload_flag; int tcp_seg_len; } ;
struct netsec_priv {int dummy; } ;
struct netsec_desc_ring {int head; struct netsec_desc* desc; struct netsec_de* vaddr; } ;
struct netsec_desc {int len; scalar_t__ buf_type; void* xdpf; void* skb; int dma_addr; } ;
struct netsec_de {int buf_len_info; int attr; int data_buf_addr_lw; int data_buf_addr_up; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct netsec_priv *VAR_15,
        struct netsec_desc_ring *VAR_16,
        const struct netsec_tx_pkt_ctrl *VAR_17,
        const struct netsec_desc *VAR_18, void *VAR_19)
{
 int VAR_20 = VAR_16->head;
 struct netsec_de *VAR_21;
 u32 VAR_22;

 VAR_21 = VAR_16->vaddr + (VAR_1 * VAR_20);

 VAR_22 = (1 << VAR_7) |
        (1 << VAR_8) |
        (VAR_2 << VAR_10) |
        (1 << VAR_5) |
        (1 << VAR_3) |
        (VAR_17->cksum_offload_flag << VAR_4) |
        (VAR_17->tcp_seg_offload_flag << VAR_9) |
        (1 << VAR_11);
 if (VAR_20 == VAR_0 - 1)
  VAR_22 |= (1 << VAR_6);

 VAR_21->data_buf_addr_up = FUNC_1(VAR_18->dma_addr);
 VAR_21->data_buf_addr_lw = FUNC_0(VAR_18->dma_addr);
 VAR_21->buf_len_info = (VAR_17->tcp_seg_len << 16) | VAR_18->len;
 VAR_21->attr = VAR_22;

 VAR_16->desc[VAR_20] = *VAR_18;
 if (VAR_18->buf_type == VAR_12)
  VAR_16->desc[VAR_20].skb = VAR_19;
 else if (VAR_18->buf_type == VAR_14 ||
   VAR_18->buf_type == VAR_13)
  VAR_16->desc[VAR_20].xdpf = VAR_19;


 VAR_16->head = (VAR_16->head + 1) % VAR_0;
}
