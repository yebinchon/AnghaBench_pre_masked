
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_size; int i_ctime; int i_ino; int i_sb; } ;
struct hfsplus_sb_info {int vh_mutex; } ;
struct dentry {int d_name; } ;


 int VAR_0 ;
 struct hfsplus_sb_info* FUNC_0 (int ) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 struct inode* FUNC_3 (struct dentry*) ;
 int FUNC_4 (int ,struct inode*,int *) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_1, struct dentry *VAR_2)
{
 struct hfsplus_sb_info *VAR_3 = FUNC_0(VAR_1->i_sb);
 struct inode *VAR_4 = FUNC_3(VAR_2);
 int VAR_5;

 if (VAR_4->i_size != 2)
  return -VAR_0;

 FUNC_7(&VAR_3->vh_mutex);
 VAR_5 = FUNC_4(VAR_4->i_ino, VAR_1, &VAR_2->d_name);
 if (VAR_5)
  goto out;
 FUNC_1(VAR_4);
 VAR_4->i_ctime = FUNC_2(VAR_4);
 FUNC_5(VAR_4);
 FUNC_6(VAR_4);
out:
 FUNC_8(&VAR_3->vh_mutex);
 return VAR_5;
}
