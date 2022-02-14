
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct inode {int dummy; } ;
struct fuse_lk_out {int lk; } ;
struct fuse_lk_in {int dummy; } ;
struct fuse_conn {int dummy; } ;
struct file_lock {int dummy; } ;
struct file {int dummy; } ;
typedef int outarg ;
struct TYPE_7__ {int out_numargs; TYPE_1__* out_args; } ;
struct TYPE_6__ {int size; struct fuse_lk_out* value; } ;


 int FUNC_0 (TYPE_2__) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (struct fuse_conn*,int *,struct file_lock*) ;
 struct inode* FUNC_2 (struct file*) ;
 int FUNC_3 (TYPE_2__*,struct file*,struct file_lock*,int ,int ,int ,struct fuse_lk_in*) ;
 int FUNC_4 (struct fuse_conn*,TYPE_2__*) ;
 struct fuse_conn* FUNC_5 (struct inode*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_2, struct file_lock *VAR_3)
{
 struct inode *VAR_4 = FUNC_2(VAR_2);
 struct fuse_conn *VAR_5 = FUNC_5(VAR_4);
 FUNC_0(VAR_1);
 struct fuse_lk_in VAR_6;
 struct fuse_lk_out VAR_7;
 int VAR_8;

 FUNC_3(&VAR_1, VAR_2, VAR_3, VAR_0, 0, 0, &VAR_6);
 VAR_1.out_numargs = 1;
 VAR_1.out_args[0].size = sizeof(VAR_7);
 VAR_1.out_args[0].value = &VAR_7;
 VAR_8 = FUNC_4(VAR_5, &VAR_1);
 if (!VAR_8)
  VAR_8 = FUNC_1(VAR_5, &VAR_7.lk, VAR_3);

 return VAR_8;
}
