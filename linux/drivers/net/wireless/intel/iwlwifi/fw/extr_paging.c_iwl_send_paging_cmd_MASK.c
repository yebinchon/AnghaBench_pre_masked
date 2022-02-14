
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_host_cmd {int data; int len; int id; } ;
struct iwl_fw_runtime {int num_of_pages_in_last_blk; int num_of_paging_blk; int trans; TYPE_1__* fw_paging_db; } ;
struct iwl_fw_paging_cmd {int * device_phy_addr; int block_num; int block_size; int flags; } ;
struct fw_img {int dummy; } ;
typedef int dma_addr_t ;
typedef int __le32 ;
struct TYPE_2__ {int fw_paging_phys; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,struct iwl_host_cmd*) ;

__attribute__((used)) static int FUNC_3(struct iwl_fw_runtime *VAR_7,
          const struct fw_img *VAR_8)
{
 struct iwl_fw_paging_cmd VAR_9 = {
  .flags = FUNC_0(VAR_5 |
         VAR_4 |
         (VAR_7->num_of_pages_in_last_blk <<
          VAR_6)),
  .block_size = FUNC_0(VAR_0),
  .block_num = FUNC_0(VAR_7->num_of_paging_blk),
 };
 struct iwl_host_cmd VAR_10 = {
  .id = FUNC_1(VAR_1, VAR_2, 0),
  .len = sizeof(VAR_9), 
  .data = &VAR_9, 
 };
 int VAR_11;


 for (VAR_11 = 0; VAR_11 < VAR_7->num_of_paging_blk + 1; VAR_11++) {
  dma_addr_t VAR_12 = VAR_7->fw_paging_db[VAR_11].fw_paging_phys;
  __le32 VAR_13;

  VAR_12 = VAR_12 >> VAR_3;
  VAR_13 = FUNC_0(VAR_12);
  VAR_9.device_phy_addr[VAR_11] = VAR_13;
 }

 return FUNC_2(VAR_7->trans, &VAR_10);
}
