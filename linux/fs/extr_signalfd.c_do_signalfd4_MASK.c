
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct signalfd_ctx {void* sigmask; } ;
struct fd {TYPE_1__* file; } ;
typedef void* sigset_t ;
struct TYPE_6__ {TYPE_2__* sighand; } ;
struct TYPE_5__ {int signalfd_wqh; int siglock; } ;
struct TYPE_4__ {int * f_op; struct signalfd_ctx* private_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (char*,int *,struct signalfd_ctx*,int) ;
 TYPE_3__* VAR_11 ;
 struct fd FUNC_2 (int) ;
 int FUNC_3 (struct fd) ;
 int FUNC_4 (struct signalfd_ctx*) ;
 struct signalfd_ctx* FUNC_5 (int,int ) ;
 int FUNC_6 (void**,int) ;
 int FUNC_7 (int ) ;
 int VAR_12 ;
 int FUNC_8 (void**) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(int VAR_13, sigset_t *VAR_14, int VAR_15)
{
 struct signalfd_ctx *VAR_16;


 FUNC_0(VAR_7 != VAR_4);
 FUNC_0(VAR_8 != VAR_5);

 if (VAR_15 & ~(VAR_7 | VAR_8))
  return -VAR_1;

 FUNC_6(VAR_14, FUNC_7(VAR_9) | FUNC_7(VAR_10));
 FUNC_8(VAR_14);

 if (VAR_13 == -1) {
  VAR_16 = FUNC_5(sizeof(*VAR_16), VAR_3);
  if (!VAR_16)
   return -VAR_2;

  VAR_16->sigmask = *VAR_14;





  VAR_13 = FUNC_1("[signalfd]", &VAR_12, VAR_16,
           VAR_6 | (VAR_15 & (VAR_4 | VAR_5)));
  if (VAR_13 < 0)
   FUNC_4(VAR_16);
 } else {
  struct fd VAR_17 = FUNC_2(VAR_13);
  if (!VAR_17.file)
   return -VAR_0;
  VAR_16 = VAR_17.file->private_data;
  if (VAR_17.file->f_op != &VAR_12) {
   FUNC_3(VAR_17);
   return -VAR_1;
  }
  FUNC_9(&VAR_11->sighand->siglock);
  VAR_16->sigmask = *VAR_14;
  FUNC_10(&VAR_11->sighand->siglock);

  FUNC_11(&VAR_11->sighand->signalfd_wqh);
  FUNC_3(VAR_17);
 }

 return VAR_13;
}
