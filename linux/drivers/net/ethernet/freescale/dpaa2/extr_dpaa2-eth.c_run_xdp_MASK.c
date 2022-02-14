
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct xdp_buff {void* data; void* data_end; void* data_hard_start; int * rxq; } ;
struct rtnl_link_stats64 {int tx_bytes; int tx_packets; int tx_errors; } ;
struct dpaa2_fd {int dummy; } ;
struct dpaa2_eth_priv {TYPE_4__* net_dev; int percpu_stats; } ;
struct dpaa2_eth_fq {int flowid; } ;
struct TYPE_8__ {int res; int prog; } ;
struct TYPE_7__ {int xdp_redirect; int xdp_drop; int xdp_tx; int xdp_tx_err; } ;
struct dpaa2_eth_channel {TYPE_3__ xdp; TYPE_2__ stats; int buf_count; int xdp_rxq; } ;
struct bpf_prog {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_6__ {int parent; } ;
struct TYPE_9__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bpf_prog* FUNC_0 (int ) ;


 int VAR_2 ;



 int FUNC_1 (struct bpf_prog*,struct xdp_buff*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (struct dpaa2_fd*) ;
 int FUNC_5 (struct dpaa2_fd*) ;
 int FUNC_6 (struct dpaa2_fd*) ;
 int FUNC_7 (struct dpaa2_fd*,int) ;
 int FUNC_8 (struct dpaa2_fd*,int) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 struct rtnl_link_stats64* FUNC_11 (int ) ;
 int FUNC_12 (TYPE_4__*,struct bpf_prog*,int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (TYPE_4__*,struct xdp_buff*,struct bpf_prog*) ;
 int FUNC_15 (struct dpaa2_eth_priv*,struct dpaa2_fd*,void*,int ) ;
 int FUNC_16 (struct dpaa2_eth_priv*,struct dpaa2_eth_channel*,int ) ;
 int FUNC_17 (struct xdp_buff*) ;

__attribute__((used)) static u32 FUNC_18(struct dpaa2_eth_priv *VAR_3,
     struct dpaa2_eth_channel *VAR_4,
     struct dpaa2_eth_fq *VAR_5,
     struct dpaa2_fd *VAR_6, void *VAR_7)
{
 dma_addr_t VAR_8 = FUNC_4(VAR_6);
 struct rtnl_link_stats64 *VAR_9;
 struct bpf_prog *VAR_10;
 struct xdp_buff VAR_11;
 u32 VAR_12 = 130;
 int VAR_13;

 VAR_9 = FUNC_11(VAR_3->percpu_stats);

 FUNC_9();

 VAR_10 = FUNC_0(VAR_4->xdp.prog);
 if (!VAR_10)
  goto out;

 VAR_11.data = VAR_7 + FUNC_6(VAR_6);
 VAR_11.data_end = VAR_11.data + FUNC_5(VAR_6);
 VAR_11.data_hard_start = VAR_11.data - VAR_2;
 FUNC_17(&VAR_11);
 VAR_11.rxq = &VAR_4->xdp_rxq;

 VAR_12 = FUNC_1(VAR_10, &VAR_11);


 FUNC_8(VAR_6, VAR_11.data - VAR_7);
 FUNC_7(VAR_6, VAR_11.data_end - VAR_11.data);

 switch (VAR_12) {
 case 130:
  break;
 case 128:
  VAR_13 = FUNC_15(VAR_3, VAR_6, VAR_7, VAR_5->flowid);
  if (VAR_13) {
   FUNC_16(VAR_3, VAR_4, VAR_8);
   VAR_9->tx_errors++;
   VAR_4->stats.xdp_tx_err++;
  } else {
   VAR_9->tx_packets++;
   VAR_9->tx_bytes += FUNC_5(VAR_6);
   VAR_4->stats.xdp_tx++;
  }
  break;
 default:
  FUNC_2(VAR_12);

 case 132:
  FUNC_12(VAR_3->net_dev, VAR_10, VAR_12);

 case 131:
  FUNC_16(VAR_3, VAR_4, VAR_8);
  VAR_4->stats.xdp_drop++;
  break;
 case 129:
  FUNC_3(VAR_3->net_dev->dev.parent, VAR_8,
          VAR_1, VAR_0);
  VAR_4->buf_count--;
  VAR_11.data_hard_start = VAR_7;
  VAR_13 = FUNC_14(VAR_3->net_dev, &VAR_11, VAR_10);
  if (FUNC_13(VAR_13))
   VAR_4->stats.xdp_drop++;
  else
   VAR_4->stats.xdp_redirect++;
  break;
 }

 VAR_4->xdp.res |= VAR_12;
out:
 FUNC_10();
 return VAR_12;
}
