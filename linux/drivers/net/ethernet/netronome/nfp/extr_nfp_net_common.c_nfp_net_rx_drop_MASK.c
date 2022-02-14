
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ head; } ;
struct nfp_net_rx_ring {int dummy; } ;
struct nfp_net_rx_buf {scalar_t__ frag; int dma_addr; } ;
struct nfp_net_r_vector {int rx_sync; int rx_replace_buf_alloc_fail; int rx_drops; } ;
struct nfp_net_dp {int dummy; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct nfp_net_dp const*,struct nfp_net_rx_ring*,scalar_t__,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void
FUNC_6(const struct nfp_net_dp *VAR_0, struct nfp_net_r_vector *VAR_1,
  struct nfp_net_rx_ring *VAR_2, struct nfp_net_rx_buf *VAR_3,
  struct sk_buff *VAR_4)
{
 FUNC_3(&VAR_1->rx_sync);
 VAR_1->rx_drops++;



 if (VAR_4 && VAR_3)
  VAR_1->rx_replace_buf_alloc_fail++;
 FUNC_4(&VAR_1->rx_sync);




 if (VAR_4 && VAR_3 && VAR_4->head == VAR_3->frag)
  FUNC_2(FUNC_5(VAR_3->frag));
 if (VAR_3)
  FUNC_1(VAR_0, VAR_2, VAR_3->frag, VAR_3->dma_addr);
 if (VAR_4)
  FUNC_0(VAR_4);
}
