
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct loopback_test {int poll_count; TYPE_1__* fds; } ;
struct TYPE_2__ {int fd; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct loopback_test *VAR_0)
{
 int VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->poll_count; VAR_1++)
  FUNC_0(VAR_0->fds[VAR_1].fd);

 return 0;
}
