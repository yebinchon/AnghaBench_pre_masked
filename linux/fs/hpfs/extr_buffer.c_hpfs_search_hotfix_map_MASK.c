
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct hpfs_sb_info {unsigned int n_hotfixes; scalar_t__* hotfix_from; scalar_t__* hotfix_to; } ;
typedef scalar_t__ secno ;


 struct hpfs_sb_info* FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (int) ;

secno FUNC_2(struct super_block *VAR_0, secno VAR_1)
{
 unsigned VAR_2;
 struct hpfs_sb_info *VAR_3 = FUNC_0(VAR_0);
 for (VAR_2 = 0; FUNC_1(VAR_2 < VAR_3->n_hotfixes); VAR_2++) {
  if (VAR_3->hotfix_from[VAR_2] == VAR_1) {
   return VAR_3->hotfix_to[VAR_2];
  }
 }
 return VAR_1;
}
