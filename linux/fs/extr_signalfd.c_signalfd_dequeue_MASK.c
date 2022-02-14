
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct signalfd_ctx {int sigmask; } ;
typedef int ssize_t ;
typedef int kernel_siginfo_t ;
struct TYPE_7__ {TYPE_1__* sighand; } ;
struct TYPE_6__ {int signalfd_wqh; int siglock; } ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 TYPE_2__* VAR_4 ;
 int FUNC_3 (TYPE_2__*,int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_5 ;

__attribute__((used)) static ssize_t FUNC_10(struct signalfd_ctx *VAR_6, kernel_siginfo_t *VAR_7,
    int VAR_8)
{
 ssize_t VAR_9;
 FUNC_0(VAR_5, VAR_4);

 FUNC_8(&VAR_4->sighand->siglock);
 VAR_9 = FUNC_3(VAR_4, &VAR_6->sigmask, VAR_7);
 switch (VAR_9) {
 case 0:
  if (!VAR_8)
   break;
  VAR_9 = -VAR_0;

 default:
  FUNC_9(&VAR_4->sighand->siglock);
  return VAR_9;
 }

 FUNC_2(&VAR_4->sighand->signalfd_wqh, &VAR_5);
 for (;;) {
  FUNC_6(VAR_2);
  VAR_9 = FUNC_3(VAR_4, &VAR_6->sigmask, VAR_7);
  if (VAR_9 != 0)
   break;
  if (FUNC_7(VAR_4)) {
   VAR_9 = -VAR_1;
   break;
  }
  FUNC_9(&VAR_4->sighand->siglock);
  FUNC_5();
  FUNC_8(&VAR_4->sighand->siglock);
 }
 FUNC_9(&VAR_4->sighand->siglock);

 FUNC_4(&VAR_4->sighand->signalfd_wqh, &VAR_5);
 FUNC_1(VAR_3);

 return VAR_9;
}
