
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_net_tx_ring {int wr_ptr_add; int wr_p; struct nfp_net_tx_desc* txds; struct nfp_net_tx_buf* txbufs; } ;
struct nfp_net_tx_desc {scalar_t__ lso_hdrlen; scalar_t__ mss; scalar_t__ flags; void* data_len; void* dma_len; int offset_eop; } ;
struct nfp_net_tx_buf {int fidx; int pkt_cnt; unsigned int real_len; scalar_t__ dma_addr; int frag; } ;
struct nfp_net_rx_ring {int r_vec; } ;
struct nfp_net_rx_buf {scalar_t__ dma_addr; int frag; } ;
struct nfp_net_dp {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfp_net_tx_ring*,int ) ;
 int VAR_1 ;
 void* FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,scalar_t__,unsigned int,int ) ;
 int FUNC_3 (struct nfp_net_tx_desc*,scalar_t__) ;
 int FUNC_4 (struct nfp_net_dp*,int ,struct nfp_net_rx_ring*,struct nfp_net_rx_buf*,int *) ;
 int FUNC_5 (struct nfp_net_dp*,struct nfp_net_rx_ring*,int ,scalar_t__) ;
 int FUNC_6 (struct nfp_net_tx_ring*,int) ;
 int FUNC_7 (struct nfp_net_tx_ring*) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static bool
FUNC_9(struct nfp_net_dp *VAR_2, struct nfp_net_rx_ring *VAR_3,
     struct nfp_net_tx_ring *VAR_4,
     struct nfp_net_rx_buf *VAR_5, unsigned int VAR_6,
     unsigned int VAR_7, bool *VAR_8)
{
 struct nfp_net_tx_buf *VAR_9;
 struct nfp_net_tx_desc *VAR_10;
 int VAR_11;

 if (FUNC_8(FUNC_6(VAR_4, 1))) {
  if (!*VAR_8) {
   FUNC_7(VAR_4);
   *VAR_8 = 1;
  }

  if (FUNC_8(FUNC_6(VAR_4, 1))) {
   FUNC_4(VAR_2, VAR_3->r_vec, VAR_3, VAR_5,
     ((void*)0));
   return 0;
  }
 }

 VAR_11 = FUNC_0(VAR_4, VAR_4->wr_p);


 VAR_9 = &VAR_4->txbufs[VAR_11];

 FUNC_5(VAR_2, VAR_3, VAR_9->frag, VAR_9->dma_addr);

 VAR_9->frag = VAR_5->frag;
 VAR_9->dma_addr = VAR_5->dma_addr;
 VAR_9->fidx = -1;
 VAR_9->pkt_cnt = 1;
 VAR_9->real_len = VAR_7;

 FUNC_2(VAR_2->dev, VAR_5->dma_addr + VAR_6,
       VAR_7, VAR_0);


 VAR_10 = &VAR_4->txds[VAR_11];
 VAR_10->offset_eop = VAR_1;
 VAR_10->dma_len = FUNC_1(VAR_7);
 FUNC_3(VAR_10, VAR_5->dma_addr + VAR_6);
 VAR_10->data_len = FUNC_1(VAR_7);

 VAR_10->flags = 0;
 VAR_10->mss = 0;
 VAR_10->lso_hdrlen = 0;

 VAR_4->wr_p++;
 VAR_4->wr_ptr_add++;
 return 1;
}
