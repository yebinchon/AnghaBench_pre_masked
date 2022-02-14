
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_8__ {int entry; } ;
struct poll_iocb {int events; int done; int cancelled; TYPE_3__* head; TYPE_4__ wait; int file; int work; } ;
struct kioctx {int ctx_lock; int active_reqs; } ;
struct iocb {scalar_t__ aio_buf; scalar_t__ aio_rw_flags; scalar_t__ aio_nbytes; scalar_t__ aio_offset; } ;
struct TYPE_6__ {int _key; int _qproc; } ;
struct aio_poll_table {int error; TYPE_2__ pt; struct aio_kiocb* iocb; } ;
struct TYPE_5__ {int res; } ;
struct aio_kiocb {TYPE_1__ ki_res; int ki_cancel; int ki_list; struct poll_iocb poll; struct kioctx* ki_ctx; } ;
typedef int __poll_t ;
struct TYPE_7__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (struct aio_kiocb*) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_17(struct aio_kiocb *VAR_7, const struct iocb *VAR_8)
{
 struct kioctx *VAR_9 = VAR_7->ki_ctx;
 struct poll_iocb *VAR_10 = &VAR_7->poll;
 struct aio_poll_table VAR_11;
 bool VAR_12 = 0;
 __poll_t VAR_13;


 if ((u16)VAR_8->aio_buf != VAR_8->aio_buf)
  return -VAR_0;

 if (VAR_8->aio_offset || VAR_8->aio_nbytes || VAR_8->aio_rw_flags)
  return -VAR_0;

 FUNC_1(&VAR_10->work, VAR_4);
 VAR_10->events = FUNC_3(VAR_8->aio_buf) | VAR_1 | VAR_2;

 VAR_10->head = ((void*)0);
 VAR_10->done = 0;
 VAR_10->cancelled = 0;

 VAR_11.pt._qproc = VAR_5;
 VAR_11.pt._key = VAR_10->events;
 VAR_11.iocb = VAR_7;
 VAR_11.error = -VAR_0;


 FUNC_0(&VAR_10->wait.entry);
 FUNC_4(&VAR_10->wait, VAR_6);

 VAR_13 = FUNC_16(VAR_10->file, &VAR_11.pt) & VAR_10->events;
 FUNC_12(&VAR_9->ctx_lock);
 if (FUNC_6(VAR_10->head)) {
  FUNC_11(&VAR_10->head->lock);
  if (FUNC_15(FUNC_9(&VAR_10->wait.entry))) {
   if (VAR_11.error)
    VAR_12 = 1;
   VAR_11.error = 0;
   VAR_13 = 0;
  }
  if (VAR_13 || VAR_11.error) {
   FUNC_8(&VAR_10->wait.entry);
  } else if (VAR_12) {
   FUNC_2(VAR_10->cancelled, 1);
  } else if (!VAR_10->done) {
   FUNC_7(&VAR_7->ki_list, &VAR_9->active_reqs);
   VAR_7->ki_cancel = VAR_3;
  }
  FUNC_13(&VAR_10->head->lock);
 }
 if (VAR_13) {
  VAR_7->ki_res.res = FUNC_10(VAR_13);
  VAR_11.error = 0;
 }
 FUNC_14(&VAR_9->ctx_lock);
 if (VAR_13)
  FUNC_5(VAR_7);
 return VAR_11.error;
}
