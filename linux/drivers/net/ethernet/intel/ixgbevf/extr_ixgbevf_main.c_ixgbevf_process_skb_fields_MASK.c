
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vlan; } ;
struct TYPE_4__ {TYPE_1__ upper; } ;
union ixgbe_adv_rx_desc {TYPE_2__ wb; } ;
typedef int u16 ;
struct sk_buff {int protocol; } ;
struct ixgbevf_ring {int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,int ,int) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ixgbevf_ring*,union ixgbe_adv_rx_desc*,struct sk_buff*) ;
 int FUNC_4 (struct ixgbevf_ring*,union ixgbe_adv_rx_desc*,struct sk_buff*) ;
 int FUNC_5 (struct ixgbevf_ring*,union ixgbe_adv_rx_desc*,struct sk_buff*) ;
 scalar_t__ FUNC_6 (union ixgbe_adv_rx_desc*,int ) ;
 int FUNC_7 (int ) ;
 unsigned long* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int,unsigned long*) ;

__attribute__((used)) static void FUNC_10(struct ixgbevf_ring *VAR_4,
           union ixgbe_adv_rx_desc *VAR_5,
           struct sk_buff *VAR_6)
{
 FUNC_5(VAR_4, VAR_5, VAR_6);
 FUNC_4(VAR_4, VAR_5, VAR_6);

 if (FUNC_6(VAR_5, VAR_2)) {
  u16 VAR_7 = FUNC_7(VAR_5->wb.upper.vlan);
  unsigned long *VAR_8 = FUNC_8(VAR_4->netdev);

  if (FUNC_9(VAR_7 & VAR_3, VAR_8))
   FUNC_0(VAR_6, FUNC_2(VAR_0), VAR_7);
 }

 if (FUNC_6(VAR_5, VAR_1))
  FUNC_3(VAR_4, VAR_5, VAR_6);

 VAR_6->protocol = FUNC_1(VAR_6, VAR_4->netdev);
}
