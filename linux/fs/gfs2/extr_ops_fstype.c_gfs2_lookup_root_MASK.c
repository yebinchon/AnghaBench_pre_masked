
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct super_block {struct gfs2_sbd* s_fs_info; } ;
struct inode {int dummy; } ;
struct gfs2_sbd {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 struct dentry* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct gfs2_sbd*,char*,char const*,...) ;
 struct inode* FUNC_4 (struct super_block*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_3, struct dentry **VAR_4,
       u64 VAR_5, const char *VAR_6)
{
 struct gfs2_sbd *VAR_7 = VAR_3->s_fs_info;
 struct dentry *VAR_8;
 struct inode *VAR_9;

 VAR_9 = FUNC_4(VAR_3, VAR_0, VAR_5, 0,
      VAR_2 );
 if (FUNC_0(VAR_9)) {
  FUNC_3(VAR_7, "can't read in %s inode: %ld\n", VAR_6, FUNC_1(VAR_9));
  return FUNC_1(VAR_9);
 }
 VAR_8 = FUNC_2(VAR_9);
 if (!VAR_8) {
  FUNC_3(VAR_7, "can't alloc %s dentry\n", VAR_6);
  return -VAR_1;
 }
 *VAR_4 = VAR_8;
 return 0;
}
