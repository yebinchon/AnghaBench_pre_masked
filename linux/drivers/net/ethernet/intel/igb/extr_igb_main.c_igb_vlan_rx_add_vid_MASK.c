
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct e1000_hw {int dummy; } ;
struct igb_adapter {int vfs_allocated_count; int flags; int active_vlans; struct e1000_hw hw; } ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (struct e1000_hw*,int ,int,int,int) ;
 struct igb_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1,
          __be16 VAR_2, u16 VAR_3)
{
 struct igb_adapter *VAR_4 = FUNC_1(VAR_1);
 struct e1000_hw *VAR_5 = &VAR_4->hw;
 int VAR_6 = VAR_4->vfs_allocated_count;


 if (!VAR_3 || !(VAR_4->flags & VAR_0))
  FUNC_0(VAR_5, VAR_3, VAR_6, 1, !!VAR_3);

 FUNC_2(VAR_3, VAR_4->active_vlans);

 return 0;
}
