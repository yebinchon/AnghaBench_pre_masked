
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sqe_submit {scalar_t__ needs_fixed_file; TYPE_1__* sqe; int sequence; } ;
struct io_submit_state {int dummy; } ;
struct io_ring_ctx {unsigned int nr_user_files; int * user_files; } ;
struct io_kiocb {int file; int flags; int sequence; } ;
struct TYPE_2__ {int fd; int flags; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 void* FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct io_submit_state*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct io_ring_ctx *VAR_5, const struct sqe_submit *VAR_6,
      struct io_submit_state *VAR_7, struct io_kiocb *VAR_8)
{
 unsigned VAR_9;
 int VAR_10;

 VAR_9 = FUNC_0(VAR_6->sqe->flags);
 VAR_10 = FUNC_0(VAR_6->sqe->fd);

 if (VAR_9 & VAR_2)
  VAR_8->flags |= VAR_4;





 VAR_8->sequence = VAR_6->sequence;

 if (!FUNC_2(VAR_6->sqe))
  return 0;

 if (VAR_9 & VAR_1) {
  if (FUNC_3(!VAR_5->user_files ||
      (unsigned) VAR_10 >= VAR_5->nr_user_files))
   return -VAR_0;
  VAR_8->file = VAR_5->user_files[VAR_10];
  VAR_8->flags |= VAR_3;
 } else {
  if (VAR_6->needs_fixed_file)
   return -VAR_0;
  VAR_8->file = FUNC_1(VAR_7, VAR_10);
  if (FUNC_3(!VAR_8->file))
   return -VAR_0;
 }

 return 0;
}
