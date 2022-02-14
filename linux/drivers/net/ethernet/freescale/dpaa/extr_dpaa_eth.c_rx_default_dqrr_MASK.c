
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct skb_shared_hwtstamps {int hwtstamp; } ;
struct sk_buff {unsigned int len; int protocol; } ;
struct rtnl_link_stats64 {unsigned int rx_bytes; int rx_packets; int rx_dropped; int rx_errors; } ;
struct qman_portal {int dummy; } ;
struct qman_fq {int dummy; } ;
typedef struct qm_fd {int status; int bpid; } const qm_fd ;
struct qm_dqrr_entry {struct qm_fd const fd; } ;
struct TYPE_3__ {int parent; } ;
struct net_device {int features; TYPE_1__ dev; } ;
struct dpaa_priv {TYPE_2__* mac_dev; scalar_t__ keygen_in_use; scalar_t__ rx_tstamp; int percpu_priv; } ;
struct dpaa_percpu_priv {struct rtnl_link_stats64 stats; } ;
struct dpaa_fq {struct net_device* net_dev; } ;
struct dpaa_bp {int percpu_count; int size; int dev; } ;
typedef enum qman_cb_dqrr_result { ____Placeholder_qman_cb_dqrr_result } qman_cb_dqrr_result ;
typedef enum qm_fd_format { ____Placeholder_qm_fd_format } qm_fd_format ;
typedef enum pkt_hash_types { ____Placeholder_pkt_hash_types } pkt_hash_types ;
typedef int dma_addr_t ;
struct TYPE_4__ {int * port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct sk_buff* FUNC_2 (struct dpaa_priv*,struct qm_fd const*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 struct dpaa_bp* FUNC_5 (int ) ;
 int FUNC_6 (struct dpaa_percpu_priv*,struct qman_portal*) ;
 int FUNC_7 (struct dpaa_priv*) ;
 int FUNC_8 (struct net_device*,struct qm_fd const*) ;
 int FUNC_9 (struct sk_buff*,struct net_device*) ;
 int FUNC_10 (int ,int*) ;
 int FUNC_11 (int ,void*,int *) ;
 int VAR_8 ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (struct skb_shared_hwtstamps*,int ,int) ;
 scalar_t__ FUNC_14 () ;
 struct dpaa_priv* FUNC_15 (struct net_device*) ;
 scalar_t__ FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct dpaa_priv*,int ,struct net_device*,char*,int) ;
 int FUNC_18 (int ) ;
 void* FUNC_19 (int ) ;
 int FUNC_20 (void*) ;
 int FUNC_21 (struct qm_fd const*) ;
 int VAR_9 ;
 int FUNC_22 (struct qm_fd const*) ;
 int FUNC_23 (struct qm_fd const*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct sk_buff* FUNC_24 (struct dpaa_priv*,struct qm_fd const*) ;
 struct skb_shared_hwtstamps* FUNC_25 (struct sk_buff*) ;
 int FUNC_26 (struct sk_buff*,int,int) ;
 void* FUNC_27 (int ) ;
 int FUNC_28 (struct net_device*,struct qman_fq*,struct qm_fd const*) ;
 scalar_t__ FUNC_29 (int) ;

__attribute__((used)) static enum qman_cb_dqrr_result FUNC_30(struct qman_portal *VAR_13,
      struct qman_fq *VAR_14,
      const struct qm_dqrr_entry *VAR_15)
{
 struct skb_shared_hwtstamps *VAR_16;
 struct rtnl_link_stats64 *VAR_17;
 struct dpaa_percpu_priv *VAR_18;
 const struct qm_fd *VAR_19 = &VAR_15->fd;
 dma_addr_t VAR_20 = FUNC_21(VAR_19);
 enum qm_fd_format VAR_21;
 struct net_device *VAR_22;
 u32 VAR_23, VAR_24;
 struct dpaa_bp *VAR_25;
 struct dpaa_priv *VAR_26;
 unsigned int VAR_27;
 struct sk_buff *VAR_28;
 int *VAR_29;
 void *VAR_30;
 u64 VAR_31;

 VAR_23 = FUNC_1(VAR_19->status);
 VAR_21 = FUNC_22(VAR_19);
 VAR_22 = ((struct dpaa_fq *)VAR_14)->net_dev;
 VAR_26 = FUNC_15(VAR_22);
 VAR_25 = FUNC_5(VAR_15->fd.bpid);
 if (!VAR_25)
  return VAR_11;


 FUNC_28(VAR_22, VAR_14, &VAR_15->fd);

 VAR_18 = FUNC_27(VAR_26->percpu_priv);
 VAR_17 = &VAR_18->stats;

 if (FUNC_29(FUNC_6(VAR_18, VAR_13)))
  return VAR_12;


 if (FUNC_29(FUNC_7(VAR_26))) {




  FUNC_8(VAR_22, &VAR_15->fd);
  return VAR_11;
 }

 if (FUNC_29(VAR_23 & VAR_2) != 0) {
  if (FUNC_14())
   FUNC_17(VAR_26, VAR_8, VAR_22, "FD status = 0x%08x\n",
       VAR_23 & VAR_2);

  VAR_17->rx_errors++;
  FUNC_8(VAR_22, VAR_19);
  return VAR_11;
 }

 VAR_25 = FUNC_5(VAR_19->bpid);
 if (!VAR_25)
  return VAR_11;

 FUNC_4(VAR_25->dev, VAR_20, VAR_25->size, VAR_0);


 VAR_30 = FUNC_19(VAR_20);
 FUNC_20(VAR_30 + FUNC_23(VAR_19));


 FUNC_0((VAR_21 != VAR_9) && (VAR_21 != VAR_10));




 VAR_29 = FUNC_27(VAR_25->percpu_count);
 (*VAR_29)--;

 if (FUNC_12(VAR_21 == VAR_9))
  VAR_28 = FUNC_2(VAR_26, VAR_19);
 else
  VAR_28 = FUNC_24(VAR_26, VAR_19);
 if (!VAR_28)
  return VAR_11;

 if (VAR_26->rx_tstamp) {
  VAR_16 = FUNC_25(VAR_28);
  FUNC_13(VAR_16, 0, sizeof(*VAR_16));

  if (!FUNC_11(VAR_26->mac_dev->port[VAR_7], VAR_30, &VAR_31))
   VAR_16->hwtstamp = FUNC_18(VAR_31);
  else
   FUNC_3(VAR_22->dev.parent, "fman_port_get_tstamp failed!\n");
 }

 VAR_28->protocol = FUNC_9(VAR_28, VAR_22);

 if (VAR_22->features & VAR_3 && VAR_26->keygen_in_use &&
     !FUNC_10(VAR_26->mac_dev->port[VAR_7],
           &VAR_24)) {
  enum pkt_hash_types VAR_32;


  VAR_32 = FUNC_1(VAR_19->status) & VAR_1 ?
   VAR_6 : VAR_5;
  FUNC_26(VAR_28, FUNC_1(*(u32 *)(VAR_30 + VAR_24)),
        VAR_32);
 }

 VAR_27 = VAR_28->len;

 if (FUNC_29(FUNC_16(VAR_28) == VAR_4)) {
  VAR_17->rx_dropped++;
  return VAR_11;
 }

 VAR_17->rx_packets++;
 VAR_17->rx_bytes += VAR_27;

 return VAR_11;
}
