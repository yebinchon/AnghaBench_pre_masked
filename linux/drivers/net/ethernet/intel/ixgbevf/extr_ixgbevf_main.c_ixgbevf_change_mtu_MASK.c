
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int mtu; } ;
struct TYPE_5__ {int (* set_rlpml ) (struct ixgbe_hw*,int) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct ixgbe_hw {TYPE_3__ mac; } ;
struct ixgbevf_adapter {int mbx_lock; TYPE_1__* pdev; scalar_t__ xdp_prog; struct ixgbe_hw hw; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct ixgbe_hw*,char*,int,int) ;
 int FUNC_2 (struct ixgbevf_adapter*) ;
 struct ixgbevf_adapter* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct ixgbe_hw*,int) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_4, int VAR_5)
{
 struct ixgbevf_adapter *VAR_6 = FUNC_3(VAR_4);
 struct ixgbe_hw *VAR_7 = &VAR_6->hw;
 int VAR_8 = VAR_5 + VAR_3 + VAR_2;
 int VAR_9;


 if (VAR_6->xdp_prog) {
  FUNC_0(&VAR_6->pdev->dev, "MTU cannot be changed while XDP program is loaded\n");
  return -VAR_1;
 }

 FUNC_5(&VAR_6->mbx_lock);

 VAR_9 = VAR_7->mac.ops.set_rlpml(VAR_7, VAR_8);
 FUNC_6(&VAR_6->mbx_lock);
 if (VAR_9)
  return -VAR_0;

 FUNC_1(VAR_7, "changing MTU from %d to %d\n",
        VAR_4->mtu, VAR_5);


 VAR_4->mtu = VAR_5;

 if (FUNC_4(VAR_4))
  FUNC_2(VAR_6);

 return 0;
}
