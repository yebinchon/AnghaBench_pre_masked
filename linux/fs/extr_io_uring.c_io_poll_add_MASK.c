
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct io_uring_sqe {int poll_events; scalar_t__ buf_index; scalar_t__ len; scalar_t__ off; scalar_t__ ioprio; scalar_t__ addr; } ;
struct io_ring_ctx {int flags; int completion_lock; int cancel_list; } ;
struct TYPE_6__ {int _key; int _qproc; } ;
struct io_poll_table {int error; TYPE_2__ pt; struct io_kiocb* req; } ;
struct TYPE_8__ {int entry; } ;
struct io_poll_iocb {int events; int done; int canceled; TYPE_3__* head; TYPE_4__ wait; int file; } ;
struct TYPE_5__ {int * sqe; } ;
struct io_kiocb {int list; int work; TYPE_1__ submit; struct io_ring_ctx* ctx; struct io_poll_iocb poll; } ;
typedef int __poll_t ;
struct TYPE_7__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (struct io_ring_ctx*) ;
 int FUNC_7 (struct io_ring_ctx*,struct io_kiocb*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (struct io_kiocb*) ;
 scalar_t__ FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int) ;
 int FUNC_18 (int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_19(struct io_kiocb *VAR_8, const struct io_uring_sqe *VAR_9)
{
 struct io_poll_iocb *VAR_10 = &VAR_8->poll;
 struct io_ring_ctx *VAR_11 = VAR_8->ctx;
 struct io_poll_table VAR_12;
 bool VAR_13 = 0;
 __poll_t VAR_14;
 u16 VAR_15;

 if (FUNC_17(VAR_8->ctx->flags & VAR_4))
  return -VAR_1;
 if (VAR_9->addr || VAR_9->ioprio || VAR_9->off || VAR_9->len || VAR_9->buf_index)
  return -VAR_1;
 if (!VAR_10->file)
  return -VAR_0;

 VAR_8->submit.sqe = ((void*)0);
 FUNC_1(&VAR_8->work, VAR_5);
 VAR_15 = FUNC_2(VAR_9->poll_events);
 VAR_10->events = FUNC_4(VAR_15) | VAR_2 | VAR_3;

 VAR_10->head = ((void*)0);
 VAR_10->done = 0;
 VAR_10->canceled = 0;

 VAR_12.pt._qproc = VAR_6;
 VAR_12.pt._key = VAR_10->events;
 VAR_12.req = VAR_8;
 VAR_12.error = -VAR_1;


 FUNC_0(&VAR_10->wait.entry);
 FUNC_5(&VAR_10->wait, VAR_7);

 FUNC_0(&VAR_8->list);

 VAR_14 = FUNC_18(VAR_10->file, &VAR_12.pt) & VAR_10->events;

 FUNC_14(&VAR_11->completion_lock);
 if (FUNC_9(VAR_10->head)) {
  FUNC_13(&VAR_10->head->lock);
  if (FUNC_17(FUNC_12(&VAR_10->wait.entry))) {
   if (VAR_12.error)
    VAR_13 = 1;
   VAR_12.error = 0;
   VAR_14 = 0;
  }
  if (VAR_14 || VAR_12.error)
   FUNC_11(&VAR_10->wait.entry);
  else if (VAR_13)
   FUNC_3(VAR_10->canceled, 1);
  else if (!VAR_10->done)
   FUNC_10(&VAR_8->list, &VAR_11->cancel_list);
  FUNC_15(&VAR_10->head->lock);
 }
 if (VAR_14) {
  VAR_12.error = 0;
  FUNC_7(VAR_11, VAR_8, VAR_14);
 }
 FUNC_16(&VAR_11->completion_lock);

 if (VAR_14) {
  FUNC_6(VAR_11);
  FUNC_8(VAR_8);
 }
 return VAR_12.error;
}
