
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct hpfs_sb_info {unsigned int sb_n_free; unsigned int sb_fs_size; } ;
typedef int secno ;


 int FUNC_0 (struct super_block*,char*,int ) ;
 struct hpfs_sb_info* FUNC_1 (struct super_block*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct super_block *VAR_0, secno VAR_1)
{
 struct hpfs_sb_info *VAR_2 = FUNC_1(VAR_0);
 if (VAR_2->sb_n_free != (unsigned)-1) {
  if (FUNC_2(VAR_2->sb_n_free >= VAR_2->sb_fs_size)) {
   FUNC_0(VAR_0, "free count overflow, freeing sector %08x", VAR_1);
   VAR_2->sb_n_free = -1;
   return;
  }
  VAR_2->sb_n_free++;
 }
}
