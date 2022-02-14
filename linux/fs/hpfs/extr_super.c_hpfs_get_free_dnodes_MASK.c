
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct hpfs_sb_info {unsigned int sb_n_free_dnodes; int sb_dmap; } ;


 unsigned int FUNC_0 (struct super_block*,int ) ;
 struct hpfs_sb_info* FUNC_1 (struct super_block*) ;

unsigned FUNC_2(struct super_block *VAR_0)
{
 struct hpfs_sb_info *VAR_1 = FUNC_1(VAR_0);
 if (VAR_1->sb_n_free_dnodes == (unsigned)-1) {
  unsigned VAR_2 = FUNC_0(VAR_0, VAR_1->sb_dmap);
  if (VAR_2 == (unsigned)-1)
   return 0;
  VAR_1->sb_n_free_dnodes = VAR_2;
 }
 return VAR_1->sb_n_free_dnodes;
}
