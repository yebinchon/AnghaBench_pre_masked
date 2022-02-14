
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_trans_pcie {int queue_used; } ;
struct iwl_trans {int status; } ;


 int FUNC_0 (struct iwl_trans*,char*,int) ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct iwl_trans*,int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int *) ;

void FUNC_6(struct iwl_trans *VAR_1, int VAR_2)
{
 struct iwl_trans_pcie *VAR_3 = FUNC_1(VAR_1);







 if (!FUNC_4(VAR_2, VAR_3->queue_used)) {
  FUNC_2(FUNC_5(VAR_0, &VAR_1->status),
     "queue %d not used", VAR_2);
  return;
 }

 FUNC_3(VAR_1, VAR_2);

 FUNC_0(VAR_1, "Deactivate queue %d\n", VAR_2);
}
