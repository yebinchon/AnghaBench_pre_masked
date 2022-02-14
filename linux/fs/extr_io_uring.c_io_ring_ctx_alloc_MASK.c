
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct io_uring_params {int flags; } ;
struct io_ring_ctx {int timeout_list; int defer_list; int cancel_list; int poll_list; int completion_lock; TYPE_1__* pending_async; int wait; int uring_lock; int sqo_thread_started; int ctx_done; int cq_wait; int flags; int refs; } ;
struct TYPE_2__ {int cnt; int list; int lock; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (struct io_ring_ctx*) ;
 struct io_ring_ctx* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int ,int ,int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static struct io_ring_ctx *FUNC_10(struct io_uring_params *VAR_3)
{
 struct io_ring_ctx *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_6(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 if (FUNC_8(&VAR_4->refs, VAR_2,
       VAR_1, VAR_0)) {
  FUNC_5(VAR_4);
  return ((void*)0);
 }

 VAR_4->flags = VAR_3->flags;
 FUNC_4(&VAR_4->cq_wait);
 FUNC_3(&VAR_4->ctx_done);
 FUNC_3(&VAR_4->sqo_thread_started);
 FUNC_7(&VAR_4->uring_lock);
 FUNC_4(&VAR_4->wait);
 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4->pending_async); VAR_5++) {
  FUNC_9(&VAR_4->pending_async[VAR_5].lock);
  FUNC_1(&VAR_4->pending_async[VAR_5].list);
  FUNC_2(&VAR_4->pending_async[VAR_5].cnt, 0);
 }
 FUNC_9(&VAR_4->completion_lock);
 FUNC_1(&VAR_4->poll_list);
 FUNC_1(&VAR_4->cancel_list);
 FUNC_1(&VAR_4->defer_list);
 FUNC_1(&VAR_4->timeout_list);
 return VAR_4;
}
