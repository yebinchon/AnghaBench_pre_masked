
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kiocb {int ki_filp; struct ffs_io_data* private; } ;
struct iov_iter {int dummy; } ;
struct ffs_io_data {int aio; int read; struct iov_iter data; struct ffs_io_data* to_free; int mm; struct kiocb* kiocb; } ;
typedef int ssize_t ;
typedef int io_data ;
struct TYPE_2__ {int mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 struct ffs_io_data* FUNC_1 (struct iov_iter*,struct iov_iter*,int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,struct ffs_io_data*) ;
 int FUNC_3 (struct kiocb*) ;
 int FUNC_4 (struct ffs_io_data*) ;
 int FUNC_5 (struct kiocb*,int ) ;
 struct ffs_io_data* FUNC_6 (int,int ) ;
 int FUNC_7 (struct ffs_io_data*,int ,int) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static ssize_t FUNC_9(struct kiocb *VAR_5, struct iov_iter *VAR_6)
{
 struct ffs_io_data VAR_7, *VAR_8 = &VAR_7;
 ssize_t VAR_9;

 FUNC_0();

 if (!FUNC_3(VAR_5)) {
  VAR_8 = FUNC_6(sizeof(VAR_7), VAR_2);
  if (FUNC_8(!VAR_8))
   return -VAR_1;
  VAR_8->aio = 1;
 } else {
  FUNC_7(VAR_8, 0, sizeof(*VAR_8));
  VAR_8->aio = 0;
 }

 VAR_8->read = 1;
 VAR_8->kiocb = VAR_5;
 if (VAR_8->aio) {
  VAR_8->to_free = FUNC_1(&VAR_8->data, VAR_6, VAR_2);
  if (!VAR_8->to_free) {
   FUNC_4(VAR_8);
   return -VAR_1;
  }
 } else {
  VAR_8->data = *VAR_6;
  VAR_8->to_free = ((void*)0);
 }
 VAR_8->mm = VAR_3->mm;

 VAR_5->private = VAR_8;

 if (VAR_8->aio)
  FUNC_5(VAR_5, VAR_4);

 VAR_9 = FUNC_2(VAR_5->ki_filp, VAR_8);
 if (VAR_9 == -VAR_0)
  return VAR_9;

 if (VAR_8->aio) {
  FUNC_4(VAR_8->to_free);
  FUNC_4(VAR_8);
 } else {
  *VAR_6 = VAR_8->data;
 }
 return VAR_9;
}
