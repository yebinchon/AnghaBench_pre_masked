
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct xdp_buff {void* data_hard_start; void* data; void* data_meta; void* data_end; int * rxq; } ;
struct sk_buff {int decrypted; struct net_device* dev; int protocol; int mark; } ;
struct nfp_net_tx_ring {scalar_t__ wr_p; scalar_t__ rd_p; scalar_t__ wr_ptr_add; } ;
struct nfp_net_rx_ring {struct nfp_net_r_vector* r_vec; int idx; struct nfp_net_rx_buf* rxbufs; int rd_p; struct nfp_net_rx_desc* rxds; int xdp_rxq; } ;
struct TYPE_4__ {int meta_len_dd; int flags; int vlan; int data_len; } ;
struct nfp_net_rx_desc {TYPE_2__ rxd; } ;
struct nfp_net_rx_buf {void* frag; scalar_t__ dma_addr; } ;
struct nfp_net_r_vector {unsigned int rx_bytes; int napi; int rx_sync; int hw_tls_rx; int rx_pkts; struct nfp_net_tx_ring* xdp_ring; TYPE_1__* nfp_net; } ;
struct nfp_net_dp {unsigned int fl_bufsz; int rx_dma_off; unsigned int rx_offset; struct net_device* netdev; int chained_metadata_format; int xdp_prog; } ;
struct nfp_net {int app; } ;
struct nfp_meta_parsed {scalar_t__ portid; int hash_type; int hash; int mark; } ;
struct net_device {int dummy; } ;
struct bpf_prog {int dummy; } ;
typedef int meta ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_3__ {struct nfp_net_dp dp; } ;


 int FUNC_0 (struct nfp_net_rx_ring*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 struct bpf_prog* FUNC_1 (int ) ;




 int FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct sk_buff*,int ,unsigned int) ;
 int FUNC_4 (struct bpf_prog*,struct xdp_buff*) ;
 int FUNC_5 (int) ;
 struct sk_buff* FUNC_6 (void*,unsigned int) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 () ;
 int FUNC_9 (struct sk_buff*,struct net_device*) ;
 int FUNC_10 (int ) ;
 unsigned int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (struct nfp_meta_parsed*,int ,int) ;
 int FUNC_14 (int *,struct sk_buff*) ;
 struct nfp_net* FUNC_15 (struct net_device*) ;
 int FUNC_16 (int ,void*,unsigned int) ;
 struct net_device* FUNC_17 (int ,scalar_t__,int*) ;
 int FUNC_18 (struct nfp_net_dp*,scalar_t__,unsigned int) ;
 int FUNC_19 (struct nfp_net_dp*,scalar_t__) ;
 void* FUNC_20 (struct nfp_net_dp*,scalar_t__*) ;
 void* FUNC_21 (struct net_device*,struct nfp_meta_parsed*,void*,unsigned int) ;
 int FUNC_22 (struct nfp_net_dp*,struct nfp_net_r_vector*,struct nfp_net_rx_desc*,struct nfp_meta_parsed*,struct sk_buff*) ;
 int FUNC_23 (struct nfp_net_dp*,struct nfp_net_r_vector*,struct nfp_net_rx_ring*,struct nfp_net_rx_buf*,struct sk_buff*) ;
 int FUNC_24 (struct nfp_net_dp*,struct nfp_net_rx_ring*,void*,scalar_t__) ;
 int FUNC_25 (struct net_device*,struct nfp_meta_parsed*,void*,struct nfp_net_rx_desc*) ;
 int FUNC_26 (struct nfp_net_dp*,struct nfp_net_rx_ring*,struct nfp_net_tx_ring*,struct nfp_net_rx_buf*,unsigned int,unsigned int,int*) ;
 int FUNC_27 (struct nfp_net_tx_ring*) ;
 int FUNC_28 (struct nfp_net_tx_ring*) ;
 scalar_t__ FUNC_29 (struct net_device*) ;
 int FUNC_30 (struct net_device*,unsigned int) ;
 int FUNC_31 (struct nfp_net_dp*,char*,...) ;
 int FUNC_32 () ;
 int FUNC_33 () ;
 int FUNC_34 (struct sk_buff*,int) ;
 int FUNC_35 (struct sk_buff*,unsigned int) ;
 int FUNC_36 (struct sk_buff*,int ) ;
 int FUNC_37 (struct sk_buff*,unsigned int) ;
 int FUNC_38 (struct sk_buff*) ;
 int FUNC_39 (struct sk_buff*,int ,int ) ;
 int FUNC_40 (struct net_device*,struct bpf_prog*,int) ;
 int FUNC_41 (int *) ;
 int FUNC_42 (int *) ;
 scalar_t__ FUNC_43 (int) ;

