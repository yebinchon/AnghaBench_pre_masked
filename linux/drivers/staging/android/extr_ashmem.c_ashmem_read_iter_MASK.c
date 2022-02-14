
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kiocb {int ki_pos; TYPE_1__* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct ashmem_area {scalar_t__ size; TYPE_2__* file; } ;
typedef int ssize_t ;
struct TYPE_4__ {int f_pos; } ;
struct TYPE_3__ {struct ashmem_area* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,struct iov_iter*,int *,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct kiocb *VAR_2, struct iov_iter *VAR_3)
{
 struct ashmem_area *VAR_4 = VAR_2->ki_filp->private_data;
 int VAR_5 = 0;

 FUNC_0(&VAR_1);


 if (VAR_4->size == 0)
  goto out_unlock;

 if (!VAR_4->file) {
  VAR_5 = -VAR_0;
  goto out_unlock;
 }







 FUNC_1(&VAR_1);
 VAR_5 = FUNC_2(VAR_4->file, VAR_3, &VAR_2->ki_pos, 0);
 FUNC_0(&VAR_1);
 if (VAR_5 > 0)
  VAR_4->file->f_pos = VAR_2->ki_pos;
out_unlock:
 FUNC_1(&VAR_1);
 return VAR_5;
}
