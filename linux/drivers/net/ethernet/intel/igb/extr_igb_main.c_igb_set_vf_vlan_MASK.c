
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {int dummy; } ;
struct igb_adapter {int vfs_allocated_count; int flags; int active_vlans; struct e1000_hw hw; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct igb_adapter*,int) ;
 int FUNC_1 (struct e1000_hw*,int,int,int,int) ;
 scalar_t__ FUNC_2 (int,int ) ;

__attribute__((used)) static s32 FUNC_3(struct igb_adapter *VAR_1, u32 VAR_2,
      bool VAR_3, u32 VAR_4)
{
 int VAR_5 = VAR_1->vfs_allocated_count;
 struct e1000_hw *VAR_6 = &VAR_1->hw;
 int VAR_7;






 if (VAR_3 && FUNC_2(VAR_2, VAR_1->active_vlans)) {
  VAR_7 = FUNC_1(VAR_6, VAR_2, VAR_5, 1, 0);
  if (VAR_7)
   return VAR_7;
 }

 VAR_7 = FUNC_1(VAR_6, VAR_2, VAR_4, VAR_3, 0);

 if (VAR_3 && !VAR_7)
  return VAR_7;





 if (FUNC_2(VAR_2, VAR_1->active_vlans) ||
     (VAR_1->flags & VAR_0))
  FUNC_0(VAR_1, VAR_2);

 return VAR_7;
}
