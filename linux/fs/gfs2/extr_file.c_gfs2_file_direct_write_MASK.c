
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kiocb {scalar_t__ ki_pos; struct file* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct inode {int dummy; } ;
struct gfs2_inode {int i_inode; int i_gl; } ;
struct gfs2_holder {int dummy; } ;
struct file {TYPE_1__* f_mapping; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {struct inode* host; } ;


 struct gfs2_inode* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (struct gfs2_holder*) ;
 scalar_t__ FUNC_2 (struct gfs2_holder*) ;
 int FUNC_3 (int ,int ,int ,struct gfs2_holder*) ;
 int FUNC_4 (struct gfs2_holder*) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct kiocb*,struct iov_iter*,int *,int *) ;
 size_t FUNC_7 (struct iov_iter*) ;

__attribute__((used)) static ssize_t FUNC_8(struct kiocb *VAR_2, struct iov_iter *VAR_3)
{
 struct file *VAR_4 = VAR_2->ki_filp;
 struct inode *VAR_5 = VAR_4->f_mapping->host;
 struct gfs2_inode *VAR_6 = FUNC_0(VAR_5);
 size_t VAR_7 = FUNC_7(VAR_3);
 loff_t VAR_8 = VAR_2->ki_pos;
 struct gfs2_holder VAR_9;
 ssize_t VAR_10;
 FUNC_3(VAR_6->i_gl, VAR_0, 0, &VAR_9);
 VAR_10 = FUNC_2(&VAR_9);
 if (VAR_10)
  goto out_uninit;


 if (VAR_8 + VAR_7 > FUNC_5(&VAR_6->i_inode))
  goto out;

 VAR_10 = FUNC_6(VAR_2, VAR_3, &VAR_1, ((void*)0));

out:
 FUNC_1(&VAR_9);
out_uninit:
 FUNC_4(&VAR_9);
 return VAR_10;
}
