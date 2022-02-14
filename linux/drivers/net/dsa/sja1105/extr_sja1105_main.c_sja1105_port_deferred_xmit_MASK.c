
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct skb_shared_hwtstamps {int hwtstamp; int member_0; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int (* read ) (TYPE_1__*) ;} ;
struct sja1105_private {int mgmt_lock; int ptp_lock; int tstamp_tc; TYPE_1__ tstamp_cc; struct sja1105_port* ports; } ;
struct sja1105_port {int mgmt_slot; } ;
struct dsa_switch {int dev; struct sja1105_private* priv; } ;
typedef int netdev_tx_t ;
struct TYPE_6__ {struct sk_buff* clone; } ;
struct TYPE_5__ {int tx_flags; } ;


 TYPE_3__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct dsa_switch*,int,int,struct sk_buff*,int) ;
 int FUNC_7 (struct sja1105_private*,int,int *) ;
 int FUNC_8 (struct sja1105_private*,int ,int ) ;
 int FUNC_9 (struct sk_buff*,struct skb_shared_hwtstamps*) ;
 TYPE_2__* FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int *,int ) ;

__attribute__((used)) static netdev_tx_t FUNC_13(struct dsa_switch *VAR_2, int VAR_3,
           struct sk_buff *VAR_4)
{
 struct sja1105_private *VAR_5 = VAR_2->priv;
 struct sja1105_port *VAR_6 = &VAR_5->ports[VAR_3];
 struct skb_shared_hwtstamps VAR_7 = {0};
 int VAR_8 = VAR_6->mgmt_slot;
 struct sk_buff *VAR_9;
 u64 VAR_10, VAR_11;
 int VAR_12;
 FUNC_3(&VAR_5->mgmt_lock);


 VAR_9 = FUNC_0(VAR_4)->clone;

 FUNC_6(VAR_2, VAR_3, VAR_8, VAR_4, !!VAR_9);

 if (!VAR_9)
  goto out;

 FUNC_10(VAR_9)->tx_flags |= VAR_1;

 FUNC_3(&VAR_5->ptp_lock);

 VAR_10 = VAR_5->tstamp_cc.read(&VAR_5->tstamp_cc);

 VAR_12 = FUNC_7(VAR_5, VAR_8, &VAR_11);
 if (VAR_12 < 0) {
  FUNC_1(VAR_2->dev, "xmit: timed out polling for tstamp\n");
  FUNC_2(VAR_9);
  goto out_unlock_ptp;
 }

 VAR_11 = FUNC_8(VAR_5, VAR_10, VAR_11);
 VAR_11 = FUNC_12(&VAR_5->tstamp_tc, VAR_11);

 VAR_7.hwtstamp = FUNC_5(VAR_11);
 FUNC_9(VAR_9, &VAR_7);

out_unlock_ptp:
 FUNC_4(&VAR_5->ptp_lock);
out:
 FUNC_4(&VAR_5->mgmt_lock);
 return VAR_0;
}
