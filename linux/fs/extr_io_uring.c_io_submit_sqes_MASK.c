
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sqe_submit {int has_user; int needs_lock; int needs_fixed_file; TYPE_1__* sqe; int sequence; } ;
struct io_submit_state {int dummy; } ;
struct io_ring_ctx {int dummy; } ;
struct io_kiocb {int flags; int submit; int sequence; int refs; } ;
struct TYPE_2__ {int flags; int user_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct io_ring_ctx*,int ,int ) ;
 struct io_kiocb* FUNC_1 (struct io_ring_ctx*,int *) ;
 int FUNC_2 (struct io_ring_ctx*,struct sqe_submit*) ;
 int FUNC_3 (struct io_ring_ctx*,struct io_kiocb*,int *,struct io_kiocb*) ;
 int FUNC_4 (struct io_ring_ctx*,struct sqe_submit*,struct io_submit_state*,struct io_kiocb**) ;
 int FUNC_5 (struct io_submit_state*) ;
 int FUNC_6 (struct io_submit_state*,struct io_ring_ctx*,unsigned int) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct io_ring_ctx *VAR_6, unsigned int VAR_7,
     bool VAR_8, bool VAR_9)
{
 struct io_submit_state VAR_10, *VAR_11 = ((void*)0);
 struct io_kiocb *VAR_12 = ((void*)0);
 struct io_kiocb *VAR_13 = ((void*)0);
 bool VAR_14 = 0;
 int VAR_15, VAR_16 = 0;

 if (VAR_7 > VAR_3) {
  FUNC_6(&VAR_10, VAR_6, VAR_7);
  VAR_11 = &VAR_10;
 }

 for (VAR_15 = 0; VAR_15 < VAR_7; VAR_15++) {
  struct sqe_submit VAR_17;

  if (!FUNC_2(VAR_6, &VAR_17))
   break;





  if (!VAR_14 && VAR_12) {
   FUNC_3(VAR_6, VAR_12, &VAR_12->submit, VAR_13);
   VAR_12 = ((void*)0);
   VAR_13 = ((void*)0);
  }
  VAR_14 = (VAR_17.sqe->flags & VAR_2) != 0;

  if (VAR_12 && (VAR_17.sqe->flags & VAR_1)) {
   if (!VAR_13) {
    VAR_13 = FUNC_1(VAR_6, ((void*)0));
    if (FUNC_8(!VAR_13))
     goto out;
    VAR_13->flags |= (VAR_4 | VAR_5);
    FUNC_7(&VAR_13->refs);
   }
   VAR_13->sequence = VAR_17.sequence;
  }

out:
  if (FUNC_8(VAR_9)) {
   FUNC_0(VAR_6, VAR_17.sqe->user_data,
      -VAR_0);
  } else {
   VAR_17.has_user = VAR_8;
   VAR_17.needs_lock = 1;
   VAR_17.needs_fixed_file = 1;
   FUNC_4(VAR_6, &VAR_17, VAR_11, &VAR_12);
   VAR_16++;
  }
 }

 if (VAR_12)
  FUNC_3(VAR_6, VAR_12, &VAR_12->submit, VAR_13);
 if (VAR_11)
  FUNC_5(&VAR_10);

 return VAR_16;
}
