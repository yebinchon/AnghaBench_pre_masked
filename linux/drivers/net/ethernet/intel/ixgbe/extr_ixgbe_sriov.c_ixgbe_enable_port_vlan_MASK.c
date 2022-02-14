
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_4__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbe_adapter {TYPE_3__* pdev; int state; TYPE_2__* vfinfo; struct ixgbe_hw hw; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int pf_qos; int pf_vlan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int ,int ,int) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct ixgbe_adapter*,int,int ,int) ;
 int FUNC_3 (struct ixgbe_hw*,int,int) ;
 int FUNC_4 (struct ixgbe_adapter*,int ,int ,int) ;
 int FUNC_5 (struct ixgbe_adapter*,int,int) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct ixgbe_adapter *VAR_4, int VAR_5,
      u16 VAR_6, u8 VAR_7)
{
 struct ixgbe_hw *VAR_8 = &VAR_4->hw;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_4, 1, VAR_6, VAR_5);
 if (VAR_9)
  goto out;


 FUNC_2(VAR_4, 0, 0, VAR_5);

 FUNC_4(VAR_4, VAR_6, VAR_7, VAR_5);
 FUNC_3(VAR_8, VAR_5, 0);


 if (VAR_8->mac.type >= VAR_3)
  FUNC_5(VAR_4, VAR_5, VAR_0 |
    VAR_1);

 VAR_4->vfinfo[VAR_5].pf_vlan = VAR_6;
 VAR_4->vfinfo[VAR_5].pf_qos = VAR_7;
 FUNC_0(&VAR_4->pdev->dev,
   "Setting VLAN %d, QOS 0x%x on VF %d\n", VAR_6, VAR_7, VAR_5);
 if (FUNC_6(VAR_2, &VAR_4->state)) {
  FUNC_1(&VAR_4->pdev->dev,
    "The VF VLAN has been set, but the PF device is not up.\n");
  FUNC_1(&VAR_4->pdev->dev,
    "Bring the PF device up before attempting to use the VF device.\n");
 }

out:
 return VAR_9;
}
