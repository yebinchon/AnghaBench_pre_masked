
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kiocb {int ki_pos; struct file* ki_filp; } ;
struct io_kiocb {int flags; struct kiocb rw; TYPE_1__* ctx; } ;
struct TYPE_4__ {int ra_pages; } ;
struct file {TYPE_2__ f_ra; } ;
struct async_list {size_t io_len; struct file* file; int io_start; } ;
struct TYPE_3__ {struct async_list* pending_async; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct async_list*,struct kiocb*) ;

__attribute__((used)) static void FUNC_1(int VAR_3, struct io_kiocb *VAR_4, size_t VAR_5)
{
 struct async_list *VAR_6 = &VAR_4->ctx->pending_async[VAR_3];
 struct kiocb *VAR_7 = &VAR_4->rw;
 struct file *VAR_8 = VAR_7->ki_filp;

 if (FUNC_0(VAR_6, VAR_7)) {
  unsigned long VAR_9;


  VAR_9 = VAR_8->f_ra.ra_pages << (VAR_0 + 3);
  if (!VAR_9)
   VAR_9 = VAR_2 << (VAR_0 + 3);


  if (VAR_6->io_len + VAR_5 <= VAR_9) {
   VAR_4->flags |= VAR_1;
   VAR_6->io_len += VAR_5;
  } else {
   VAR_6->file = ((void*)0);
  }
 }


 if (VAR_6->file != VAR_8) {
  VAR_6->io_start = VAR_7->ki_pos;
  VAR_6->io_len = VAR_5;
  VAR_6->file = VAR_8;
 }
}
