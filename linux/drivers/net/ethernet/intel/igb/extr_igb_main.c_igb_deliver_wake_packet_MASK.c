
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int protocol; int data; } ;
struct net_device {int dummy; } ;
struct e1000_hw {scalar_t__ hw_addr; } ;
struct igb_adapter {struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 int FUNC_2 (int ,scalar_t__,int) ;
 struct sk_buff* FUNC_3 (struct net_device*,int) ;
 struct igb_adapter* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_3)
{
 struct igb_adapter *VAR_4 = FUNC_4(VAR_3);
 struct e1000_hw *VAR_5 = &VAR_4->hw;
 struct sk_buff *VAR_6;
 u32 VAR_7;

 VAR_7 = FUNC_6(VAR_0) & VAR_1;




 if ((VAR_7 == 0) || (VAR_7 > VAR_2))
  return;

 VAR_6 = FUNC_3(VAR_3, VAR_2);
 if (!VAR_6)
  return;

 FUNC_8(VAR_6, VAR_7);


 VAR_7 = FUNC_7(VAR_7, 4);

 FUNC_2(VAR_6->data, VAR_5->hw_addr + FUNC_0(0), VAR_7);

 VAR_6->protocol = FUNC_1(VAR_6, VAR_3);
 FUNC_5(VAR_6);
}
