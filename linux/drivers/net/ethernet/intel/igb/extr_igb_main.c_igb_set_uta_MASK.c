
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int uta_reg_count; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct igb_adapter {int vfs_allocated_count; struct e1000_hw hw; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ) ;

__attribute__((used)) static void FUNC_1(struct igb_adapter *VAR_1, bool VAR_2)
{
 struct e1000_hw *VAR_3 = &VAR_1->hw;
 u32 VAR_4 = VAR_2 ? ~0 : 0;
 int VAR_5;


 if (!VAR_1->vfs_allocated_count)
  return;

 for (VAR_5 = VAR_3->mac.uta_reg_count; VAR_5--;)
  FUNC_0(VAR_0, VAR_5, VAR_4);
}
