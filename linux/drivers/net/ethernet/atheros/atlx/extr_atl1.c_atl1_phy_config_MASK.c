
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct atl1_hw {int mii_autoneg_adv_reg; int mii_1000t_ctrl_reg; } ;
struct atl1_adapter {int phy_timer_pending; int lock; struct atl1_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct atl1_adapter* VAR_5 ;
 int FUNC_0 (struct atl1_hw*,int ,int) ;
 struct atl1_adapter* FUNC_1 (int ,struct timer_list*,int ) ;
 int VAR_6 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_7)
{
 struct atl1_adapter *VAR_8 = FUNC_1(VAR_8, VAR_7,
        VAR_6);
 struct atl1_hw *VAR_9 = &VAR_8->hw;
 unsigned long VAR_10;

 FUNC_2(&VAR_8->lock, VAR_10);
 VAR_8->phy_timer_pending = 0;
 FUNC_0(VAR_9, VAR_0, VAR_9->mii_autoneg_adv_reg);
 FUNC_0(VAR_9, VAR_1, VAR_9->mii_1000t_ctrl_reg);
 FUNC_0(VAR_9, VAR_2, VAR_4 | VAR_3);
 FUNC_3(&VAR_8->lock, VAR_10);
}
