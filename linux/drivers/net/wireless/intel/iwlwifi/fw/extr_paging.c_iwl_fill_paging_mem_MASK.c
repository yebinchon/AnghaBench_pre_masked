
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct iwl_fw_runtime {int num_of_paging_blk; int num_of_pages_in_last_blk; TYPE_2__* trans; struct iwl_fw_paging* fw_paging_db; } ;
struct iwl_fw_paging {int fw_paging_size; int fw_paging_phys; int fw_paging_block; } ;
struct fw_img {int num_sec; TYPE_1__* sec; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {scalar_t__ offset; int len; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwl_fw_runtime*,char*,int,...) ;
 int FUNC_1 (struct iwl_fw_runtime*,char*,...) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 (struct iwl_fw_runtime*) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct iwl_fw_runtime *VAR_4,
          const struct fw_img *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 u32 VAR_9 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_5->num_sec; VAR_6++) {
  if (VAR_5->sec[VAR_6].offset == VAR_3) {
   VAR_6++;
   break;
  }
 }





 if (VAR_6 >= VAR_5->num_sec - 1) {
  FUNC_1(VAR_4, "Paging: Missing CSS and/or paging sections\n");
  VAR_8 = -VAR_1;
  goto err;
 }


 FUNC_0(VAR_4, "Paging: load paging CSS to FW, sec = %d\n",
       VAR_6);

 if (VAR_5->sec[VAR_6].len > VAR_4->fw_paging_db[0].fw_paging_size) {
  FUNC_1(VAR_4, "CSS block is larger than paging size\n");
  VAR_8 = -VAR_1;
  goto err;
 }

 FUNC_4(FUNC_5(VAR_4->fw_paging_db[0].fw_paging_block),
        VAR_5->sec[VAR_6].data,
        VAR_5->sec[VAR_6].len);
 FUNC_2(VAR_4->trans->dev,
       VAR_4->fw_paging_db[0].fw_paging_phys,
       VAR_4->fw_paging_db[0].fw_paging_size,
       VAR_0);

 FUNC_0(VAR_4,
       "Paging: copied %d CSS bytes to first block\n",
       VAR_4->fw_paging_db[0].fw_paging_size);

 VAR_6++;






 for (VAR_7 = 1; VAR_7 < VAR_4->num_of_paging_blk + 1; VAR_7++) {
  struct iwl_fw_paging *VAR_10 = &VAR_4->fw_paging_db[VAR_7];
  int VAR_11 = VAR_5->sec[VAR_6].len - VAR_9;
  int VAR_12 = VAR_10->fw_paging_size;





  if (VAR_7 == VAR_4->num_of_paging_blk) {
   VAR_12 = VAR_11;
   if (VAR_11 !=
       VAR_4->num_of_pages_in_last_blk * VAR_2) {
    FUNC_1(VAR_4,
     "Paging: last block contains more data than expected %d\n",
     VAR_11);
    VAR_8 = -VAR_1;
    goto err;
   }
  } else if (VAR_10->fw_paging_size > VAR_11) {
   FUNC_1(VAR_4,
    "Paging: not enough data in other in block %d (%d)\n",
    VAR_7, VAR_11);
   VAR_8 = -VAR_1;
   goto err;
  }

  FUNC_4(FUNC_5(VAR_10->fw_paging_block),
         VAR_5->sec[VAR_6].data + VAR_9, VAR_12);
  FUNC_2(VAR_4->trans->dev,
        VAR_10->fw_paging_phys,
        VAR_10->fw_paging_size,
        VAR_0);

  FUNC_0(VAR_4,
        "Paging: copied %d paging bytes to block %d\n",
        VAR_12, VAR_7);

  VAR_9 += VAR_10->fw_paging_size;
 }

 return 0;

err:
 FUNC_3(VAR_4);
 return VAR_8;
}
