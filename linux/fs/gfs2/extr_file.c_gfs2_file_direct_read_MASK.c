
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kiocb {struct file* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct gfs2_inode {int i_gl; } ;
struct gfs2_holder {int dummy; } ;
struct file {TYPE_1__* f_mapping; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_2__ {int host; } ;


 struct gfs2_inode* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct gfs2_holder*) ;
 scalar_t__ FUNC_2 (struct gfs2_holder*) ;
 int FUNC_3 (int ,int ,int ,struct gfs2_holder*) ;
 int FUNC_4 (struct gfs2_holder*) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (struct kiocb*,struct iov_iter*,int *,int *) ;
 size_t FUNC_6 (struct iov_iter*) ;

__attribute__((used)) static ssize_t FUNC_7(struct kiocb *VAR_2, struct iov_iter *VAR_3)
{
 struct file *VAR_4 = VAR_2->ki_filp;
 struct gfs2_inode *VAR_5 = FUNC_0(VAR_4->f_mapping->host);
 size_t VAR_6 = FUNC_6(VAR_3);
 struct gfs2_holder VAR_7;
 ssize_t VAR_8;

 if (!VAR_6)
  return 0;

 FUNC_3(VAR_5->i_gl, VAR_0, 0, &VAR_7);
 VAR_8 = FUNC_2(&VAR_7);
 if (VAR_8)
  goto out_uninit;

 VAR_8 = FUNC_5(VAR_2, VAR_3, &VAR_1, ((void*)0));

 FUNC_1(&VAR_7);
out_uninit:
 FUNC_4(&VAR_7);
 return VAR_8;
}
