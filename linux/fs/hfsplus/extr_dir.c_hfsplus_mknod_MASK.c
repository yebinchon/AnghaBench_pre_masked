
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct inode {int i_ino; int i_sb; } ;
struct hfsplus_sb_info {int vh_mutex; } ;
struct dentry {int d_name; } ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct hfsplus_sb_info* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int ,struct inode*,int *,struct inode*) ;
 int FUNC_7 (int ,struct inode*,int *) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*,struct inode*,int *) ;
 int FUNC_10 (struct dentry*,struct inode*,int ) ;
 struct inode* FUNC_11 (int ,struct inode*,int ) ;
 int FUNC_12 (struct inode*,int ,int ) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(struct inode *VAR_2, struct dentry *VAR_3,
    umode_t VAR_4, dev_t VAR_5)
{
 struct hfsplus_sb_info *VAR_6 = FUNC_0(VAR_2->i_sb);
 struct inode *VAR_7;
 int VAR_8 = -VAR_0;

 FUNC_15(&VAR_6->vh_mutex);
 VAR_7 = FUNC_11(VAR_2->i_sb, VAR_2, VAR_4);
 if (!VAR_7)
  goto out;

 if (FUNC_1(VAR_4) || FUNC_2(VAR_4) || FUNC_3(VAR_4) || FUNC_4(VAR_4))
  FUNC_12(VAR_7, VAR_4, VAR_5);

 VAR_8 = FUNC_6(VAR_7->i_ino, VAR_2, &VAR_3->d_name, VAR_7);
 if (VAR_8)
  goto failed_mknod;

 VAR_8 = FUNC_9(VAR_7, VAR_2, &VAR_3->d_name);
 if (VAR_8 == -VAR_1)
  VAR_8 = 0;
 else if (VAR_8) {

  FUNC_7(VAR_7->i_ino, VAR_2, &VAR_3->d_name);
  goto failed_mknod;
 }

 FUNC_10(VAR_3, VAR_7, VAR_7->i_ino);
 FUNC_14(VAR_7);
 goto out;

failed_mknod:
 FUNC_5(VAR_7);
 FUNC_8(VAR_7);
 FUNC_13(VAR_7);
out:
 FUNC_16(&VAR_6->vh_mutex);
 return VAR_8;
}
