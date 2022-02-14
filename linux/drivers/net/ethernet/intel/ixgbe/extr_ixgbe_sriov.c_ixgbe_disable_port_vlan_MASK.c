
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbe_adapter {TYPE_2__* vfinfo; struct ixgbe_hw hw; } ;
struct TYPE_4__ {scalar_t__ pf_qos; scalar_t__ pf_vlan; } ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_adapter*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct ixgbe_adapter*,int,scalar_t__,int) ;
 int FUNC_2 (struct ixgbe_hw*,int,int) ;
 int FUNC_3 (struct ixgbe_adapter*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct ixgbe_adapter *VAR_2, int VAR_3)
{
 struct ixgbe_hw *VAR_4 = &VAR_2->hw;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_2, 0,
    VAR_2->vfinfo[VAR_3].pf_vlan, VAR_3);

 FUNC_1(VAR_2, 1, 0, VAR_3);
 FUNC_0(VAR_2, VAR_3);
 FUNC_2(VAR_4, VAR_3, 1);


 if (VAR_4->mac.type >= VAR_1)
  FUNC_3(VAR_2, VAR_3, VAR_0);

 VAR_2->vfinfo[VAR_3].pf_vlan = 0;
 VAR_2->vfinfo[VAR_3].pf_qos = 0;

 return VAR_5;
}
