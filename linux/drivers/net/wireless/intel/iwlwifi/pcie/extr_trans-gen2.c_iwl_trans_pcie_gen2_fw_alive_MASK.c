
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_trans_pcie {int mutex; int queue_used; int queue_stopped; } ;
struct iwl_trans {int dummy; } ;


 struct iwl_trans_pcie* FUNC_0 (struct iwl_trans*) ;
 int FUNC_1 (struct iwl_trans*) ;
 int FUNC_2 (struct iwl_trans*) ;
 int FUNC_3 (struct iwl_trans*) ;
 int FUNC_4 (struct iwl_trans*) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct iwl_trans *VAR_0, u32 VAR_1)
{
 struct iwl_trans_pcie *VAR_2 = FUNC_0(VAR_0);

 FUNC_4(VAR_0);


 FUNC_5(VAR_2->queue_stopped, 0, sizeof(VAR_2->queue_stopped));
 FUNC_5(VAR_2->queue_used, 0, sizeof(VAR_2->queue_used));




 FUNC_3(VAR_0);





 FUNC_1(VAR_0);
 FUNC_6(&VAR_2->mutex);
 FUNC_2(VAR_0);
 FUNC_7(&VAR_2->mutex);
}
