
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct msdos_sb_info {int sec_per_clus; } ;
struct inode {scalar_t__ i_ino; struct super_block* i_sb; } ;
struct buffer_head {int dummy; } ;
typedef int sector_t ;


 scalar_t__ VAR_0 ;
 struct msdos_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct msdos_sb_info*) ;
 int FUNC_4 (struct super_block*,int) ;
 struct buffer_head* FUNC_5 (struct super_block*,int) ;

__attribute__((used)) static inline void FUNC_6(struct inode *VAR_1, sector_t VAR_2,
         sector_t VAR_3)
{
 struct super_block *VAR_4 = VAR_1->i_sb;
 struct msdos_sb_info *VAR_5 = FUNC_0(VAR_4);
 struct buffer_head *VAR_6;
 int VAR_7;


 if ((VAR_2 & (VAR_5->sec_per_clus - 1)) || VAR_5->sec_per_clus == 1)
  return;

 if (!FUNC_3(VAR_5) && (VAR_1->i_ino == VAR_0))
  return;

 VAR_6 = FUNC_5(VAR_4, VAR_3);
 if (VAR_6 == ((void*)0) || !FUNC_2(VAR_6)) {
  for (VAR_7 = 0; VAR_7 < VAR_5->sec_per_clus; VAR_7++)
   FUNC_4(VAR_4, VAR_3 + VAR_7);
 }
 FUNC_1(VAR_6);
}
