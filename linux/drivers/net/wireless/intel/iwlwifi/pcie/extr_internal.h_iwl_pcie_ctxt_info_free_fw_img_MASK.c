
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_self_init_dram {int fw_cnt; TYPE_1__* fw; } ;
struct iwl_trans {int dev; struct iwl_self_init_dram init_dram; } ;
struct TYPE_2__ {int physical; int block; int size; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static inline void FUNC_3(struct iwl_trans *VAR_0)
{
 struct iwl_self_init_dram *VAR_1 = &VAR_0->init_dram;
 int VAR_2;

 if (!VAR_1->fw) {
  FUNC_0(VAR_1->fw_cnt);
  return;
 }

 for (VAR_2 = 0; VAR_2 < VAR_1->fw_cnt; VAR_2++)
  FUNC_1(VAR_0->dev, VAR_1->fw[VAR_2].size,
      VAR_1->fw[VAR_2].block, VAR_1->fw[VAR_2].physical);

 FUNC_2(VAR_1->fw);
 VAR_1->fw_cnt = 0;
 VAR_1->fw = ((void*)0);
}
