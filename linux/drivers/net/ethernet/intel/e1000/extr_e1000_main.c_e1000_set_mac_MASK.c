
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct net_device {int addr_len; int dev_addr; } ;
struct e1000_hw {scalar_t__ mac_type; int mac_addr; } ;
struct e1000_adapter {struct e1000_hw hw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct e1000_adapter*) ;
 int FUNC_1 (struct e1000_adapter*) ;
 int FUNC_2 (struct e1000_hw*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 struct e1000_adapter* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2, void *VAR_3)
{
 struct e1000_adapter *VAR_4 = FUNC_5(VAR_2);
 struct e1000_hw *VAR_5 = &VAR_4->hw;
 struct sockaddr *VAR_6 = VAR_3;

 if (!FUNC_3(VAR_6->sa_data))
  return -VAR_0;



 if (VAR_5->mac_type == VAR_1)
  FUNC_0(VAR_4);

 FUNC_4(VAR_2->dev_addr, VAR_6->sa_data, VAR_2->addr_len);
 FUNC_4(VAR_5->mac_addr, VAR_6->sa_data, VAR_2->addr_len);

 FUNC_2(VAR_5, VAR_5->mac_addr, 0);

 if (VAR_5->mac_type == VAR_1)
  FUNC_1(VAR_4);

 return 0;
}
