
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {int sa_data; } ;
struct net_device {int addr_len; int dev_addr; } ;
struct TYPE_3__ {int (* rar_set ) (struct e1000_hw*,int ,scalar_t__) ;} ;
struct TYPE_4__ {scalar_t__ rar_entry_count; int addr; TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ mac; } ;
struct e1000_adapter {int flags; struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct e1000_hw*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 struct e1000_adapter* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct e1000_hw*,int ,scalar_t__) ;
 int FUNC_5 (struct e1000_hw*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2, void *VAR_3)
{
 struct e1000_adapter *VAR_4 = FUNC_3(VAR_2);
 struct e1000_hw *VAR_5 = &VAR_4->hw;
 struct sockaddr *VAR_6 = VAR_3;

 if (!FUNC_1(VAR_6->sa_data))
  return -VAR_0;

 FUNC_2(VAR_2->dev_addr, VAR_6->sa_data, VAR_2->addr_len);
 FUNC_2(VAR_4->hw.mac.addr, VAR_6->sa_data, VAR_2->addr_len);

 VAR_5->mac.ops.rar_set(&VAR_4->hw, VAR_4->hw.mac.addr, 0);

 if (VAR_4->flags & VAR_1) {

  FUNC_0(&VAR_4->hw, 1);
  VAR_5->mac.ops.rar_set(&VAR_4->hw, VAR_4->hw.mac.addr,
        VAR_4->hw.mac.rar_entry_count - 1);
 }

 return 0;
}
