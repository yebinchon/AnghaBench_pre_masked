
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {int sa_data; } ;
struct net_device {int dev_addr; } ;
struct TYPE_3__ {int (* set_rar ) (struct ixgbe_hw*,int ,int ,int ) ;} ;
struct TYPE_4__ {int perm_addr; int addr; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
struct ixgbevf_adapter {int mbx_lock; struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 struct ixgbevf_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ixgbe_hw*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2, void *VAR_3)
{
 struct ixgbevf_adapter *VAR_4 = FUNC_2(VAR_2);
 struct ixgbe_hw *VAR_5 = &VAR_4->hw;
 struct sockaddr *VAR_6 = VAR_3;
 int VAR_7;

 if (!FUNC_1(VAR_6->sa_data))
  return -VAR_0;

 FUNC_3(&VAR_4->mbx_lock);

 VAR_7 = VAR_5->mac.ops.set_rar(VAR_5, 0, VAR_6->sa_data, 0);

 FUNC_4(&VAR_4->mbx_lock);

 if (VAR_7)
  return -VAR_1;

 FUNC_0(VAR_5->mac.addr, VAR_6->sa_data);
 FUNC_0(VAR_5->mac.perm_addr, VAR_6->sa_data);
 FUNC_0(VAR_2->dev_addr, VAR_6->sa_data);

 return 0;
}
