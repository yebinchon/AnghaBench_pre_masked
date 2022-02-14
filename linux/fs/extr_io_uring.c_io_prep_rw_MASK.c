
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sqe_submit {struct io_uring_sqe* sqe; } ;
struct kiocb {int ki_flags; unsigned int ki_ioprio; int ki_complete; TYPE_2__* ki_filp; int ki_hint; void* ki_pos; } ;
struct io_uring_sqe {int rw_flags; int ioprio; int off; } ;
struct io_ring_ctx {int flags; } ;
struct io_kiocb {scalar_t__ result; int flags; TYPE_3__* file; struct kiocb rw; struct io_ring_ctx* ctx; } ;
struct TYPE_10__ {int i_mode; } ;
struct TYPE_9__ {int f_flags; } ;
struct TYPE_8__ {TYPE_1__* f_op; } ;
struct TYPE_7__ {int iopoll; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_5__* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*) ;
 unsigned int FUNC_4 () ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct kiocb*,void*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct io_kiocb *VAR_14, const struct sqe_submit *VAR_15,
        bool VAR_16)
{
 const struct io_uring_sqe *VAR_17 = VAR_15->sqe;
 struct io_ring_ctx *VAR_18 = VAR_14->ctx;
 struct kiocb *VAR_19 = &VAR_14->rw;
 unsigned VAR_20;
 int VAR_21;

 if (!VAR_14->file)
  return -VAR_1;

 if (FUNC_1(FUNC_2(VAR_14->file)->i_mode))
  VAR_14->flags |= VAR_9;





 if (VAR_16 && !FUNC_5(VAR_14->file)) {
  VAR_14->flags |= VAR_10;
  return -VAR_0;
 }

 VAR_19->ki_pos = FUNC_0(VAR_17->off);
 VAR_19->ki_flags = FUNC_6(VAR_19->ki_filp);
 VAR_19->ki_hint = FUNC_8(FUNC_3(VAR_19->ki_filp));

 VAR_20 = FUNC_0(VAR_17->ioprio);
 if (VAR_20) {
  VAR_21 = FUNC_7(VAR_20);
  if (VAR_21)
   return VAR_21;

  VAR_19->ki_ioprio = VAR_20;
 } else
  VAR_19->ki_ioprio = FUNC_4();

 VAR_21 = FUNC_9(VAR_19, FUNC_0(VAR_17->rw_flags));
 if (FUNC_10(VAR_21))
  return VAR_21;


 if ((VAR_19->ki_flags & VAR_6) ||
     (VAR_14->file->f_flags & VAR_8))
  VAR_14->flags |= VAR_11;

 if (VAR_16)
  VAR_19->ki_flags |= VAR_6;

 if (VAR_18->flags & VAR_7) {
  if (!(VAR_19->ki_flags & VAR_4) ||
      !VAR_19->ki_filp->f_op->iopoll)
   return -VAR_3;

  VAR_19->ki_flags |= VAR_5;
  VAR_19->ki_complete = VAR_13;
  VAR_14->result = 0;
 } else {
  if (VAR_19->ki_flags & VAR_5)
   return -VAR_2;
  VAR_19->ki_complete = VAR_12;
 }
 return 0;
}
