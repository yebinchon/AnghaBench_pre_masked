
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_trans_pcie {int opmode_down; int mutex; } ;
struct iwl_trans {int status; } ;


 struct iwl_trans_pcie* FUNC_0 (struct iwl_trans*) ;
 int VAR_0 ;
 int FUNC_1 (struct iwl_trans*) ;
 int FUNC_2 (struct iwl_trans*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;

void FUNC_6(struct iwl_trans *VAR_1)
{
 struct iwl_trans_pcie *VAR_2 = FUNC_0(VAR_1);
 bool VAR_3;

 FUNC_3(&VAR_2->mutex);
 VAR_2->opmode_down = 1;
 VAR_3 = FUNC_5(VAR_0, &VAR_1->status);
 FUNC_1(VAR_1);
 FUNC_2(VAR_1, VAR_3);
 FUNC_4(&VAR_2->mutex);
}
