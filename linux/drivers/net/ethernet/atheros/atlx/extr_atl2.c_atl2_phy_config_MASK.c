
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct atl2_hw {int mii_autoneg_adv_reg; } ;
struct atl2_adapter {int cfg_phy; int stats_lock; struct atl2_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct atl2_adapter* VAR_5 ;
 int FUNC_0 (struct atl2_hw*,int ,int) ;
 int FUNC_1 (int ,int *) ;
 struct atl2_adapter* FUNC_2 (int ,struct timer_list*,int ) ;
 int VAR_6 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_7)
{
 struct atl2_adapter *VAR_8 = FUNC_2(VAR_8, VAR_7,
        VAR_6);
 struct atl2_hw *VAR_9 = &VAR_8->hw;
 unsigned long VAR_10;

 FUNC_3(&VAR_8->stats_lock, VAR_10);
 FUNC_0(VAR_9, VAR_0, VAR_9->mii_autoneg_adv_reg);
 FUNC_0(VAR_9, VAR_1, VAR_3 | VAR_2 |
  VAR_4);
 FUNC_4(&VAR_8->stats_lock, VAR_10);
 FUNC_1(0, &VAR_8->cfg_phy);
}
