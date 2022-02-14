
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sqe_submit {TYPE_1__* sqe; } ;
struct io_ring_ctx {int dummy; } ;
struct io_kiocb {int dummy; } ;
struct TYPE_2__ {int user_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct io_ring_ctx*,struct io_kiocb*,struct sqe_submit*) ;
 int FUNC_1 (struct io_ring_ctx*,int ,int) ;
 int FUNC_2 (struct io_kiocb*) ;
 int FUNC_3 (struct io_ring_ctx*,struct io_kiocb*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct io_ring_ctx *VAR_1, struct io_kiocb *VAR_2,
   struct sqe_submit *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_3->sqe);
 if (VAR_4) {
  if (VAR_4 != -VAR_0) {
   FUNC_2(VAR_2);
   FUNC_1(VAR_1, VAR_3->sqe->user_data, VAR_4);
  }
  return 0;
 }

 return FUNC_0(VAR_1, VAR_2, VAR_3);
}
