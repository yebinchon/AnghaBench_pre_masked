
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_fw_runtime {struct iwl_fw_paging* fw_paging_db; TYPE_1__* trans; } ;
struct iwl_fw_paging {int * fw_paging_block; int fw_paging_size; int fw_paging_phys; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_fw_runtime*,char*,int) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct iwl_fw_paging*,int ,int) ;

void FUNC_5(struct iwl_fw_runtime *VAR_2)
{
 int VAR_3;

 if (!VAR_2->fw_paging_db[0].fw_paging_block)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  struct iwl_fw_paging *VAR_4 = &VAR_2->fw_paging_db[VAR_3];

  if (!VAR_4->fw_paging_block) {
   FUNC_0(VAR_2,
         "Paging: block %d already freed, continue to next page\n",
         VAR_3);

   continue;
  }
  FUNC_2(VAR_2->trans->dev, VAR_4->fw_paging_phys,
          VAR_4->fw_paging_size, VAR_0);

  FUNC_1(VAR_4->fw_paging_block,
        FUNC_3(VAR_4->fw_paging_size));
  VAR_4->fw_paging_block = ((void*)0);
 }

 FUNC_4(VAR_2->fw_paging_db, 0, sizeof(VAR_2->fw_paging_db));
}
