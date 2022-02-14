
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ext2_sb_info {int s_desc_per_block; TYPE_1__* s_es; } ;
struct TYPE_2__ {int s_first_meta_bg; } ;


 int VAR_0 ;
 int FUNC_0 (struct super_block*,int ) ;
 struct ext2_sb_info* FUNC_1 (struct super_block*) ;
 scalar_t__ FUNC_2 (struct super_block*,unsigned long) ;
 unsigned long FUNC_3 (struct super_block*,unsigned long) ;
 unsigned long FUNC_4 (int ) ;

__attribute__((used)) static unsigned long FUNC_5(struct super_block *VAR_1,
        unsigned long VAR_2,
        int VAR_3)
{
 struct ext2_sb_info *VAR_4 = FUNC_1(VAR_1);
 unsigned long VAR_5, VAR_6;
 int VAR_7 = 0;

 VAR_6 = FUNC_4(VAR_4->s_es->s_first_meta_bg);

 if (!FUNC_0(VAR_1, VAR_0) ||
     VAR_3 < VAR_6)
  return (VAR_2 + VAR_3 + 1);
 VAR_5 = VAR_4->s_desc_per_block * VAR_3;
 if (FUNC_2(VAR_1, VAR_5))
  VAR_7 = 1;

 return FUNC_3(VAR_1, VAR_5) + VAR_7;
}
