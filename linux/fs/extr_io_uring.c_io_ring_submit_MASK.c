
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sqe_submit {int has_user; int needs_lock; int needs_fixed_file; int sequence; TYPE_1__* sqe; } ;
struct io_submit_state {int dummy; } ;
struct io_ring_ctx {int dummy; } ;
struct io_kiocb {int flags; int submit; int sequence; int refs; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct io_ring_ctx*) ;
 struct io_kiocb* FUNC_1 (struct io_ring_ctx*,int *) ;
 int FUNC_2 (struct io_ring_ctx*,struct sqe_submit*) ;
 int FUNC_3 (struct io_ring_ctx*,struct io_kiocb*,int *,struct io_kiocb*) ;
 int FUNC_4 (struct io_ring_ctx*,struct sqe_submit*,struct io_submit_state*,struct io_kiocb**) ;
 int FUNC_5 (struct io_submit_state*) ;
 int FUNC_6 (struct io_submit_state*,struct io_ring_ctx*,unsigned int) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct io_ring_ctx *VAR_5, unsigned int VAR_6)
{
 struct io_submit_state VAR_7, *VAR_8 = ((void*)0);
 struct io_kiocb *VAR_9 = ((void*)0);
 struct io_kiocb *VAR_10 = ((void*)0);
 bool VAR_11 = 0;
 int VAR_12, VAR_13 = 0;

 if (VAR_6 > VAR_2) {
  FUNC_6(&VAR_7, VAR_5, VAR_6);
  VAR_8 = &VAR_7;
 }

 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
  struct sqe_submit VAR_14;

  if (!FUNC_2(VAR_5, &VAR_14))
   break;





  if (!VAR_11 && VAR_9) {
   FUNC_3(VAR_5, VAR_9, &VAR_9->submit, VAR_10);
   VAR_9 = ((void*)0);
   VAR_10 = ((void*)0);
  }
  VAR_11 = (VAR_14.sqe->flags & VAR_1) != 0;

  if (VAR_9 && (VAR_14.sqe->flags & VAR_0)) {
   if (!VAR_10) {
    VAR_10 = FUNC_1(VAR_5, ((void*)0));
    if (FUNC_8(!VAR_10))
     goto out;
    VAR_10->flags |= (VAR_3 | VAR_4);
    FUNC_7(&VAR_10->refs);
   }
   VAR_10->sequence = VAR_14.sequence;
  }

out:
  VAR_14.has_user = 1;
  VAR_14.needs_lock = 0;
  VAR_14.needs_fixed_file = 0;
  VAR_13++;
  FUNC_4(VAR_5, &VAR_14, VAR_8, &VAR_9);
 }

 if (VAR_9)
  FUNC_3(VAR_5, VAR_9, &VAR_9->submit, VAR_10);
 if (VAR_8)
  FUNC_5(VAR_8);

 FUNC_0(VAR_5);

 return VAR_13;
}
