
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nfp_net_rx_ring {struct nfp_net_rx_buf* rxbufs; int rd_p; struct nfp_net_rx_desc* rxds; } ;
struct TYPE_2__ {int meta_len_dd; int data_len; } ;
struct nfp_net_rx_desc {TYPE_1__ rxd; } ;
struct nfp_net_rx_buf {scalar_t__ dma_addr; scalar_t__ frag; } ;
struct nfp_net_r_vector {unsigned int rx_bytes; int rx_sync; int rx_pkts; } ;
struct nfp_net_dp {unsigned int rx_dma_off; scalar_t__ rx_offset; int fl_bufsz; } ;
struct nfp_net {int app; } ;
typedef int dma_addr_t ;


 int FUNC_0 (struct nfp_net_rx_ring*,int ) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 struct sk_buff* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 () ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct sk_buff*) ;
 int FUNC_5 (struct nfp_net*,scalar_t__,unsigned int) ;
 int FUNC_6 (struct nfp_net_dp*,scalar_t__,unsigned int) ;
 int FUNC_7 (struct nfp_net_dp*,scalar_t__) ;
 void* FUNC_8 (struct nfp_net_dp*,int *) ;
 int FUNC_9 (struct nfp_net_dp*,struct nfp_net_r_vector*,struct nfp_net_rx_ring*,struct nfp_net_rx_buf*,struct sk_buff*) ;
 int FUNC_10 (struct nfp_net_dp*,struct nfp_net_rx_ring*,void*,int ) ;
 int FUNC_11 (struct nfp_net_dp*,char*,unsigned int) ;
 int FUNC_12 (struct sk_buff*,unsigned int) ;
 int FUNC_13 (struct sk_buff*,unsigned int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int) ;

__attribute__((used)) static bool
FUNC_17(struct nfp_net *VAR_4, struct nfp_net_dp *VAR_5,
  struct nfp_net_r_vector *VAR_6, struct nfp_net_rx_ring *VAR_7)
{
 unsigned int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 struct nfp_net_rx_buf *VAR_13;
 struct nfp_net_rx_desc *VAR_14;
 dma_addr_t VAR_15;
 struct sk_buff *VAR_16;
 void *VAR_17;
 int VAR_18;

 VAR_18 = FUNC_0(VAR_7, VAR_7->rd_p);

 VAR_14 = &VAR_7->rxds[VAR_18];
 if (!(VAR_14->rxd.meta_len_dd & VAR_2))
  return 0;




 FUNC_2();

 VAR_7->rd_p++;

 VAR_13 = &VAR_7->rxbufs[VAR_18];
 VAR_8 = VAR_14->rxd.meta_len_dd & VAR_3;
 VAR_9 = FUNC_3(VAR_14->rxd.data_len);
 VAR_11 = VAR_9 - VAR_8;

 VAR_12 = VAR_1 + VAR_5->rx_dma_off;
 if (VAR_5->rx_offset == VAR_0)
  VAR_12 += VAR_8;
 else
  VAR_12 += VAR_5->rx_offset;
 VAR_10 = VAR_12 - VAR_8;


 FUNC_14(&VAR_6->rx_sync);
 VAR_6->rx_pkts++;
 VAR_6->rx_bytes += VAR_11;
 FUNC_15(&VAR_6->rx_sync);

 FUNC_6(VAR_5, VAR_13->dma_addr + VAR_10, VAR_9);

 if (FUNC_16(!FUNC_5(VAR_4, VAR_13->frag + VAR_10, VAR_8))) {
  FUNC_11(VAR_5, "incorrect metadata for ctrl packet (%d)\n",
      VAR_8);
  FUNC_9(VAR_5, VAR_6, VAR_7, VAR_13, ((void*)0));
  return 1;
 }

 VAR_16 = FUNC_1(VAR_13->frag, VAR_5->fl_bufsz);
 if (FUNC_16(!VAR_16)) {
  FUNC_9(VAR_5, VAR_6, VAR_7, VAR_13, ((void*)0));
  return 1;
 }
 VAR_17 = FUNC_8(VAR_5, &VAR_15);
 if (FUNC_16(!VAR_17)) {
  FUNC_9(VAR_5, VAR_6, VAR_7, VAR_13, VAR_16);
  return 1;
 }

 FUNC_7(VAR_5, VAR_13->dma_addr);

 FUNC_10(VAR_5, VAR_7, VAR_17, VAR_15);

 FUNC_13(VAR_16, VAR_12);
 FUNC_12(VAR_16, VAR_11);

 FUNC_4(VAR_4->app, VAR_16);

 return 1;
}
