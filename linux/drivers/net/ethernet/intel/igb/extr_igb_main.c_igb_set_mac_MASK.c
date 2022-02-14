
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int sa_data; } ;
struct net_device {int addr_len; int dev_addr; } ;
struct TYPE_2__ {int addr; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct igb_adapter {struct e1000_hw hw; } ;


 int VAR_0 ;
 int FUNC_0 (struct igb_adapter*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 struct igb_adapter* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1, void *VAR_2)
{
 struct igb_adapter *VAR_3 = FUNC_3(VAR_1);
 struct e1000_hw *VAR_4 = &VAR_3->hw;
 struct sockaddr *VAR_5 = VAR_2;

 if (!FUNC_1(VAR_5->sa_data))
  return -VAR_0;

 FUNC_2(VAR_1->dev_addr, VAR_5->sa_data, VAR_1->addr_len);
 FUNC_2(VAR_4->mac.addr, VAR_5->sa_data, VAR_1->addr_len);


 FUNC_0(VAR_3);

 return 0;
}
