
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct sqe_submit {scalar_t__ index; scalar_t__ needs_lock; TYPE_1__* sqe; } ;
struct io_ring_ctx {scalar_t__ sq_entries; int flags; int uring_lock; } ;
struct io_kiocb {int result; void* user_data; } ;
struct TYPE_8__ {int buf_index; int opcode; int user_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct io_kiocb*,TYPE_1__*,int) ;
 int FUNC_2 (struct io_kiocb*) ;
 int FUNC_3 (struct io_kiocb*,void*) ;
 int FUNC_4 (struct io_kiocb*,TYPE_1__*) ;
 int FUNC_5 (struct io_kiocb*,TYPE_1__*) ;
 int FUNC_6 (struct io_kiocb*,struct sqe_submit const*,int) ;
 int FUNC_7 (struct io_kiocb*,TYPE_1__*,int) ;
 int FUNC_8 (struct io_kiocb*,TYPE_1__*,int) ;
 int FUNC_9 (struct io_kiocb*,TYPE_1__*,int) ;
 int FUNC_10 (struct io_kiocb*,TYPE_1__*) ;
 int FUNC_11 (struct io_kiocb*,struct sqe_submit const*,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static int FUNC_15(struct io_ring_ctx *VAR_3, struct io_kiocb *VAR_4,
      const struct sqe_submit *VAR_5, bool VAR_6)
{
 int VAR_7, VAR_8;

 VAR_4->user_data = FUNC_0(VAR_5->sqe->user_data);

 if (FUNC_14(VAR_5->index >= VAR_3->sq_entries))
  return -VAR_1;

 VAR_8 = FUNC_0(VAR_5->sqe->opcode);
 switch (VAR_8) {
 case 138:
  VAR_7 = FUNC_3(VAR_4, VAR_4->user_data);
  break;
 case 135:
  if (FUNC_14(VAR_5->sqe->buf_index))
   return -VAR_1;
  VAR_7 = FUNC_6(VAR_4, VAR_5, VAR_6);
  break;
 case 129:
  if (FUNC_14(VAR_5->sqe->buf_index))
   return -VAR_1;
  VAR_7 = FUNC_11(VAR_4, VAR_5, VAR_6);
  break;
 case 134:
  VAR_7 = FUNC_6(VAR_4, VAR_5, VAR_6);
  break;
 case 128:
  VAR_7 = FUNC_11(VAR_4, VAR_5, VAR_6);
  break;
 case 139:
  VAR_7 = FUNC_1(VAR_4, VAR_5->sqe, VAR_6);
  break;
 case 137:
  VAR_7 = FUNC_4(VAR_4, VAR_5->sqe);
  break;
 case 136:
  VAR_7 = FUNC_5(VAR_4, VAR_5->sqe);
  break;
 case 131:
  VAR_7 = FUNC_9(VAR_4, VAR_5->sqe, VAR_6);
  break;
 case 132:
  VAR_7 = FUNC_8(VAR_4, VAR_5->sqe, VAR_6);
  break;
 case 133:
  VAR_7 = FUNC_7(VAR_4, VAR_5->sqe, VAR_6);
  break;
 case 130:
  VAR_7 = FUNC_10(VAR_4, VAR_5->sqe);
  break;
 default:
  VAR_7 = -VAR_1;
  break;
 }

 if (VAR_7)
  return VAR_7;

 if (VAR_3->flags & VAR_2) {
  if (VAR_4->result == -VAR_0)
   return -VAR_0;


  if (VAR_5->needs_lock)
   FUNC_12(&VAR_3->uring_lock);
  FUNC_2(VAR_4);
  if (VAR_5->needs_lock)
   FUNC_13(&VAR_3->uring_lock);
 }

 return 0;
}
