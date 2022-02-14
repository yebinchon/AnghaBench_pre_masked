
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ len; scalar_t__ protocol; } ;
struct net_device {int dummy; } ;
struct atl1e_tpd_desc {int word3; scalar_t__ word2; } ;
struct atl1e_adapter {int flags; } ;
typedef int netdev_tx_t ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 struct atl1e_tpd_desc* FUNC_2 (struct atl1e_adapter*) ;
 scalar_t__ FUNC_3 (struct atl1e_adapter*) ;
 scalar_t__ FUNC_4 (struct atl1e_adapter*,struct sk_buff*,struct atl1e_tpd_desc*) ;
 scalar_t__ FUNC_5 (struct atl1e_adapter*,struct sk_buff*,struct atl1e_tpd_desc*) ;
 int FUNC_6 (struct atl1e_adapter*,scalar_t__,struct atl1e_tpd_desc*) ;
 int FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (int ) ;
 struct atl1e_adapter* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 scalar_t__ FUNC_11 (struct sk_buff*) ;
 scalar_t__ FUNC_12 (struct sk_buff*) ;
 scalar_t__ FUNC_13 (struct sk_buff*) ;
 scalar_t__ FUNC_14 (int ,int *) ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static netdev_tx_t FUNC_16(struct sk_buff *VAR_10,
       struct net_device *VAR_11)
{
 struct atl1e_adapter *VAR_12 = FUNC_9(VAR_11);
 u16 VAR_13 = 1;
 struct atl1e_tpd_desc *VAR_14;

 if (FUNC_14(VAR_9, &VAR_12->flags)) {
  FUNC_7(VAR_10);
  return VAR_3;
 }

 if (FUNC_15(VAR_10->len <= 0)) {
  FUNC_7(VAR_10);
  return VAR_3;
 }
 VAR_13 = FUNC_1(VAR_10);

 if (FUNC_3(VAR_12) < VAR_13) {

  FUNC_10(VAR_11);
  return VAR_2;
 }

 VAR_14 = FUNC_2(VAR_12);

 if (FUNC_13(VAR_10)) {
  u16 VAR_15 = FUNC_12(VAR_10);
  u16 VAR_16;

  VAR_14->word3 |= 1 << VAR_5;
  FUNC_0(VAR_15, VAR_16);
  VAR_14->word2 |= (VAR_16 & VAR_6) <<
    VAR_7;
 }

 if (VAR_10->protocol == FUNC_8(VAR_1))
  VAR_14->word3 |= 1 << VAR_8;

 if (FUNC_11(VAR_10) != VAR_0)
  VAR_14->word3 |= 1 << VAR_4;


 if (FUNC_4(VAR_12, VAR_10, VAR_14) != 0) {
  FUNC_7(VAR_10);
  return VAR_3;
 }

 if (FUNC_5(VAR_12, VAR_10, VAR_14)) {
  FUNC_7(VAR_10);
  goto out;
 }

 FUNC_6(VAR_12, VAR_13, VAR_14);
out:
 return VAR_3;
}
