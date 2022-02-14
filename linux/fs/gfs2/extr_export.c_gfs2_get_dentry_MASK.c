
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {struct gfs2_sbd* s_fs_info; } ;
struct inode {int dummy; } ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_inum_host {int no_formal_ino; int no_addr; } ;
struct dentry {int dummy; } ;


 struct dentry* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 struct dentry* FUNC_2 (struct inode*) ;
 struct inode* FUNC_3 (struct gfs2_sbd*,int ,int *,int ) ;

__attribute__((used)) static struct dentry *FUNC_4(struct super_block *VAR_1,
          struct gfs2_inum_host *VAR_2)
{
 struct gfs2_sbd *VAR_3 = VAR_1->s_fs_info;
 struct inode *VAR_4;

 VAR_4 = FUNC_3(VAR_3, VAR_2->no_addr, &VAR_2->no_formal_ino,
        VAR_0);
 if (FUNC_1(VAR_4))
  return FUNC_0(VAR_4);
 return FUNC_2(VAR_4);
}
