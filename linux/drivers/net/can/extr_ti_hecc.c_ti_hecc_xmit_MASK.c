
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ti_hecc_priv {int tx_head; int mbx_lock; int tx_tail; int ndev; } ;
struct sk_buff {scalar_t__ data; } ;
struct net_device {int dummy; } ;
struct can_frame {int can_dlc; int can_id; scalar_t__ data; } ;
typedef int netdev_tx_t ;
typedef int __be32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct net_device*,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,struct net_device*,int) ;
 int FUNC_4 (struct ti_hecc_priv*) ;
 int FUNC_5 (struct ti_hecc_priv*) ;
 int FUNC_6 (struct ti_hecc_priv*,int ) ;
 int FUNC_7 (struct ti_hecc_priv*,int ,int) ;
 int FUNC_8 (struct ti_hecc_priv*,int ,int) ;
 int FUNC_9 (struct ti_hecc_priv*,int,int ,int) ;
 int FUNC_10 (int ,char*,int,int ) ;
 struct ti_hecc_priv* FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static netdev_tx_t FUNC_16(struct sk_buff *VAR_15, struct net_device *VAR_16)
{
 struct ti_hecc_priv *VAR_17 = FUNC_11(VAR_16);
 struct can_frame *VAR_18 = (struct can_frame *)VAR_15->data;
 u32 VAR_19, VAR_20, VAR_21;
 unsigned long VAR_22;

 if (FUNC_2(VAR_16, VAR_15))
  return VAR_14;

 VAR_19 = FUNC_4(VAR_17);
 VAR_20 = FUNC_0(VAR_19);
 FUNC_13(&VAR_17->mbx_lock, VAR_22);
 if (FUNC_15(FUNC_6(VAR_17, VAR_8) & VAR_20)) {
  FUNC_14(&VAR_17->mbx_lock, VAR_22);
  FUNC_12(VAR_16);
  FUNC_10(VAR_17->ndev,
      "BUG: TX mbx not ready tx_head=%08X, tx_tail=%08X\n",
      VAR_17->tx_head, VAR_17->tx_tail);
  return VAR_13;
 }
 FUNC_14(&VAR_17->mbx_lock, VAR_22);


 VAR_21 = VAR_18->can_dlc | (FUNC_5(VAR_17) << 8);
 if (VAR_18->can_id & VAR_2)
  VAR_21 |= VAR_5;
 FUNC_9(VAR_17, VAR_19, VAR_4, VAR_21);

 if (VAR_18->can_id & VAR_0)
  VAR_21 = (VAR_18->can_id & VAR_1) | VAR_10;
 else
  VAR_21 = (VAR_18->can_id & VAR_3) << 18;
 FUNC_9(VAR_17, VAR_19, VAR_9, VAR_21);
 FUNC_9(VAR_17, VAR_19, VAR_7,
         FUNC_1(*(__be32 *)(VAR_18->data)));
 if (VAR_18->can_dlc > 4)
  FUNC_9(VAR_17, VAR_19, VAR_6,
          FUNC_1(*(__be32 *)(VAR_18->data + 4)));
 else
  *(u32 *)(VAR_18->data + 4) = 0;
 FUNC_3(VAR_15, VAR_16, VAR_19);

 FUNC_13(&VAR_17->mbx_lock, VAR_22);
 --VAR_17->tx_head;
 if ((FUNC_6(VAR_17, VAR_8) & FUNC_0(FUNC_4(VAR_17))) ||
     (VAR_17->tx_head & VAR_12) == VAR_12) {
  FUNC_12(VAR_16);
 }
 FUNC_7(VAR_17, VAR_8, VAR_20);
 FUNC_14(&VAR_17->mbx_lock, VAR_22);

 FUNC_8(VAR_17, VAR_11, VAR_20);

 return VAR_14;
}
