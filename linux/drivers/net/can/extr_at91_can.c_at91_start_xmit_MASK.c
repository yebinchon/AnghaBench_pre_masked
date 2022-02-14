
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {scalar_t__ data; } ;
struct net_device_stats {int tx_bytes; } ;
struct net_device {struct net_device_stats stats; } ;
struct can_frame {int can_id; int can_dlc; scalar_t__ data; } ;
struct at91_priv {int tx_next; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct at91_priv*,int ) ;
 int FUNC_7 (struct at91_priv*,int ,int) ;
 scalar_t__ FUNC_8 (struct net_device*,struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,struct net_device*,scalar_t__) ;
 scalar_t__ FUNC_10 (struct at91_priv*) ;
 int FUNC_11 (struct at91_priv*) ;
 unsigned int FUNC_12 (struct at91_priv*) ;
 unsigned int FUNC_13 (struct at91_priv*) ;
 int FUNC_14 (struct net_device*,char*) ;
 struct at91_priv* FUNC_15 (struct net_device*) ;
 int FUNC_16 (struct net_device*) ;
 int FUNC_17 (struct at91_priv*,unsigned int,int ) ;
 int FUNC_18 (struct at91_priv*,unsigned int,int ,unsigned int) ;
 scalar_t__ FUNC_19 (int) ;

__attribute__((used)) static netdev_tx_t FUNC_20(struct sk_buff *VAR_9, struct net_device *VAR_10)
{
 struct at91_priv *VAR_11 = FUNC_15(VAR_10);
 struct net_device_stats *VAR_12 = &VAR_10->stats;
 struct can_frame *VAR_13 = (struct can_frame *)VAR_9->data;
 unsigned int VAR_14, VAR_15;
 u32 VAR_16, VAR_17;

 if (FUNC_8(VAR_10, VAR_9))
  return VAR_8;

 VAR_14 = FUNC_12(VAR_11);
 VAR_15 = FUNC_13(VAR_11);

 if (FUNC_19(!(FUNC_6(VAR_11, FUNC_4(VAR_14)) & VAR_5))) {
  FUNC_16(VAR_10);

  FUNC_14(VAR_10, "BUG! TX buffer full when queue awake!\n");
  return VAR_7;
 }
 VAR_16 = FUNC_5(VAR_13->can_id);
 VAR_17 = ((VAR_13->can_id & VAR_6) ? VAR_3 : 0) |
  (VAR_13->can_dlc << 16) | VAR_4;


 FUNC_17(VAR_11, VAR_14, VAR_1);
 FUNC_7(VAR_11, FUNC_3(VAR_14), VAR_16);
 FUNC_18(VAR_11, VAR_14, VAR_2, VAR_15);

 FUNC_7(VAR_11, FUNC_2(VAR_14), *(u32 *)(VAR_13->data + 0));
 FUNC_7(VAR_11, FUNC_1(VAR_14), *(u32 *)(VAR_13->data + 4));


 FUNC_7(VAR_11, FUNC_0(VAR_14), VAR_17);

 VAR_12->tx_bytes += VAR_13->can_dlc;


 FUNC_9(VAR_9, VAR_10, VAR_14 - FUNC_10(VAR_11));
 VAR_11->tx_next++;
 if (!(FUNC_6(VAR_11, FUNC_4(FUNC_12(VAR_11))) &
       VAR_5) ||
     (VAR_11->tx_next & FUNC_11(VAR_11)) == 0)
  FUNC_16(VAR_10);


 FUNC_7(VAR_11, VAR_0, 1 << VAR_14);

 return VAR_8;
}
