
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct cifs_sb_info {int mnt_cifs_flags; } ;
struct cifs_fattr {int cf_uniqueid; } ;


 int VAR_0 ;
 struct cifs_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_1 ;
 int FUNC_1 (struct super_block*,int ) ;

void
FUNC_2(struct super_block *VAR_2, struct cifs_fattr *VAR_3)
{
 struct cifs_sb_info *VAR_4 = FUNC_0(VAR_2);

 if (VAR_4->mnt_cifs_flags & VAR_0)
  return;

 VAR_3->cf_uniqueid = FUNC_1(VAR_2, VAR_1);
}
