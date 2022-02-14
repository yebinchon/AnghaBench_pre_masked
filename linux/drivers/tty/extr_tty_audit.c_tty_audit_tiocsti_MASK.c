
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {scalar_t__ index; TYPE_1__* driver; } ;
typedef scalar_t__ dev_t ;
struct TYPE_2__ {int minor_start; int major; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,scalar_t__,char*,int) ;
 scalar_t__ FUNC_2 () ;

void FUNC_3(struct tty_struct *VAR_1, char VAR_2)
{
 dev_t VAR_3;

 VAR_3 = FUNC_0(VAR_1->driver->major, VAR_1->driver->minor_start) + VAR_1->index;
 if (FUNC_2())
  return;

 if (VAR_0)
  FUNC_1("ioctl=TIOCSTI", VAR_3, &VAR_2, 1);
}
