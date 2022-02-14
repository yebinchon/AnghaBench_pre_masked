
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_txq {int id; } ;
struct iwl_trans_pcie {int queue_stopped; } ;
struct iwl_trans {int op_mode; } ;


 int FUNC_0 (struct iwl_trans*,char*,int ) ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static inline void FUNC_4(struct iwl_trans *VAR_0,
      struct iwl_txq *VAR_1)
{
 struct iwl_trans_pcie *VAR_2 = FUNC_1(VAR_0);

 if (!FUNC_3(VAR_1->id, VAR_2->queue_stopped)) {
  FUNC_2(VAR_0->op_mode, VAR_1->id);
  FUNC_0(VAR_0, "Stop hwq %d\n", VAR_1->id);
 } else
  FUNC_0(VAR_0, "hwq %d already stopped\n",
        VAR_1->id);
}
