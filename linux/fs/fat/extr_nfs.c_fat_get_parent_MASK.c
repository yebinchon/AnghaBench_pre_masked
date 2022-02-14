
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_2__ {scalar_t__ nfs; } ;
struct msdos_sb_info {TYPE_1__ options; } ;
struct msdos_dir_entry {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {struct super_block* d_sb; } ;
struct buffer_head {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct msdos_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct dentry*) ;
 struct dentry* FUNC_3 (struct inode*) ;
 struct inode* FUNC_4 (struct super_block*,int) ;
 int FUNC_5 (int ,struct buffer_head**,struct msdos_dir_entry**) ;
 int FUNC_6 (struct msdos_sb_info*,struct msdos_dir_entry*) ;
 struct inode* FUNC_7 (struct super_block*,int) ;

__attribute__((used)) static struct dentry *FUNC_8(struct dentry *VAR_1)
{
 struct super_block *VAR_2 = VAR_1->d_sb;
 struct buffer_head *VAR_3 = ((void*)0);
 struct msdos_dir_entry *VAR_4;
 struct inode *VAR_5 = ((void*)0);
 struct msdos_sb_info *VAR_6 = FUNC_0(VAR_2);

 if (!FUNC_5(FUNC_2(VAR_1), &VAR_3, &VAR_4)) {
  int VAR_7 = FUNC_6(VAR_6, VAR_4);
  VAR_5 = FUNC_4(VAR_2, VAR_7);
  if (!VAR_5 && VAR_6->options.nfs == VAR_0)
   VAR_5 = FUNC_7(VAR_2, VAR_7);
 }
 FUNC_1(VAR_3);

 return FUNC_3(VAR_5);
}
