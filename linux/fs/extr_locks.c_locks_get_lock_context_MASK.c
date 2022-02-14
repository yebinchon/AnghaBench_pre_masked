
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_flctx; } ;
struct file_lock_context {int flc_lease; int flc_posix; int flc_flock; int flc_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *,struct file_lock_context*) ;
 int VAR_2 ;
 struct file_lock_context* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,struct file_lock_context*) ;
 scalar_t__ FUNC_4 (struct file_lock_context*) ;
 struct file_lock_context* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct inode*,int,struct file_lock_context*) ;

__attribute__((used)) static struct file_lock_context *
FUNC_8(struct inode *VAR_3, int VAR_4)
{
 struct file_lock_context *VAR_5;


 VAR_5 = FUNC_5(&VAR_3->i_flctx);
 if (FUNC_4(VAR_5) || VAR_4 == VAR_0)
  goto out;

 VAR_5 = FUNC_2(VAR_2, VAR_1);
 if (!VAR_5)
  goto out;

 FUNC_6(&VAR_5->flc_lock);
 FUNC_0(&VAR_5->flc_flock);
 FUNC_0(&VAR_5->flc_posix);
 FUNC_0(&VAR_5->flc_lease);





 if (FUNC_1(&VAR_3->i_flctx, ((void*)0), VAR_5)) {
  FUNC_3(VAR_2, VAR_5);
  VAR_5 = FUNC_5(&VAR_3->i_flctx);
 }
out:
 FUNC_7(VAR_3, VAR_4, VAR_5);
 return VAR_5;
}
