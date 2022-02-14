
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sqe_submit {struct io_uring_sqe* sqe; } ;
struct io_uring_sqe {int flags; int user_data; } ;
struct io_submit_state {int dummy; } ;
struct io_ring_ctx {int dummy; } ;
struct io_kiocb {int link_list; int submit; int flags; int list; int user_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct io_ring_ctx*,int ,int) ;
 int FUNC_2 (struct io_kiocb*) ;
 struct io_kiocb* FUNC_3 (struct io_ring_ctx*,struct io_submit_state*) ;
 int FUNC_4 (struct io_ring_ctx*,struct io_kiocb*,struct sqe_submit*) ;
 int FUNC_5 (struct io_ring_ctx*,struct sqe_submit*,struct io_submit_state*,struct io_kiocb*) ;
 struct io_uring_sqe* FUNC_6 (struct io_uring_sqe*,int,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,struct sqe_submit*,int) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct io_ring_ctx *VAR_6, struct sqe_submit *VAR_7,
     struct io_submit_state *VAR_8, struct io_kiocb **VAR_9)
{
 struct io_uring_sqe *VAR_10;
 struct io_kiocb *VAR_11;
 int VAR_12;


 if (FUNC_9(VAR_7->sqe->flags & ~VAR_5)) {
  VAR_12 = -VAR_1;
  goto err;
 }

 VAR_11 = FUNC_3(VAR_6, VAR_8);
 if (FUNC_9(!VAR_11)) {
  VAR_12 = -VAR_0;
  goto err;
 }

 VAR_12 = FUNC_5(VAR_6, VAR_7, VAR_8, VAR_11);
 if (FUNC_9(VAR_12)) {
err_req:
  FUNC_2(VAR_11);
err:
  FUNC_1(VAR_6, VAR_7->sqe->user_data, VAR_12);
  return;
 }

 VAR_11->user_data = VAR_7->sqe->user_data;
 if (*VAR_9) {
  struct io_kiocb *VAR_13 = *VAR_9;

  VAR_10 = FUNC_6(VAR_7->sqe, sizeof(*VAR_10), VAR_2);
  if (!VAR_10) {
   VAR_12 = -VAR_0;
   goto err_req;
  }

  VAR_7->sqe = VAR_10;
  FUNC_8(&VAR_11->submit, VAR_7, sizeof(*VAR_7));
  FUNC_7(&VAR_11->list, &VAR_13->link_list);
 } else if (VAR_7->sqe->flags & VAR_3) {
  VAR_11->flags |= VAR_4;

  FUNC_8(&VAR_11->submit, VAR_7, sizeof(*VAR_7));
  FUNC_0(&VAR_11->link_list);
  *VAR_9 = VAR_11;
 } else {
  FUNC_4(VAR_6, VAR_11, VAR_7);
 }
}
