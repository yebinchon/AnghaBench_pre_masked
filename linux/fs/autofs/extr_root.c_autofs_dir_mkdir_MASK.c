
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct inode {int i_mtime; int i_sb; } ;
struct dentry {struct dentry* d_parent; } ;
struct autofs_sb_info {int flags; int version; } ;
struct autofs_info {int count; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct dentry*) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct autofs_info*) ;
 int FUNC_4 (struct dentry*) ;
 struct autofs_info* FUNC_5 (struct dentry*) ;
 struct inode* FUNC_6 (int ,int) ;
 int FUNC_7 (struct autofs_sb_info*) ;
 struct autofs_sb_info* FUNC_8 (int ) ;
 int FUNC_9 (struct dentry*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct dentry*,struct inode*) ;
 int FUNC_12 (struct dentry*) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (char*,struct dentry*,struct dentry*) ;

__attribute__((used)) static int FUNC_15(struct inode *VAR_4,
       struct dentry *VAR_5, umode_t VAR_6)
{
 struct autofs_sb_info *VAR_7 = FUNC_8(VAR_4->i_sb);
 struct autofs_info *VAR_8 = FUNC_5(VAR_5);
 struct autofs_info *VAR_9;
 struct inode *VAR_10;

 if (!FUNC_7(VAR_7))
  return -VAR_1;





 if (VAR_7->flags & VAR_0)
  return -VAR_1;

 FUNC_14("dentry %p, creating %pd\n", VAR_5, VAR_5);

 FUNC_0(!VAR_8);

 FUNC_3(VAR_8);

 FUNC_4(VAR_5);

 VAR_10 = FUNC_6(VAR_4->i_sb, VAR_3 | VAR_6);
 if (!VAR_10)
  return -VAR_2;
 FUNC_11(VAR_5, VAR_10);

 if (VAR_7->version < 5)
  FUNC_9(VAR_5);

 FUNC_12(VAR_5);
 FUNC_2(&VAR_8->count);
 VAR_9 = FUNC_5(VAR_5->d_parent);
 if (VAR_9 && !FUNC_1(VAR_5))
  FUNC_2(&VAR_9->count);
 FUNC_13(VAR_4);
 VAR_4->i_mtime = FUNC_10(VAR_4);

 return 0;
}
