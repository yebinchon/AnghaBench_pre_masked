
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {size_t cur_fw_img; } ;
struct iwl_mvm {int dbgfs_sram_offset; int dbgfs_sram_len; TYPE_2__ fwrt; TYPE_1__* fw; } ;
struct fw_img {TYPE_3__* sec; } ;
typedef size_t ssize_t ;
typedef int loff_t ;
struct TYPE_6__ {int offset; int len; } ;
struct TYPE_4__ {struct fw_img* img; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct iwl_mvm*) ;
 int FUNC_1 (char*,char*,int*,int*) ;

__attribute__((used)) static ssize_t FUNC_2(struct iwl_mvm *VAR_2, char *VAR_3,
        size_t VAR_4, loff_t *VAR_5)
{
 const struct fw_img *VAR_6;
 u32 VAR_7, VAR_8;
 u32 VAR_9, VAR_10;

 if (!FUNC_0(VAR_2))
  return -VAR_0;

 VAR_6 = &VAR_2->fw->img[VAR_2->fwrt.cur_fw_img];
 VAR_9 = VAR_6->sec[VAR_1].offset;
 VAR_10 = VAR_6->sec[VAR_1].len;

 if (FUNC_1(VAR_3, "%x,%x", &VAR_7, &VAR_8) == 2) {
  if ((VAR_7 & 0x3) || (VAR_8 & 0x3))
   return -VAR_0;

  if (VAR_7 + VAR_8 > VAR_9 + VAR_10)
   return -VAR_0;

  VAR_2->dbgfs_sram_offset = VAR_7;
  VAR_2->dbgfs_sram_len = VAR_8;
 } else {
  VAR_2->dbgfs_sram_offset = 0;
  VAR_2->dbgfs_sram_len = 0;
 }

 return VAR_4;
}
