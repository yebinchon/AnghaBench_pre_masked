
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sqe_submit {struct io_uring_sqe* sqe; } ;
struct io_uring_sqe {int dummy; } ;
struct io_ring_ctx {int dummy; } ;
struct io_kiocb {int flags; int user_data; int work; int submit; } ;
struct async_list {int cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct io_ring_ctx*,struct io_kiocb*,struct sqe_submit*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct async_list*,struct io_kiocb*) ;
 struct async_list* FUNC_4 (struct io_ring_ctx*,struct io_uring_sqe*) ;
 int FUNC_5 (struct io_ring_ctx*,int ,int) ;
 int FUNC_6 (struct io_kiocb*) ;
 int FUNC_7 (struct io_ring_ctx*,struct io_kiocb*) ;
 int VAR_6 ;
 struct io_uring_sqe* FUNC_8 (struct io_uring_sqe*,int,int ) ;
 int FUNC_9 (int *,struct sqe_submit*,int) ;

__attribute__((used)) static int FUNC_10(struct io_ring_ctx *VAR_7, struct io_kiocb *VAR_8,
   struct sqe_submit *VAR_9)
{
 int VAR_10;

 VAR_10 = FUNC_1(VAR_7, VAR_8, VAR_9, 1);





 if (VAR_10 == -VAR_0 && (!(VAR_8->flags & VAR_5) ||
     (VAR_8->flags & VAR_4))) {
  struct io_uring_sqe *VAR_11;

  VAR_11 = FUNC_8(VAR_9->sqe, sizeof(*VAR_11), VAR_1);
  if (VAR_11) {
   struct async_list *VAR_12;

   VAR_9->sqe = VAR_11;
   FUNC_9(&VAR_8->submit, VAR_9, sizeof(*VAR_9));
   VAR_12 = FUNC_4(VAR_7, VAR_9->sqe);
   if (!FUNC_3(VAR_12, VAR_8)) {
    if (VAR_12)
     FUNC_2(&VAR_12->cnt);
    FUNC_0(&VAR_8->work, VAR_6);
    FUNC_7(VAR_7, VAR_8);
   }





   return 0;
  }
 }


 FUNC_6(VAR_8);


 if (VAR_10) {
  FUNC_5(VAR_7, VAR_8->user_data, VAR_10);
  if (VAR_8->flags & VAR_3)
   VAR_8->flags |= VAR_2;
  FUNC_6(VAR_8);
 }

 return VAR_10;
}
