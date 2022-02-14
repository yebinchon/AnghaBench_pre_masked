
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_size; } ;
struct iattr {int ia_valid; scalar_t__ ia_size; int ia_mode; } ;
struct dentry {int dummy; } ;
struct ceph_fs_client {int max_file_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct inode*,struct iattr*) ;
 struct ceph_fs_client* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 struct inode* FUNC_4 (struct dentry*) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (struct inode*,int ) ;
 int FUNC_7 (struct dentry*,struct iattr*) ;

int FUNC_8(struct dentry *VAR_6, struct iattr *VAR_7)
{
 struct inode *VAR_8 = FUNC_4(VAR_6);
 struct ceph_fs_client *VAR_9 = FUNC_1(VAR_8);
 int VAR_10;

 if (FUNC_3(VAR_8) != VAR_2)
  return -VAR_5;

 VAR_10 = FUNC_7(VAR_6, VAR_7);
 if (VAR_10 != 0)
  return VAR_10;

 if ((VAR_7->ia_valid & VAR_1) &&
     VAR_7->ia_size > FUNC_5(VAR_8->i_size, VAR_9->max_file_size))
  return -VAR_4;

 if ((VAR_7->ia_valid & VAR_1) &&
     FUNC_2(VAR_8, VAR_7->ia_size))
  return -VAR_3;

 VAR_10 = FUNC_0(VAR_8, VAR_7);

 if (VAR_10 >= 0 && (VAR_7->ia_valid & VAR_0))
  VAR_10 = FUNC_6(VAR_8, VAR_7->ia_mode);

 return VAR_10;
}
