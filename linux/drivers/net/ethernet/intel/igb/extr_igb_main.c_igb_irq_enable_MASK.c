
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {int dummy; } ;
struct igb_adapter {int flags; int eims_enable_mask; scalar_t__ vfs_allocated_count; struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct igb_adapter *VAR_12)
{
 struct e1000_hw *VAR_13 = &VAR_12->hw;

 if (VAR_12->flags & VAR_10) {
  u32 VAR_14 = VAR_7 | VAR_5 | VAR_6;
  u32 VAR_15 = FUNC_0(VAR_0);

  FUNC_1(VAR_0, VAR_15 | VAR_12->eims_enable_mask);
  VAR_15 = FUNC_0(VAR_1);
  FUNC_1(VAR_1, VAR_15 | VAR_12->eims_enable_mask);
  FUNC_1(VAR_2, VAR_12->eims_enable_mask);
  if (VAR_12->vfs_allocated_count) {
   FUNC_1(VAR_9, 0xFF);
   VAR_14 |= VAR_8;
  }
  FUNC_1(VAR_4, VAR_14);
 } else {
  FUNC_1(VAR_4, VAR_11 |
    VAR_6);
  FUNC_1(VAR_3, VAR_11 |
    VAR_6);
 }
}
