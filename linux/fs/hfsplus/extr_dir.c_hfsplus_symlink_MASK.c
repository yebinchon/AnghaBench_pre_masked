
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ino; int i_sb; } ;
struct hfsplus_sb_info {int vh_mutex; } ;
struct dentry {int d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hfsplus_sb_info* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int ,struct inode*,int *,struct inode*) ;
 int FUNC_3 (int ,struct inode*,int *) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,struct inode*,int *) ;
 int FUNC_6 (struct dentry*,struct inode*,int ) ;
 struct inode* FUNC_7 (int ,struct inode*,int) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct inode*,char const*,scalar_t__) ;
 scalar_t__ FUNC_13 (char const*) ;

__attribute__((used)) static int FUNC_14(struct inode *VAR_4, struct dentry *VAR_5,
      const char *VAR_6)
{
 struct hfsplus_sb_info *VAR_7 = FUNC_0(VAR_4->i_sb);
 struct inode *VAR_8;
 int VAR_9 = -VAR_0;

 FUNC_10(&VAR_7->vh_mutex);
 VAR_8 = FUNC_7(VAR_4->i_sb, VAR_4, VAR_2 | VAR_3);
 if (!VAR_8)
  goto out;

 VAR_9 = FUNC_12(VAR_8, VAR_6, FUNC_13(VAR_6) + 1);
 if (VAR_9)
  goto out_err;

 VAR_9 = FUNC_2(VAR_8->i_ino, VAR_4, &VAR_5->d_name, VAR_8);
 if (VAR_9)
  goto out_err;

 VAR_9 = FUNC_5(VAR_8, VAR_4, &VAR_5->d_name);
 if (VAR_9 == -VAR_1)
  VAR_9 = 0;
 else if (VAR_9) {

  FUNC_3(VAR_8->i_ino, VAR_4, &VAR_5->d_name);
  goto out_err;
 }

 FUNC_6(VAR_5, VAR_8, VAR_8->i_ino);
 FUNC_9(VAR_8);
 goto out;

out_err:
 FUNC_1(VAR_8);
 FUNC_4(VAR_8);
 FUNC_8(VAR_8);
out:
 FUNC_11(&VAR_7->vh_mutex);
 return VAR_9;
}
