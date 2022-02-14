
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int features; int addr_assign_type; int dev_addr; int perm_addr; } ;
struct TYPE_5__ {int (* reset_hw ) (struct fm10k_hw*) ;int (* init_hw ) (struct fm10k_hw*) ;} ;
struct TYPE_6__ {scalar_t__ type; scalar_t__ vlan_override; int perm_addr; int addr; TYPE_1__ ops; } ;
struct fm10k_hw {TYPE_2__ mac; } ;
struct fm10k_intfc {int state; TYPE_3__* pdev; struct fm10k_hw hw; struct net_device* netdev; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct fm10k_intfc*) ;
 int FUNC_5 (struct fm10k_intfc*) ;
 int FUNC_6 (struct fm10k_intfc*) ;
 int FUNC_7 (TYPE_3__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_8 (struct fm10k_intfc*) ;
 int FUNC_9 (struct fm10k_intfc*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct fm10k_intfc*) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (struct net_device*) ;
 scalar_t__ FUNC_14 (struct net_device*) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 (struct fm10k_hw*) ;
 int FUNC_19 (struct fm10k_hw*) ;
 int FUNC_20 (int ,int ) ;

__attribute__((used)) static int FUNC_21(struct fm10k_intfc *VAR_4)
{
 struct net_device *VAR_5 = VAR_4->netdev;
 struct fm10k_hw *VAR_6 = &VAR_4->hw;
 int VAR_7;

 FUNC_0(!FUNC_20(VAR_2, VAR_4->state));

 FUNC_16();

 FUNC_15(VAR_4->pdev);


 VAR_7 = VAR_6->mac.ops.reset_hw(VAR_6);
 if (VAR_7) {
  FUNC_2(&VAR_4->pdev->dev, "reset_hw failed: %d\n", VAR_7);
  goto reinit_err;
 }

 VAR_7 = VAR_6->mac.ops.init_hw(VAR_6);
 if (VAR_7) {
  FUNC_2(&VAR_4->pdev->dev, "init_hw failed: %d\n", VAR_7);
  goto reinit_err;
 }

 VAR_7 = FUNC_6(VAR_4);
 if (VAR_7) {
  FUNC_2(&VAR_4->pdev->dev,
   "init_queueing_scheme failed: %d\n", VAR_7);
  goto reinit_err;
 }


 VAR_7 = FUNC_9(VAR_4);
 if (VAR_7)
  goto err_mbx_irq;

 VAR_7 = FUNC_5(VAR_4);
 if (VAR_7)
  goto err_open;


 if (VAR_6->mac.type == VAR_3) {
  if (FUNC_12(VAR_6->mac.perm_addr)) {
   FUNC_3(VAR_6->mac.addr, VAR_6->mac.perm_addr);
   FUNC_3(VAR_5->perm_addr, VAR_6->mac.perm_addr);
   FUNC_3(VAR_5->dev_addr, VAR_6->mac.perm_addr);
   VAR_5->addr_assign_type &= ~VAR_1;
  }

  if (VAR_6->mac.vlan_override)
   VAR_5->features &= ~VAR_0;
  else
   VAR_5->features |= VAR_0;
 }

 VAR_7 = FUNC_14(VAR_5) ? FUNC_10(VAR_5) : 0;
 if (VAR_7)
  goto err_open;

 FUNC_7(VAR_4->pdev);

 FUNC_17();

 FUNC_11(VAR_4);

 FUNC_1(VAR_2, VAR_4->state);

 return VAR_7;
err_open:
 FUNC_8(VAR_4);
err_mbx_irq:
 FUNC_4(VAR_4);
reinit_err:
 FUNC_13(VAR_5);

 FUNC_17();

 FUNC_1(VAR_2, VAR_4->state);

 return VAR_7;
}
