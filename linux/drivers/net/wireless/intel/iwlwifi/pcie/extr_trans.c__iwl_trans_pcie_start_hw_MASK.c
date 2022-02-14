
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_trans_pcie {int opmode_down; int is_down; int mutex; } ;
struct iwl_trans {int dummy; } ;


 int FUNC_0 (struct iwl_trans*,char*,int) ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 int FUNC_2 (struct iwl_trans*) ;
 int FUNC_3 (struct iwl_trans*) ;
 int FUNC_4 (struct iwl_trans*) ;
 int FUNC_5 (struct iwl_trans_pcie*) ;
 int FUNC_6 (struct iwl_trans*) ;
 int FUNC_7 (struct iwl_trans*) ;
 int FUNC_8 (struct iwl_trans*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct iwl_trans *VAR_0)
{
 struct iwl_trans_pcie *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 FUNC_9(&VAR_1->mutex);

 VAR_2 = FUNC_6(VAR_0);
 if (VAR_2) {
  FUNC_0(VAR_0, "Error while preparing HW: %d\n", VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_7(VAR_0);
 if (VAR_2)
  return VAR_2;

 FUNC_8(VAR_0);

 VAR_2 = FUNC_3(VAR_0);
 if (VAR_2)
  return VAR_2;

 FUNC_5(VAR_1);


 FUNC_2(VAR_0);

 VAR_1->opmode_down = 0;


 VAR_1->is_down = 0;


 FUNC_4(VAR_0);

 return 0;
}