__attribute__((used)) static int FUNC_44(struct nfp_net_rx_ring *VAR_11, int VAR_12)
{
 struct nfp_net_r_vector *VAR_13 = VAR_11->r_vec;
 struct nfp_net_dp *VAR_14 = &VAR_13->nfp_net->dp;
 struct nfp_net_tx_ring *VAR_15;
 struct bpf_prog *VAR_16;
 bool VAR_17 = 0;
 unsigned int VAR_18;
 struct sk_buff *VAR_19;
 int VAR_20 = 0;
 struct xdp_buff VAR_21;
 int VAR_22;

 FUNC_32();
 VAR_16 = FUNC_1(VAR_14->xdp_prog);
 VAR_18 = VAR_16 ? VAR_6 : VAR_14->fl_bufsz;
 VAR_21.rxq = &VAR_11->xdp_rxq;
 VAR_15 = VAR_13->xdp_ring;

 while (VAR_20 < VAR_12) {
  unsigned int VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
  struct nfp_net_rx_buf *VAR_28;
  struct nfp_net_rx_desc *VAR_29;
  struct nfp_meta_parsed VAR_30;
  bool VAR_31 = 0;
  struct net_device *VAR_32;
  dma_addr_t VAR_33;
  u32 VAR_34 = 0;
  void *VAR_35;

  VAR_22 = FUNC_0(VAR_11, VAR_11->rd_p);

  VAR_29 = &VAR_11->rxds[VAR_22];
  if (!(VAR_29->rxd.meta_len_dd & VAR_7))
   break;




  FUNC_8();

  FUNC_13(&VAR_30, 0, sizeof(VAR_30));

  VAR_11->rd_p++;
  VAR_20++;

  VAR_28 = &VAR_11->rxbufs[VAR_22];
  VAR_23 = VAR_29->rxd.meta_len_dd & VAR_9;
  VAR_24 = FUNC_11(VAR_29->rxd.data_len);
  VAR_26 = VAR_24 - VAR_23;

  VAR_27 = VAR_5 + VAR_14->rx_dma_off;
  if (VAR_14->rx_offset == VAR_3)
   VAR_27 += VAR_23;
  else
   VAR_27 += VAR_14->rx_offset;
  VAR_25 = VAR_27 - VAR_23;


  FUNC_41(&VAR_13->rx_sync);
  VAR_13->rx_pkts++;
  VAR_13->rx_bytes += VAR_26;
  FUNC_42(&VAR_13->rx_sync);

  if (FUNC_43(VAR_23 > VAR_4 ||
        (VAR_14->rx_offset && VAR_23 > VAR_14->rx_offset))) {
   FUNC_31(VAR_14, "oversized RX packet metadata %u\n",
       VAR_23);
   FUNC_23(VAR_14, VAR_13, VAR_11, VAR_28, ((void*)0));
   continue;
  }

  FUNC_18(VAR_14, VAR_28->dma_addr + VAR_25,
     VAR_24);

  if (!VAR_14->chained_metadata_format) {
   FUNC_25(VAR_14->netdev, &VAR_30,
           VAR_28->frag + VAR_25, VAR_29);
  } else if (VAR_23) {
   void *VAR_36;

   VAR_36 = FUNC_21(VAR_14->netdev, &VAR_30,
       VAR_28->frag + VAR_25,
       VAR_23);
   if (FUNC_43(VAR_36 != VAR_28->frag + VAR_27)) {
    FUNC_31(VAR_14, "invalid RX packet metadata\n");
    FUNC_23(VAR_14, VAR_13, VAR_11, VAR_28,
      ((void*)0));
    continue;
   }
  }

  if (VAR_16 && !VAR_30.portid) {
   void *VAR_37 = VAR_28->frag + VAR_27;
   unsigned int VAR_38;
   int VAR_39;

   VAR_21.data_hard_start = VAR_28->frag + VAR_5;
   VAR_21.data = VAR_37;
   VAR_21.data_meta = VAR_37;
   VAR_21.data_end = VAR_37 + VAR_26;

   VAR_39 = FUNC_4(VAR_16, &VAR_21);

   VAR_26 = VAR_21.data_end - VAR_21.data;
   VAR_27 += VAR_21.data - VAR_37;

   switch (VAR_39) {
   case 129:
    VAR_34 = VAR_21.data - VAR_21.data_meta;
    break;
   case 128:
    VAR_38 = VAR_27 - VAR_5;
    if (FUNC_43(!FUNC_26(VAR_14, VAR_11,
         VAR_15, VAR_28,
         VAR_38,
         VAR_26,
         &VAR_17)))
     FUNC_40(VAR_14->netdev,
           VAR_16, VAR_39);
    continue;
   default:
    FUNC_5(VAR_39);

   case 131:
    FUNC_40(VAR_14->netdev, VAR_16, VAR_39);

   case 130:
    FUNC_24(VAR_14, VAR_11, VAR_28->frag,
          VAR_28->dma_addr);
    continue;
   }
  }

  if (FUNC_12(!VAR_30.portid)) {
   VAR_32 = VAR_14->netdev;
  } else if (VAR_30.portid == VAR_2) {
   struct nfp_net *VAR_40 = FUNC_15(VAR_14->netdev);

   FUNC_16(VAR_40->app, VAR_28->frag + VAR_27,
         VAR_26);
   FUNC_24(VAR_14, VAR_11, VAR_28->frag,
         VAR_28->dma_addr);
   continue;
  } else {
   struct nfp_net *VAR_41;

   VAR_41 = FUNC_15(VAR_14->netdev);
   VAR_32 = FUNC_17(VAR_41->app, VAR_30.portid,
       &VAR_31);
   if (FUNC_43(!VAR_32)) {
    FUNC_23(VAR_14, VAR_13, VAR_11, VAR_28,
      ((void*)0));
    continue;
   }

   if (FUNC_29(VAR_32))
    FUNC_30(VAR_32, VAR_26);
  }

  VAR_19 = FUNC_6(VAR_28->frag, VAR_18);
  if (FUNC_43(!VAR_19)) {
   FUNC_23(VAR_14, VAR_13, VAR_11, VAR_28, ((void*)0));
   continue;
  }
  VAR_35 = FUNC_20(VAR_14, &VAR_33);
  if (FUNC_43(!VAR_35)) {
   FUNC_23(VAR_14, VAR_13, VAR_11, VAR_28, VAR_19);
   continue;
  }

  FUNC_19(VAR_14, VAR_28->dma_addr);

  FUNC_24(VAR_14, VAR_11, VAR_35, VAR_33);

  FUNC_37(VAR_19, VAR_27);
  FUNC_35(VAR_19, VAR_26);

  VAR_19->mark = VAR_30.mark;
  FUNC_39(VAR_19, VAR_30.hash, VAR_30.hash_type);

  FUNC_36(VAR_19, VAR_11->idx);
  VAR_19->protocol = FUNC_9(VAR_19, VAR_32);

  FUNC_22(VAR_14, VAR_13, VAR_29, &VAR_30, VAR_19);
  if (VAR_29->rxd.flags & VAR_10)
   FUNC_3(VAR_19, FUNC_10(VAR_1),
            FUNC_11(VAR_29->rxd.vlan));
  if (VAR_34)
   FUNC_34(VAR_19, VAR_34);

  if (FUNC_12(!VAR_31)) {
   FUNC_14(&VAR_11->r_vec->napi, VAR_19);
  } else {
   VAR_19->dev = VAR_32;
   FUNC_38(VAR_19);
   FUNC_2(VAR_19, VAR_0);
   FUNC_7(VAR_19);
  }
 }

 if (VAR_16) {
  if (VAR_15->wr_ptr_add)
   FUNC_27(VAR_15);
  else if (FUNC_43(VAR_15->wr_p != VAR_15->rd_p) &&
    !VAR_17)
   if (!FUNC_28(VAR_15))
    VAR_20 = VAR_12;
 }
 FUNC_33();

 return VAR_20;
}
