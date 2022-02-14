
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct cifs_sb_info {int mnt_cifs_flags; int prepath; } ;
struct cifs_mnt_data {struct cifs_sb_info* cifs_sb; } ;


 int VAR_0 ;
 struct cifs_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct super_block *VAR_1, struct cifs_mnt_data *VAR_2)
{
 struct cifs_sb_info *VAR_3 = FUNC_0(VAR_1);
 struct cifs_sb_info *VAR_4 = VAR_2->cifs_sb;
 bool VAR_5 = VAR_3->mnt_cifs_flags & VAR_0;
 bool VAR_6 = VAR_4->mnt_cifs_flags & VAR_0;

 if (VAR_5 && VAR_6 && !FUNC_1(VAR_4->prepath, VAR_3->prepath))
  return 1;
 else if (!VAR_5 && !VAR_6)
  return 1;

 return 0;
}
