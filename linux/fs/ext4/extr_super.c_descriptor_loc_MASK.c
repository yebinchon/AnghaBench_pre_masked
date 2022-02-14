
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_blocksize; } ;
struct ext4_sb_info {int s_desc_per_block; TYPE_1__* s_es; } ;
typedef int ext4_group_t ;
typedef scalar_t__ ext4_fsblk_t ;
struct TYPE_2__ {int s_first_data_block; int s_first_meta_bg; } ;


 struct ext4_sb_info* FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (struct super_block*,int) ;
 scalar_t__ FUNC_2 (struct super_block*,int) ;
 int FUNC_3 (struct super_block*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static ext4_fsblk_t FUNC_5(struct super_block *VAR_0,
       ext4_fsblk_t VAR_1, int VAR_2)
{
 struct ext4_sb_info *VAR_3 = FUNC_0(VAR_0);
 ext4_group_t VAR_4, VAR_5;
 int VAR_6 = 0;

 VAR_5 = FUNC_4(VAR_3->s_es->s_first_meta_bg);

 if (!FUNC_3(VAR_0) || VAR_2 < VAR_5)
  return VAR_1 + VAR_2 + 1;
 VAR_4 = VAR_3->s_desc_per_block * VAR_2;
 if (FUNC_1(VAR_0, VAR_4))
  VAR_6 = 1;







 if (VAR_0->s_blocksize == 1024 && VAR_2 == 0 &&
     FUNC_4(VAR_3->s_es->s_first_data_block) == 0)
  VAR_6++;

 return (VAR_6 + FUNC_2(VAR_0, VAR_4));
}
