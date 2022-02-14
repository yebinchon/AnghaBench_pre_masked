
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct iwl_fw_runtime {int num_of_paging_blk; TYPE_2__* trans; TYPE_1__* fw_paging_db; } ;
struct iwl_fw_error_dump_paging {int data; void* index; } ;
struct iwl_fw_error_dump_data {scalar_t__ data; void* len; void* type; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int fw_paging_phys; struct page* fw_paging_block; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_fw_runtime*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 (int ,int ,int,int ) ;
 struct iwl_fw_error_dump_data* FUNC_4 (struct iwl_fw_error_dump_data*) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct page*) ;

__attribute__((used)) static void FUNC_7(struct iwl_fw_runtime *VAR_3,
       struct iwl_fw_error_dump_data **VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_3, "WRT paging dump\n");
 for (VAR_5 = 1; VAR_5 < VAR_3->num_of_paging_blk + 1; VAR_5++) {
  struct iwl_fw_error_dump_paging *VAR_6;
  struct page *VAR_7 =
   VAR_3->fw_paging_db[VAR_5].fw_paging_block;
  dma_addr_t VAR_8 = VAR_3->fw_paging_db[VAR_5].fw_paging_phys;

  (*VAR_4)->type = FUNC_1(VAR_1);
  (*VAR_4)->len = FUNC_1(sizeof(*VAR_6) +
          VAR_2);
  VAR_6 = (void *)(*VAR_4)->data;
  VAR_6->index = FUNC_1(VAR_5);
  FUNC_2(VAR_3->trans->dev, VAR_8,
     VAR_2,
     VAR_0);
  FUNC_5(VAR_6->data, FUNC_6(VAR_7),
         VAR_2);
  FUNC_3(VAR_3->trans->dev, VAR_8,
        VAR_2,
        VAR_0);
  (*VAR_4) = FUNC_4(*VAR_4);
 }
}
