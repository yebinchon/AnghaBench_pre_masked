
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct fuse_rename_in {int dummy; } ;
struct fuse_rename2_in {int dummy; } ;
struct fuse_conn {int no_rename2; int minor; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct inode*,struct dentry*,struct inode*,struct dentry*,unsigned int,int ,int) ;
 struct fuse_conn* FUNC_1 (struct inode*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_6, struct dentry *VAR_7,
   struct inode *VAR_8, struct dentry *VAR_9,
   unsigned int VAR_10)
{
 struct fuse_conn *VAR_11 = FUNC_1(VAR_6);
 int VAR_12;

 if (VAR_10 & ~(VAR_5 | VAR_4))
  return -VAR_0;

 if (VAR_10) {
  if (VAR_11->no_rename2 || VAR_11->minor < 23)
   return -VAR_0;

  VAR_12 = FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
      VAR_3,
      sizeof(struct fuse_rename2_in));
  if (VAR_12 == -VAR_1) {
   VAR_11->no_rename2 = 1;
   VAR_12 = -VAR_0;
  }
 } else {
  VAR_12 = FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9, 0,
      VAR_2,
      sizeof(struct fuse_rename_in));
 }

 return VAR_12;
}
