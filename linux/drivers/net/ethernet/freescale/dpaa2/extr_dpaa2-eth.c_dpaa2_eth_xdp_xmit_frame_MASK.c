
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xdp_frame {unsigned int headroom; void* data; int len; } ;
struct rtnl_link_stats64 {int tx_bytes; int tx_packets; int tx_errors; int tx_dropped; } ;
struct TYPE_3__ {struct device* parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct dpaa2_fd {int dummy; } ;
struct TYPE_4__ {void* dma_size; struct xdp_frame* xdpf; } ;
struct dpaa2_eth_swa {TYPE_2__ xdp; int type; } ;
struct dpaa2_eth_priv {int (* enqueue ) (struct dpaa2_eth_priv*,struct dpaa2_eth_fq*,struct dpaa2_fd*,int ) ;struct dpaa2_eth_fq* fq; int percpu_extras; int percpu_stats; } ;
struct dpaa2_eth_fq {int dummy; } ;
struct dpaa2_eth_drv_stats {int tx_portal_busy; } ;
struct device {int dummy; } ;
typedef int fd ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (void*,int) ;
 int FUNC_1 (struct device*,void*,void*,int ) ;
 int FUNC_2 (struct device*,int ) ;
 unsigned int FUNC_3 (struct dpaa2_eth_priv*,int *) ;
 size_t FUNC_4 (struct dpaa2_eth_priv*) ;
 scalar_t__ FUNC_5 (struct dpaa2_fd*) ;
 int FUNC_6 (struct dpaa2_fd*,int ) ;
 int FUNC_7 (struct dpaa2_fd*,int ) ;
 int FUNC_8 (struct dpaa2_fd*,int ) ;
 int FUNC_9 (struct dpaa2_fd*,int ) ;
 int FUNC_10 (struct dpaa2_fd*,int) ;
 int VAR_8 ;
 int FUNC_11 (struct dpaa2_fd*,int ,int) ;
 struct dpaa2_eth_priv* FUNC_12 (struct net_device*) ;
 size_t FUNC_13 () ;
 int FUNC_14 (struct dpaa2_eth_priv*,struct dpaa2_eth_fq*,struct dpaa2_fd*,int ) ;
 void* FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int) ;

__attribute__((used)) static int FUNC_17(struct net_device *VAR_9,
        struct xdp_frame *VAR_10)
{
 struct dpaa2_eth_priv *VAR_11 = FUNC_12(VAR_9);
 struct device *VAR_12 = VAR_9->dev.parent;
 struct rtnl_link_stats64 *VAR_13;
 struct dpaa2_eth_drv_stats *VAR_14;
 unsigned int VAR_15;
 struct dpaa2_eth_swa *VAR_16;
 struct dpaa2_eth_fq *VAR_17;
 struct dpaa2_fd VAR_18;
 void *VAR_19, *VAR_20;
 dma_addr_t VAR_21;
 int VAR_22, VAR_23;




 VAR_15 = FUNC_3(VAR_11, ((void*)0));
 if (VAR_10->headroom < VAR_15)
  return -VAR_5;

 VAR_13 = FUNC_15(VAR_11->percpu_stats);
 VAR_14 = FUNC_15(VAR_11->percpu_extras);


 FUNC_11(&VAR_18, 0, sizeof(VAR_18));


 VAR_19 = VAR_10->data - VAR_15;
 VAR_20 = FUNC_0(VAR_19 - VAR_3,
      VAR_3);
 if (VAR_20 >= VAR_10->data - VAR_10->headroom)
  VAR_19 = VAR_20;

 VAR_16 = (struct dpaa2_eth_swa *)VAR_19;

 VAR_16->type = VAR_2;
 VAR_16->xdp.dma_size = VAR_10->data + VAR_10->len - VAR_19;
 VAR_16->xdp.xdpf = VAR_10;

 VAR_21 = FUNC_1(VAR_12, VAR_19,
         VAR_16->xdp.dma_size,
         VAR_0);
 if (FUNC_16(FUNC_2(VAR_12, VAR_21))) {
  VAR_13->tx_dropped++;
  return -VAR_6;
 }

 FUNC_6(&VAR_18, VAR_21);
 FUNC_10(&VAR_18, VAR_10->data - VAR_19);
 FUNC_9(&VAR_18, VAR_10->len);
 FUNC_8(&VAR_18, VAR_8);
 FUNC_7(&VAR_18, VAR_7);

 VAR_17 = &VAR_11->fq[FUNC_13() % FUNC_4(VAR_11)];
 for (VAR_23 = 0; VAR_23 < VAR_1; VAR_23++) {
  VAR_22 = VAR_11->enqueue(VAR_11, VAR_17, &VAR_18, 0);
  if (VAR_22 != -VAR_4)
   break;
 }
 VAR_14->tx_portal_busy += VAR_23;
 if (FUNC_16(VAR_22 < 0)) {
  VAR_13->tx_errors++;

  return VAR_22;
 }

 VAR_13->tx_packets++;
 VAR_13->tx_bytes += FUNC_5(&VAR_18);

 return 0;
}
