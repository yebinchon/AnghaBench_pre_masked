
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct page {int dummy; } ;
struct iwl_fw_runtime {TYPE_2__* trans; TYPE_1__* fw_paging_db; } ;
struct iwl_fw_ini_region_cfg {int dummy; } ;
struct iwl_fw_ini_error_dump_range {void* range_data_size; int data; void* page_num; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int fw_paging_size; int fw_paging_phys; struct page* fw_paging_block; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct page*) ;

__attribute__((used)) static int FUNC_6(struct iwl_fw_runtime *VAR_1,
         struct iwl_fw_ini_region_cfg *VAR_2,
         void *VAR_3, int VAR_4)
{



 struct page *VAR_5 = VAR_1->fw_paging_db[++VAR_4].fw_paging_block;
 struct iwl_fw_ini_error_dump_range *VAR_6 = VAR_3;
 dma_addr_t VAR_7 = VAR_1->fw_paging_db[VAR_4].fw_paging_phys;
 u32 VAR_8 = VAR_1->fw_paging_db[VAR_4].fw_paging_size;

 VAR_6->page_num = FUNC_0(VAR_4);
 VAR_6->range_data_size = FUNC_0(VAR_8);
 FUNC_1(VAR_1->trans->dev, VAR_7, VAR_8,
    VAR_0);
 FUNC_4(VAR_6->data, FUNC_5(VAR_5), VAR_8);
 FUNC_2(VAR_1->trans->dev, VAR_7, VAR_8,
       VAR_0);

 return sizeof(*VAR_6) + FUNC_3(VAR_6->range_data_size);
}
