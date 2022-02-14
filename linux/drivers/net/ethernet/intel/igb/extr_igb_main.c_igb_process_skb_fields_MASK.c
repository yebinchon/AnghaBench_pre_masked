
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vlan; } ;
struct TYPE_4__ {TYPE_1__ upper; } ;
union e1000_adv_rx_desc {TYPE_2__ wb; } ;
typedef int u16 ;
struct sk_buff {int protocol; } ;
struct net_device {int features; } ;
struct igb_ring {struct net_device* netdev; int queue_index; int flags; int q_vector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct sk_buff*) ;
 int FUNC_5 (struct igb_ring*,union e1000_adv_rx_desc*,struct sk_buff*) ;
 int FUNC_6 (struct igb_ring*,union e1000_adv_rx_desc*,struct sk_buff*) ;
 scalar_t__ FUNC_7 (union e1000_adv_rx_desc*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_10 (int ,int *) ;

__attribute__((used)) static void FUNC_11(struct igb_ring *VAR_7,
       union e1000_adv_rx_desc *VAR_8,
       struct sk_buff *VAR_9)
{
 struct net_device *VAR_10 = VAR_7->netdev;

 FUNC_6(VAR_7, VAR_8, VAR_9);

 FUNC_5(VAR_7, VAR_8, VAR_9);

 if (FUNC_7(VAR_8, VAR_0) &&
     !FUNC_7(VAR_8, VAR_1))
  FUNC_4(VAR_7->q_vector, VAR_9);

 if ((VAR_10->features & VAR_6) &&
     FUNC_7(VAR_8, VAR_3)) {
  u16 VAR_11;

  if (FUNC_7(VAR_8, VAR_2) &&
      FUNC_10(VAR_5, &VAR_7->flags))
   VAR_11 = FUNC_1(VAR_8->wb.upper.vlan);
  else
   VAR_11 = FUNC_8(VAR_8->wb.upper.vlan);

  FUNC_0(VAR_9, FUNC_3(VAR_4), VAR_11);
 }

 FUNC_9(VAR_9, VAR_7->queue_index);

 VAR_9->protocol = FUNC_2(VAR_9, VAR_7->netdev);
}
