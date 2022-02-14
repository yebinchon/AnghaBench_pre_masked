
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct iwl_fw_runtime {int num_of_paging_blk; int num_of_pages_in_last_blk; TYPE_2__* fw_paging_db; TYPE_1__* trans; } ;
struct fw_img {int paging_mem_size; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int fw_paging_size; int fw_paging_phys; struct page* fw_paging_block; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct iwl_fw_runtime*,char*,int,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct page* FUNC_4 (int ,int) ;
 int FUNC_5 (int ,struct page*,int ,int,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct iwl_fw_runtime*) ;

__attribute__((used)) static int FUNC_9(struct iwl_fw_runtime *VAR_8,
       const struct fw_img *VAR_9)
{
 struct page *VAR_10;
 dma_addr_t VAR_11 = 0;
 int VAR_12, VAR_13, VAR_14, VAR_15;

 if (VAR_8->fw_paging_db[0].fw_paging_block)
  return 0;


 FUNC_1(FUNC_0(VAR_0) != VAR_7);

 VAR_14 = VAR_9->paging_mem_size / VAR_3;
 VAR_8->num_of_paging_blk =
  FUNC_2(VAR_14, VAR_5);
 VAR_8->num_of_pages_in_last_blk =
  VAR_14 -
  VAR_5 * (VAR_8->num_of_paging_blk - 1);

 FUNC_3(VAR_8,
       "Paging: allocating mem for %d paging blocks, each block holds 8 pages, last block holds %d pages\n",
       VAR_8->num_of_paging_blk,
       VAR_8->num_of_pages_in_last_blk);




 for (VAR_12 = 0; VAR_12 < VAR_8->num_of_paging_blk + 1; VAR_12++) {

  VAR_15 = VAR_12 ? VAR_7 : VAR_3;
  VAR_13 = FUNC_7(VAR_15);
  VAR_10 = FUNC_4(VAR_4, VAR_13);
  if (!VAR_10) {

   FUNC_8(VAR_8);
   return -VAR_2;
  }

  VAR_8->fw_paging_db[VAR_12].fw_paging_block = VAR_10;
  VAR_8->fw_paging_db[VAR_12].fw_paging_size = VAR_15;

  VAR_11 = FUNC_5(VAR_8->trans->dev, VAR_10, 0,
        VAR_6 << VAR_13,
        VAR_1);
  if (FUNC_6(VAR_8->trans->dev, VAR_11)) {




   FUNC_8(VAR_8);
   return -VAR_2;
  }
  VAR_8->fw_paging_db[VAR_12].fw_paging_phys = VAR_11;

  if (!VAR_12)
   FUNC_3(VAR_8,
         "Paging: allocated 4K(CSS) bytes (order %d) for firmware paging.\n",
         VAR_13);
  else
   FUNC_3(VAR_8,
         "Paging: allocated 32K bytes (order %d) for firmware paging.\n",
         VAR_13);
 }

 return 0;
}
