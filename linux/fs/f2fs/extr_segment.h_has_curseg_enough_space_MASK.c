
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct f2fs_sb_info {unsigned int blocks_per_seg; } ;
struct TYPE_4__ {unsigned int segno; } ;
struct TYPE_3__ {unsigned int ckpt_valid_blocks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (struct f2fs_sb_info*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_1 (struct f2fs_sb_info*,int ) ;
 TYPE_1__* FUNC_2 (struct f2fs_sb_info*,unsigned int) ;

__attribute__((used)) static inline bool FUNC_3(struct f2fs_sb_info *VAR_5)
{
 unsigned int VAR_6 = FUNC_1(VAR_5, VAR_4) +
     FUNC_1(VAR_5, VAR_3);
 unsigned int VAR_7 = FUNC_1(VAR_5, VAR_3);
 unsigned int VAR_8, VAR_9;
 int VAR_10;


 for (VAR_10 = VAR_2; VAR_10 <= VAR_0; VAR_10++) {
  VAR_8 = FUNC_0(VAR_5, VAR_10)->segno;
  VAR_9 = VAR_5->blocks_per_seg -
   FUNC_2(VAR_5, VAR_8)->ckpt_valid_blocks;

  if (VAR_6 > VAR_9)
   return 0;
 }


 VAR_8 = FUNC_0(VAR_5, VAR_1)->segno;
 VAR_9 = VAR_5->blocks_per_seg -
   FUNC_2(VAR_5, VAR_8)->ckpt_valid_blocks;
 if (VAR_7 > VAR_9)
  return 0;
 return 1;
}
