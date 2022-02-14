
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iocb {scalar_t__ aio_rw_flags; scalar_t__ aio_nbytes; scalar_t__ aio_offset; scalar_t__ aio_buf; } ;
struct fsync_iocb {int datasync; int work; TYPE_2__* file; } ;
struct TYPE_4__ {TYPE_1__* f_op; } ;
struct TYPE_3__ {int fsync; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct fsync_iocb *VAR_2, const struct iocb *VAR_3,
       bool VAR_4)
{
 if (FUNC_2(VAR_3->aio_buf || VAR_3->aio_offset || VAR_3->aio_nbytes ||
   VAR_3->aio_rw_flags))
  return -VAR_0;

 if (FUNC_2(!VAR_2->file->f_op->fsync))
  return -VAR_0;

 VAR_2->datasync = VAR_4;
 FUNC_0(&VAR_2->work, VAR_1);
 FUNC_1(&VAR_2->work);
 return 0;
}
