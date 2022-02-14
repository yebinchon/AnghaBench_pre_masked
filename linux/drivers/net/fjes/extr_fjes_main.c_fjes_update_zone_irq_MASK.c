
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fjes_hw {int update_zone_task; } ;
struct fjes_adapter {int control_wq; struct fjes_hw hw; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct fjes_adapter *VAR_0,
     int VAR_1)
{
 struct fjes_hw *VAR_2 = &VAR_0->hw;

 if (!FUNC_1(&VAR_2->update_zone_task))
  FUNC_0(VAR_0->control_wq, &VAR_2->update_zone_task);
}
