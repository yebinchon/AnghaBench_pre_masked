
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {scalar_t__ tv_sec; } ;
struct sigaction {int sa_mask; scalar_t__ sa_flags; int sa_handler; } ;
struct loopback_test {int poll_count; TYPE_1__* fds; struct timespec poll_timeout; } ;
typedef int sigset_t ;
struct TYPE_2__ {int revents; int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_4 ;
 int FUNC_1 (struct loopback_test*) ;
 int FUNC_2 (TYPE_1__*,int,struct timespec*,int *) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,struct sigaction*,int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *,int *) ;
 int VAR_5 ;
 int FUNC_8 (struct loopback_test*) ;

__attribute__((used)) static int FUNC_9(struct loopback_test *VAR_6)
{
 int VAR_7 = 0;
 char VAR_8;
 int VAR_9;
 int VAR_10;
 struct timespec *VAR_11 = ((void*)0);
 struct sigaction VAR_12;
 sigset_t VAR_13, VAR_14;

 FUNC_6(&VAR_14);
 FUNC_6(&VAR_13);
 FUNC_5(&VAR_14, VAR_1);
 FUNC_7(VAR_2, &VAR_14, &VAR_13);

 VAR_12.sa_handler = VAR_4;
 VAR_12.sa_flags = 0;
 FUNC_6(&VAR_12.sa_mask);
 if (FUNC_4(VAR_1, &VAR_12, ((void*)0)) == -1) {
  FUNC_0(VAR_5, "sigaction error\n");
  return -1;
 }

 if (VAR_6->poll_timeout.tv_sec != 0)
  VAR_11 = &VAR_6->poll_timeout;

 while (1) {

  VAR_9 = FUNC_2(VAR_6->fds, VAR_6->poll_count, VAR_11, &VAR_13);
  if (VAR_9 <= 0) {
   FUNC_8(VAR_6);
   FUNC_0(VAR_5, "Poll exit with errno %d\n", VAR_3);
   return -1;
  }

  for (VAR_10 = 0; VAR_10 < VAR_6->poll_count; VAR_10++) {
   if (VAR_6->fds[VAR_10].revents & VAR_0) {

    FUNC_3(VAR_6->fds[VAR_10].fd, &VAR_8, 1);
    VAR_7++;
   }
  }

  if (VAR_7 == VAR_6->poll_count)
   break;
 }

 if (!FUNC_1(VAR_6)) {
  FUNC_0(VAR_5, "Iteration count did not finish!\n");
  return -1;
 }

 return 0;
}
