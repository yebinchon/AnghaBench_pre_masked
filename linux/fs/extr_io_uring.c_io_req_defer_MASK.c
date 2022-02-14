
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct io_uring_sqe {int dummy; } ;
struct io_ring_ctx {int completion_lock; int defer_list; } ;
struct TYPE_2__ {struct io_uring_sqe* sqe; } ;
struct io_kiocb {int list; int work; TYPE_1__ submit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct io_ring_ctx*,struct io_kiocb*) ;
 int VAR_3 ;
 int FUNC_2 (struct io_uring_sqe*) ;
 struct io_uring_sqe* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct io_uring_sqe*,struct io_uring_sqe const*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct io_ring_ctx *VAR_4, struct io_kiocb *VAR_5,
   const struct io_uring_sqe *VAR_6)
{
 struct io_uring_sqe *VAR_7;

 if (!FUNC_1(VAR_4, VAR_5) && FUNC_5(&VAR_4->defer_list))
  return 0;

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_0;

 FUNC_7(&VAR_4->completion_lock);
 if (!FUNC_1(VAR_4, VAR_5) && FUNC_5(&VAR_4->defer_list)) {
  FUNC_8(&VAR_4->completion_lock);
  FUNC_2(VAR_7);
  return 0;
 }

 FUNC_6(VAR_7, VAR_6, sizeof(*VAR_7));
 VAR_5->submit.sqe = VAR_7;

 FUNC_0(&VAR_5->work, VAR_3);
 FUNC_4(&VAR_5->list, &VAR_4->defer_list);
 FUNC_8(&VAR_4->completion_lock);
 return -VAR_1;
}
