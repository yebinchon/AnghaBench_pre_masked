
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f2fs_sb_info {int cur_cp_pack; scalar_t__ blocks_per_seg; } ;
typedef int block_t ;
struct TYPE_2__ {int cp_blkaddr; } ;


 TYPE_1__* FUNC_0 (struct f2fs_sb_info*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline block_t FUNC_2(struct f2fs_sb_info *VAR_0)
{
 block_t VAR_1 = FUNC_1(FUNC_0(VAR_0)->cp_blkaddr);

 if (VAR_0->cur_cp_pack == 2)
  VAR_1 += VAR_0->blocks_per_seg;
 return VAR_1;
}
