
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sk_buff {int len; } ;
struct net_device {int dummy; } ;
struct atl1c_tpd_desc {int word1; int vlan_tag; } ;
struct atl1c_adapter {int netdev; int flags; } ;
typedef int netdev_tx_t ;
typedef enum atl1c_trans_queue { ____Placeholder_atl1c_trans_queue } atl1c_trans_queue ;
typedef int __le16 ;


 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 struct atl1c_tpd_desc* FUNC_2 (struct atl1c_adapter*,int) ;
 scalar_t__ FUNC_3 (struct atl1c_adapter*,int) ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (struct atl1c_adapter*,struct sk_buff*,struct atl1c_tpd_desc**,int) ;
 scalar_t__ FUNC_5 (struct atl1c_adapter*,struct sk_buff*,struct atl1c_tpd_desc*,int) ;
 int FUNC_6 (struct atl1c_adapter*,struct sk_buff*,struct atl1c_tpd_desc*,int) ;
 int FUNC_7 (struct atl1c_adapter*,struct atl1c_tpd_desc*,int) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct sk_buff*) ;
 struct atl1c_adapter* FUNC_10 (struct net_device*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (struct atl1c_adapter*,int ,int ,char*) ;
 int FUNC_13 (struct net_device*) ;
 scalar_t__ FUNC_14 (struct sk_buff*) ;
 scalar_t__ FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*) ;
 scalar_t__ FUNC_17 (int ,int *) ;
 int VAR_7 ;
 scalar_t__ FUNC_18 (int ) ;

__attribute__((used)) static netdev_tx_t FUNC_19(struct sk_buff *VAR_8,
       struct net_device *VAR_9)
{
 struct atl1c_adapter *VAR_10 = FUNC_10(VAR_9);
 u16 VAR_11;
 struct atl1c_tpd_desc *VAR_12;
 enum atl1c_trans_queue VAR_13 = VAR_6;

 if (FUNC_17(VAR_5, &VAR_10->flags)) {
  FUNC_9(VAR_8);
  return VAR_2;
 }

 VAR_11 = FUNC_1(VAR_8);

 if (FUNC_3(VAR_10, VAR_13) < VAR_11) {

  FUNC_13(VAR_9);
  return VAR_1;
 }

 VAR_12 = FUNC_2(VAR_10, VAR_13);


 if (FUNC_4(VAR_10, VAR_8, &VAR_12, VAR_13) != 0) {
  FUNC_9(VAR_8);
  return VAR_2;
 }

 if (FUNC_18(FUNC_16(VAR_8))) {
  u16 VAR_14 = FUNC_15(VAR_8);
  __le16 VAR_15;

  VAR_14 = FUNC_8(VAR_14);
  FUNC_0(VAR_14, VAR_15);
  VAR_12->word1 |= 1 << VAR_4;
  VAR_12->vlan_tag = VAR_15;
 }

 if (FUNC_14(VAR_8) != VAR_0)
  VAR_12->word1 |= 1 << VAR_3;

 if (FUNC_5(VAR_10, VAR_8, VAR_12, VAR_13) < 0) {
  FUNC_12(VAR_10, VAR_7, VAR_10->netdev,
      "tx-skb dropped due to dma error\n");

  FUNC_7(VAR_10, VAR_12, VAR_13);
  FUNC_9(VAR_8);
 } else {
  FUNC_11(VAR_10->netdev, VAR_8->len);
  FUNC_6(VAR_10, VAR_8, VAR_12, VAR_13);
 }

 return VAR_2;
}
