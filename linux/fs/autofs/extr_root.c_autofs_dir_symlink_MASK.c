
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {char* i_private; size_t i_size; int i_mtime; int i_sb; } ;
struct dentry {struct dentry* d_parent; } ;
struct autofs_sb_info {int flags; } ;
struct autofs_info {int count; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct dentry*) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct autofs_info*) ;
 int FUNC_4 (struct dentry*) ;
 struct autofs_info* FUNC_5 (struct dentry*) ;
 struct inode* FUNC_6 (int ,int) ;
 int FUNC_7 (struct autofs_sb_info*) ;
 struct autofs_sb_info* FUNC_8 (int ) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct dentry*,struct inode*) ;
 int FUNC_11 (struct dentry*) ;
 int FUNC_12 (char*) ;
 char* FUNC_13 (size_t,int ) ;
 int FUNC_14 (char*,char const*,struct dentry*) ;
 int FUNC_15 (char*,char const*) ;
 size_t FUNC_16 (char const*) ;

__attribute__((used)) static int FUNC_17(struct inode *VAR_5,
          struct dentry *VAR_6,
          const char *VAR_7)
{
 struct autofs_sb_info *VAR_8 = FUNC_8(VAR_5->i_sb);
 struct autofs_info *VAR_9 = FUNC_5(VAR_6);
 struct autofs_info *VAR_10;
 struct inode *VAR_11;
 size_t VAR_12 = FUNC_16(VAR_7);
 char *VAR_13;

 FUNC_14("%s <- %pd\n", VAR_7, VAR_6);

 if (!FUNC_7(VAR_8))
  return -VAR_1;





 if (VAR_8->flags & VAR_0)
  return -VAR_1;

 FUNC_0(!VAR_9);

 FUNC_3(VAR_9);

 FUNC_4(VAR_6);

 VAR_13 = FUNC_13(VAR_12 + 1, VAR_3);
 if (!VAR_13)
  return -VAR_2;

 FUNC_15(VAR_13, VAR_7);

 VAR_11 = FUNC_6(VAR_5->i_sb, VAR_4 | 0555);
 if (!VAR_11) {
  FUNC_12(VAR_13);
  return -VAR_2;
 }
 VAR_11->i_private = VAR_13;
 VAR_11->i_size = VAR_12;
 FUNC_10(VAR_6, VAR_11);

 FUNC_11(VAR_6);
 FUNC_2(&VAR_9->count);
 VAR_10 = FUNC_5(VAR_6->d_parent);
 if (VAR_10 && !FUNC_1(VAR_6))
  FUNC_2(&VAR_10->count);

 VAR_5->i_mtime = FUNC_9(VAR_5);

 return 0;
}
