
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct inode {int dummy; } ;
struct fuse_conn {int no_create; } ;
struct file {int f_mode; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 unsigned int VAR_2 ;
 int FUNC_1 (struct dentry*) ;
 scalar_t__ FUNC_2 (struct dentry*) ;
 scalar_t__ FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct file*,struct dentry*) ;
 int FUNC_6 (struct inode*,struct dentry*,struct file*,unsigned int,int ) ;
 struct dentry* FUNC_7 (struct inode*,struct dentry*,int ) ;
 int FUNC_8 (struct inode*,struct dentry*,int ,int ) ;
 struct fuse_conn* FUNC_9 (struct inode*) ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_3, struct dentry *VAR_4,
       struct file *VAR_5, unsigned VAR_6,
       umode_t VAR_7)
{
 int VAR_8;
 struct fuse_conn *VAR_9 = FUNC_9(VAR_3);
 struct dentry *VAR_10 = ((void*)0);

 if (FUNC_2(VAR_4)) {
  VAR_10 = FUNC_7(VAR_3, VAR_4, 0);
  if (FUNC_0(VAR_10))
   return FUNC_1(VAR_10);

  if (VAR_10)
   VAR_4 = VAR_10;
 }

 if (!(VAR_6 & VAR_2) || FUNC_3(VAR_4))
  goto no_open;


 VAR_5->f_mode |= VAR_1;

 if (VAR_9->no_create)
  goto mknod;

 VAR_8 = FUNC_6(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_8 == -VAR_0) {
  VAR_9->no_create = 1;
  goto mknod;
 }
out_dput:
 FUNC_4(VAR_10);
 return VAR_8;

mknod:
 VAR_8 = FUNC_8(VAR_3, VAR_4, VAR_7, 0);
 if (VAR_8)
  goto out_dput;
no_open:
 return FUNC_5(VAR_5, VAR_10);
}
