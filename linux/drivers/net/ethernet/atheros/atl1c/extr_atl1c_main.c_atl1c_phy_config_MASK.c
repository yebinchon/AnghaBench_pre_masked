
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct atl1c_hw {int dummy; } ;
struct atl1c_adapter {int mdio_lock; struct atl1c_hw hw; } ;


 struct atl1c_adapter* VAR_0 ;
 int FUNC_0 (struct atl1c_hw*) ;
 struct atl1c_adapter* FUNC_1 (int ,struct timer_list*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_2)
{
 struct atl1c_adapter *VAR_3 = FUNC_1(VAR_3, VAR_2,
         VAR_1);
 struct atl1c_hw *VAR_4 = &VAR_3->hw;
 unsigned long VAR_5;

 FUNC_2(&VAR_3->mdio_lock, VAR_5);
 FUNC_0(VAR_4);
 FUNC_3(&VAR_3->mdio_lock, VAR_5);
}
