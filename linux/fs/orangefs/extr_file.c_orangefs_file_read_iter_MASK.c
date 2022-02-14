
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct orangefs_read_options {int blksiz; } ;
struct kiocb {TYPE_4__* ki_filp; } ;
struct iov_iter {int count; } ;
typedef int ssize_t ;
struct TYPE_7__ {struct orangefs_read_options* private_data; } ;
struct TYPE_6__ {int i_rwsem; } ;
struct TYPE_5__ {int reads; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (struct kiocb*,struct iov_iter*) ;
 struct orangefs_read_options* FUNC_3 (int,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static ssize_t FUNC_6(struct kiocb *VAR_3,
    struct iov_iter *VAR_4)
{
 int VAR_5;
 struct orangefs_read_options *VAR_6;

 VAR_2.reads++;






 if (!VAR_3->ki_filp->private_data) {
  VAR_3->ki_filp->private_data = FUNC_3(sizeof *VAR_6, VAR_1);
  if (!VAR_3->ki_filp->private_data)
   return(VAR_0);
  VAR_6 = VAR_3->ki_filp->private_data;
  VAR_6->blksiz = VAR_4->count;
 }

 FUNC_0(&FUNC_1(VAR_3->ki_filp)->i_rwsem);
 VAR_5 = FUNC_4(FUNC_1(VAR_3->ki_filp));
 if (VAR_5)
  goto out;

 VAR_5 = FUNC_2(VAR_3, VAR_4);
out:
 FUNC_5(&FUNC_1(VAR_3->ki_filp)->i_rwsem);
 return VAR_5;
}
