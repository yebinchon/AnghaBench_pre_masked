
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sqe_submit {TYPE_1__* sqe; } ;
struct io_ring_ctx {int completion_lock; int defer_list; } ;
struct io_kiocb {int list; int flags; } ;
struct TYPE_2__ {int user_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct io_kiocb*) ;
 int FUNC_1 (struct io_ring_ctx*,struct io_kiocb*,struct sqe_submit*) ;
 int FUNC_2 (struct io_ring_ctx*,int ,int) ;
 int FUNC_3 (struct io_kiocb*) ;
 int FUNC_4 (struct io_ring_ctx*,struct io_kiocb*,struct sqe_submit*) ;
 int FUNC_5 (struct io_ring_ctx*,struct io_kiocb*,TYPE_1__*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct io_ring_ctx *VAR_2, struct io_kiocb *VAR_3,
         struct sqe_submit *VAR_4, struct io_kiocb *VAR_5)
{
 int VAR_6;
 int VAR_7 = 0;

 if (!VAR_5)
  return FUNC_4(VAR_2, VAR_3, VAR_4);






 VAR_3->flags |= VAR_1;
 VAR_6 = FUNC_5(VAR_2, VAR_3, VAR_4->sqe);
 if (VAR_6) {
  if (VAR_6 != -VAR_0) {
   FUNC_3(VAR_3);
   FUNC_0(VAR_5);
   FUNC_2(VAR_2, VAR_4->sqe->user_data, VAR_6);
   return 0;
  }
 } else {




  VAR_7 = 1;
 }


 FUNC_7(&VAR_2->completion_lock);
 FUNC_6(&VAR_5->list, &VAR_2->defer_list);
 FUNC_8(&VAR_2->completion_lock);

 if (VAR_7)
  return FUNC_1(VAR_2, VAR_3, VAR_4);

 return 0;
}
