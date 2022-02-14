
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct sk_buff {scalar_t__ len; scalar_t__ sk; } ;
struct rtnl_link_stats64 {int tx_bytes; int tx_packets; int tx_errors; int tx_dropped; } ;
struct netdev_queue {int dummy; } ;
struct net_device {scalar_t__ num_tc; } ;
struct dpaa2_fd {int dummy; } ;
struct dpaa2_eth_priv {int (* enqueue ) (struct dpaa2_eth_priv*,struct dpaa2_eth_fq*,struct dpaa2_fd*,scalar_t__) ;struct dpaa2_eth_fq* fq; int percpu_extras; int percpu_stats; } ;
struct dpaa2_eth_fq {int dummy; } ;
struct dpaa2_eth_drv_stats {int tx_portal_busy; int tx_sg_bytes; int tx_sg_frames; int tx_reallocs; } ;
typedef int netdev_tx_t ;
typedef int fd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dpaa2_eth_priv*,struct sk_buff*,struct dpaa2_fd*) ;
 int FUNC_1 (struct dpaa2_eth_priv*,struct sk_buff*,struct dpaa2_fd*) ;
 int FUNC_2 (struct sk_buff*) ;
 unsigned int FUNC_3 (struct dpaa2_eth_priv*,struct sk_buff*) ;
 size_t FUNC_4 (struct dpaa2_eth_priv*) ;
 scalar_t__ FUNC_5 (struct dpaa2_fd*) ;
 int FUNC_6 (struct dpaa2_eth_priv*,struct dpaa2_eth_fq*,struct dpaa2_fd*,int) ;
 int FUNC_7 (struct dpaa2_fd*,int ,int) ;
 struct netdev_queue* FUNC_8 (struct net_device*,size_t) ;
 struct dpaa2_eth_priv* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct netdev_queue*,int,scalar_t__) ;
 int FUNC_11 (struct netdev_queue*,scalar_t__) ;
 scalar_t__ FUNC_12 (struct net_device*,size_t) ;
 size_t FUNC_13 (struct sk_buff*) ;
 unsigned int FUNC_14 (struct sk_buff*) ;
 scalar_t__ FUNC_15 (struct sk_buff*) ;
 struct sk_buff* FUNC_16 (struct sk_buff*,unsigned int) ;
 int FUNC_17 (struct sk_buff*,scalar_t__) ;
 struct sk_buff* FUNC_18 (struct sk_buff*,int ) ;
 int FUNC_19 (struct dpaa2_eth_priv*,struct dpaa2_eth_fq*,struct dpaa2_fd*,scalar_t__) ;
 void* FUNC_20 (int ) ;
 int FUNC_21 (struct net_device*,struct dpaa2_fd*) ;
 scalar_t__ FUNC_22 (int) ;

__attribute__((used)) static netdev_tx_t FUNC_23(struct sk_buff *VAR_4, struct net_device *VAR_5)
{
 struct dpaa2_eth_priv *VAR_6 = FUNC_9(VAR_5);
 struct dpaa2_fd VAR_7;
 struct rtnl_link_stats64 *VAR_8;
 struct dpaa2_eth_drv_stats *VAR_9;
 struct dpaa2_eth_fq *VAR_10;
 struct netdev_queue *VAR_11;
 u16 VAR_12;
 unsigned int VAR_13;
 u32 VAR_14;
 u8 VAR_15 = 0;
 int VAR_16, VAR_17;

 VAR_8 = FUNC_20(VAR_6->percpu_stats);
 VAR_9 = FUNC_20(VAR_6->percpu_extras);

 VAR_13 = FUNC_3(VAR_6, VAR_4);
 if (FUNC_14(VAR_4) < VAR_13) {
  struct sk_buff *VAR_18;

  VAR_18 = FUNC_16(VAR_4, VAR_13);
  if (FUNC_22(!VAR_18)) {
   VAR_8->tx_dropped++;
   goto err_alloc_headroom;
  }
  VAR_9->tx_reallocs++;

  if (VAR_4->sk)
   FUNC_17(VAR_18, VAR_4->sk);

  FUNC_2(VAR_4);
  VAR_4 = VAR_18;
 }




 VAR_4 = FUNC_18(VAR_4, VAR_2);
 if (FUNC_22(!VAR_4)) {

  VAR_8->tx_dropped++;
  return VAR_3;
 }


 FUNC_7(&VAR_7, 0, sizeof(VAR_7));

 if (FUNC_15(VAR_4)) {
  VAR_16 = FUNC_0(VAR_6, VAR_4, &VAR_7);
  VAR_9->tx_sg_frames++;
  VAR_9->tx_sg_bytes += VAR_4->len;
 } else {
  VAR_16 = FUNC_1(VAR_6, VAR_4, &VAR_7);
 }

 if (FUNC_22(VAR_16)) {
  VAR_8->tx_dropped++;
  goto err_build_fd;
 }


 FUNC_21(VAR_5, &VAR_7);





 VAR_12 = FUNC_13(VAR_4);

 if (VAR_5->num_tc) {
  VAR_15 = FUNC_12(VAR_5, VAR_12);



  VAR_15 = VAR_5->num_tc - VAR_15 - 1;



  VAR_12 %= FUNC_4(VAR_6);
 }
 VAR_10 = &VAR_6->fq[VAR_12];

 VAR_14 = FUNC_5(&VAR_7);
 VAR_11 = FUNC_8(VAR_5, VAR_12);
 FUNC_11(VAR_11, VAR_14);




 for (VAR_17 = 0; VAR_17 < VAR_0; VAR_17++) {
  VAR_16 = VAR_6->enqueue(VAR_6, VAR_10, &VAR_7, VAR_15);
  if (VAR_16 != -VAR_1)
   break;
 }
 VAR_9->tx_portal_busy += VAR_17;
 if (FUNC_22(VAR_16 < 0)) {
  VAR_8->tx_errors++;

  FUNC_6(VAR_6, VAR_10, &VAR_7, 0);
  FUNC_10(VAR_11, 1, VAR_14);
 } else {
  VAR_8->tx_packets++;
  VAR_8->tx_bytes += VAR_14;
 }

 return VAR_3;

err_build_fd:
err_alloc_headroom:
 FUNC_2(VAR_4);

 return VAR_3;
}
