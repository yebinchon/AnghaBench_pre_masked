
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; int data; } ;
struct device {int dummy; } ;
struct ath10k_skb_cb {int eid; int paddr; } ;
struct ath10k_htc_hdr {int dummy; } ;
struct TYPE_4__ {int (* ep_tx_credits ) (struct ath10k*) ;} ;
struct ath10k_htc_ep {int tx_credits; TYPE_2__ ep_ops; scalar_t__ tx_credit_flow_enabled; int ul_pipe_id; int eid; } ;
struct ath10k_htc {struct ath10k* ar; int tx_lock; int target_credit_size; struct ath10k_htc_ep* endpoint; } ;
struct ath10k_hif_sg_item {int len; int paddr; int vaddr; struct sk_buff* transfer_context; int transfer_id; } ;
struct TYPE_3__ {scalar_t__ dev_type; } ;
struct ath10k {scalar_t__ state; TYPE_1__ bus_param; struct device* dev; } ;
typedef enum ath10k_htc_ep_id { ____Placeholder_ath10k_htc_ep_id } ath10k_htc_ep_id ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct ath10k_skb_cb* FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct ath10k*,int ,char*,int,int,int) ;
 int FUNC_3 (struct ath10k*,int ,struct ath10k_hif_sg_item*,int) ;
 int FUNC_4 (struct ath10k_htc_ep*,struct sk_buff*) ;
 int FUNC_5 (struct ath10k*,char*,int) ;
 int FUNC_6 (struct device*,int ,int ,int ) ;
 int FUNC_7 (struct device*,int ) ;
 int FUNC_8 (struct device*,int ,int ,int ) ;
 int FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct ath10k*) ;

int FUNC_14(struct ath10k_htc *VAR_9,
      enum ath10k_htc_ep_id VAR_10,
      struct sk_buff *VAR_11)
{
 struct ath10k *VAR_12 = VAR_9->ar;
 struct ath10k_htc_ep *VAR_13 = &VAR_9->endpoint[VAR_10];
 struct ath10k_skb_cb *VAR_14 = FUNC_0(VAR_11);
 struct ath10k_hif_sg_item VAR_15;
 struct device *VAR_16 = VAR_9->ar->dev;
 int VAR_17 = 0;
 int VAR_18;

 if (VAR_9->ar->state == VAR_3)
  return -VAR_6;

 if (VAR_10 >= VAR_2) {
  FUNC_5(VAR_12, "Invalid endpoint id: %d\n", VAR_10);
  return -VAR_8;
 }

 FUNC_10(VAR_11, sizeof(struct ath10k_htc_hdr));

 if (VAR_13->tx_credit_flow_enabled) {
  VAR_17 = FUNC_1(VAR_11->len, VAR_9->target_credit_size);
  FUNC_11(&VAR_9->tx_lock);
  if (VAR_13->tx_credits < VAR_17) {
   FUNC_2(VAR_12, VAR_0,
       "htc insufficient credits ep %d required %d available %d\n",
       VAR_10, VAR_17, VAR_13->tx_credits);
   FUNC_12(&VAR_9->tx_lock);
   VAR_18 = -VAR_5;
   goto err_pull;
  }
  VAR_13->tx_credits -= VAR_17;
  FUNC_2(VAR_12, VAR_0,
      "htc ep %d consumed %d credits (total %d)\n",
      VAR_10, VAR_17, VAR_13->tx_credits);
  FUNC_12(&VAR_9->tx_lock);
 }

 FUNC_4(VAR_13, VAR_11);

 VAR_14->eid = VAR_10;
 if (VAR_12->bus_param.dev_type != VAR_1) {
  VAR_14->paddr = FUNC_6(VAR_16, VAR_11->data, VAR_11->len,
            VAR_4);
  VAR_18 = FUNC_7(VAR_16, VAR_14->paddr);
  if (VAR_18) {
   VAR_18 = -VAR_7;
   goto err_credits;
  }
 }

 VAR_15.transfer_id = VAR_13->eid;
 VAR_15.transfer_context = VAR_11;
 VAR_15.vaddr = VAR_11->data;
 VAR_15.paddr = VAR_14->paddr;
 VAR_15.len = VAR_11->len;

 VAR_18 = FUNC_3(VAR_9->ar, VAR_13->ul_pipe_id, &VAR_15, 1);
 if (VAR_18)
  goto err_unmap;

 return 0;

err_unmap:
 if (VAR_12->bus_param.dev_type != VAR_1)
  FUNC_8(VAR_16, VAR_14->paddr, VAR_11->len, VAR_4);
err_credits:
 if (VAR_13->tx_credit_flow_enabled) {
  FUNC_11(&VAR_9->tx_lock);
  VAR_13->tx_credits += VAR_17;
  FUNC_2(VAR_12, VAR_0,
      "htc ep %d reverted %d credits back (total %d)\n",
      VAR_10, VAR_17, VAR_13->tx_credits);
  FUNC_12(&VAR_9->tx_lock);

  if (VAR_13->ep_ops.ep_tx_credits)
   VAR_13->ep_ops.ep_tx_credits(VAR_9->ar);
 }
err_pull:
 FUNC_9(VAR_11, sizeof(struct ath10k_htc_hdr));
 return VAR_18;
}
