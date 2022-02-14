
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct rtnl_link_stats64 {int tx_errors; } ;
struct qm_fd {int cmd; } ;
struct netdev_queue {int trans_start; } ;
struct net_device {int dummy; } ;
struct dpaa_priv {scalar_t__ tx_tstamp; int tx_headroom; int percpu_priv; } ;
struct dpaa_percpu_priv {int tx_frag_skbuffs; struct rtnl_link_stats64 stats; } ;
typedef int netdev_tx_t ;
struct TYPE_2__ {scalar_t__ nr_frags; int tx_flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct dpaa_priv*,struct qm_fd*) ;
 scalar_t__ FUNC_5 (struct dpaa_priv*,struct rtnl_link_stats64*,int const,struct qm_fd*) ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (int) ;
 struct netdev_queue* FUNC_7 (struct net_device*,int const) ;
 struct dpaa_priv* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct qm_fd*) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int ) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*) ;
 TYPE_1__* FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct dpaa_priv*,struct sk_buff*,struct qm_fd*,int*) ;
 int FUNC_15 (struct dpaa_priv*,struct sk_buff*,struct qm_fd*) ;
 struct dpaa_percpu_priv* FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static netdev_tx_t
FUNC_18(struct sk_buff *VAR_6, struct net_device *VAR_7)
{
 const int VAR_8 = FUNC_11(VAR_6);
 bool VAR_9 = FUNC_12(VAR_6);
 struct rtnl_link_stats64 *VAR_10;
 struct dpaa_percpu_priv *VAR_11;
 struct netdev_queue *VAR_12;
 struct dpaa_priv *VAR_13;
 struct qm_fd VAR_14;
 int VAR_15 = 0;
 int VAR_16 = 0;

 VAR_13 = FUNC_8(VAR_7);
 VAR_11 = FUNC_16(VAR_13->percpu_priv);
 VAR_10 = &VAR_11->stats;

 FUNC_9(&VAR_14);

 if (!VAR_9) {






  if (FUNC_10(VAR_6, VAR_13->tx_headroom))
   goto enomem;

  FUNC_0(FUNC_12(VAR_6));
 }




 if (FUNC_17(VAR_9 &&
       (FUNC_13(VAR_6)->nr_frags >= VAR_0))) {



  if (FUNC_1(VAR_6))
   goto enomem;

  VAR_9 = FUNC_12(VAR_6);
 }

 if (VAR_9) {

  VAR_16 = FUNC_15(VAR_13, VAR_6, &VAR_14);
  VAR_11->tx_frag_skbuffs++;
 } else {

  VAR_16 = FUNC_14(VAR_13, VAR_6, &VAR_14, &VAR_15);
 }
 if (FUNC_17(VAR_16 < 0))
  goto skb_to_fd_failed;

 VAR_12 = FUNC_7(VAR_7, VAR_8);


 VAR_12->trans_start = VAR_5;

 if (VAR_13->tx_tstamp && FUNC_13(VAR_6)->tx_flags & VAR_3) {
  VAR_14.cmd |= FUNC_2(VAR_1);
  FUNC_13(VAR_6)->tx_flags |= VAR_4;
 }

 if (FUNC_6(FUNC_5(VAR_13, VAR_10, VAR_8, &VAR_14) == 0))
  return VAR_2;

 FUNC_4(VAR_13, &VAR_14);
skb_to_fd_failed:
enomem:
 VAR_10->tx_errors++;
 FUNC_3(VAR_6);
 return VAR_2;
}
