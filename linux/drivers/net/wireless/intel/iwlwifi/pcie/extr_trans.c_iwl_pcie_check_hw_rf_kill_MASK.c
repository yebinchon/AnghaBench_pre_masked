
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_trans_pcie {scalar_t__ opmode_down; } ;
struct iwl_trans {int status; } ;


 struct iwl_trans_pcie* FUNC_0 (struct iwl_trans*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct iwl_trans*) ;
 int FUNC_3 (struct iwl_trans*,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;

bool FUNC_6(struct iwl_trans *VAR_2)
{
 struct iwl_trans_pcie *VAR_3 = FUNC_0(VAR_2);
 bool VAR_4 = FUNC_2(VAR_2);
 bool VAR_5 = FUNC_5(VAR_1, &VAR_2->status);
 bool VAR_6;

 if (VAR_4) {
  FUNC_4(VAR_0, &VAR_2->status);
  FUNC_4(VAR_1, &VAR_2->status);
 } else {
  FUNC_1(VAR_0, &VAR_2->status);
  if (VAR_3->opmode_down)
   FUNC_1(VAR_1, &VAR_2->status);
 }

 VAR_6 = FUNC_5(VAR_1, &VAR_2->status);

 if (VAR_5 != VAR_6)
  FUNC_3(VAR_2, VAR_6);

 return VAR_4;
}
