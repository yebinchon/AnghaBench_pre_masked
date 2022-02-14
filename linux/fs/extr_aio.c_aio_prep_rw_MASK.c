
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kiocb {int ki_flags; int ki_ioprio; int ki_filp; int ki_hint; int ki_pos; int * private; int ki_complete; } ;
struct iocb {int aio_flags; int aio_rw_flags; int aio_reqprio; int aio_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct kiocb*,int ) ;
 int FUNC_6 (char*,int) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct kiocb *VAR_5, const struct iocb *VAR_6)
{
 int VAR_7;

 VAR_5->ki_complete = VAR_4;
 VAR_5->private = ((void*)0);
 VAR_5->ki_pos = VAR_6->aio_offset;
 VAR_5->ki_flags = FUNC_2(VAR_5->ki_filp);
 if (VAR_6->aio_flags & VAR_2)
  VAR_5->ki_flags |= VAR_0;
 VAR_5->ki_hint = FUNC_4(FUNC_0(VAR_5->ki_filp));
 if (VAR_6->aio_flags & VAR_1) {





  VAR_7 = FUNC_3(VAR_6->aio_reqprio);
  if (VAR_7) {
   FUNC_6("aio ioprio check cap error: %d\n", VAR_7);
   return VAR_7;
  }

  VAR_5->ki_ioprio = VAR_6->aio_reqprio;
 } else
  VAR_5->ki_ioprio = FUNC_1();

 VAR_7 = FUNC_5(VAR_5, VAR_6->aio_rw_flags);
 if (FUNC_7(VAR_7))
  return VAR_7;

 VAR_5->ki_flags &= ~VAR_3;
 return 0;
}
