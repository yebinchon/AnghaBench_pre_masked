
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {scalar_t__ s_user_ns; struct fuse_conn* s_fs_info; } ;
struct fuse_fs_context {int * fudptr; int fd; } ;
struct fuse_conn {int release; } ;
struct fs_context {struct fuse_fs_context* fs_private; } ;
struct file {int private_data; TYPE_1__* f_cred; int * f_op; } ;
struct TYPE_2__ {scalar_t__ user_ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct file* FUNC_0 (int ) ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (struct fuse_conn*,scalar_t__,int *,int *) ;
 int FUNC_3 (struct fuse_conn*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct super_block*,struct fuse_fs_context*) ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct super_block*) ;
 struct fuse_conn* FUNC_7 (int,int ) ;

__attribute__((used)) static int FUNC_8(struct super_block *VAR_6, struct fs_context *VAR_7)
{
 struct fuse_fs_context *VAR_8 = VAR_7->fs_private;
 struct file *VAR_9;
 int VAR_10;
 struct fuse_conn *VAR_11;

 VAR_10 = -VAR_0;
 VAR_9 = FUNC_0(VAR_8->fd);
 if (!VAR_9)
  goto err;





 if ((VAR_9->f_op != &VAR_4) ||
     (VAR_9->f_cred->user_ns != VAR_6->s_user_ns))
  goto err_fput;
 VAR_8->fudptr = &VAR_9->private_data;

 VAR_11 = FUNC_7(sizeof(*VAR_11), VAR_2);
 VAR_10 = -VAR_1;
 if (!VAR_11)
  goto err_fput;

 FUNC_2(VAR_11, VAR_6->s_user_ns, &VAR_3, ((void*)0));
 VAR_11->release = VAR_5;
 VAR_6->s_fs_info = VAR_11;

 VAR_10 = FUNC_4(VAR_6, VAR_8);
 if (VAR_10)
  goto err_put_conn;





 FUNC_1(VAR_9);
 FUNC_5(FUNC_6(VAR_6));
 return 0;

 err_put_conn:
 FUNC_3(VAR_11);
 VAR_6->s_fs_info = ((void*)0);
 err_fput:
 FUNC_1(VAR_9);
 err:
 return VAR_10;
}
