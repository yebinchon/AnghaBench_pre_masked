
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sk_buff {int queue_mapping; struct net_device* dev; } ;
struct net_device {int dummy; } ;
struct hns3_nic_priv {int dummy; } ;
typedef scalar_t__ netdev_tx_t ;
typedef enum hnae3_loop { ____Placeholder_hnae3_loop } hnae3_loop ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 struct sk_buff* FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (struct hns3_nic_priv*,scalar_t__) ;
 int FUNC_2 (struct hns3_nic_priv*,int ,int ,scalar_t__) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,struct net_device*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct net_device*,char*,int,...) ;
 struct hns3_nic_priv* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_10, enum hnae3_loop VAR_11)
{
 struct hns3_nic_priv *VAR_12 = FUNC_8(VAR_10);
 struct sk_buff *VAR_13;
 u32 VAR_14, VAR_15;
 int VAR_16 = 0;

 VAR_13 = FUNC_0(VAR_3 + VAR_0 + VAR_9,
   VAR_1);
 if (!VAR_13)
  return VAR_2;

 VAR_13->dev = VAR_10;
 FUNC_3(VAR_13);
 VAR_13->queue_mapping = VAR_5;

 VAR_15 = 0;
 for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++) {
  netdev_tx_t VAR_17;

  FUNC_9(VAR_13);
  VAR_17 = FUNC_4(VAR_13, VAR_10);
  if (VAR_17 == VAR_8) {
   VAR_15++;
  } else {
   FUNC_5(VAR_13);
   FUNC_7(VAR_10, "hns3_lb_run_test xmit failed: %d\n",
       VAR_17);
  }
 }
 if (VAR_15 != VAR_4) {
  VAR_16 = VAR_7;
  FUNC_7(VAR_10, "mode %d sent fail, cnt=0x%x, budget=0x%x\n",
      VAR_11, VAR_15, VAR_4);
  goto out;
 }


 FUNC_6(200);

 VAR_15 = FUNC_1(VAR_12, VAR_4);
 if (VAR_15 != VAR_4) {
  VAR_16 = VAR_6;
  FUNC_7(VAR_10, "mode %d recv fail, cnt=0x%x, budget=0x%x\n",
      VAR_11, VAR_15, VAR_4);
 }

out:
 FUNC_2(VAR_12, VAR_5,
         VAR_5,
         VAR_4);

 FUNC_5(VAR_13);
 return VAR_16;
}
