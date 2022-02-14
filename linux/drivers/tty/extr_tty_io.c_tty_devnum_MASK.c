
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {scalar_t__ index; TYPE_1__* driver; } ;
typedef scalar_t__ dev_t ;
struct TYPE_2__ {int minor_start; int major; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

dev_t FUNC_1(struct tty_struct *VAR_0)
{
 return FUNC_0(VAR_0->driver->major, VAR_0->driver->minor_start) + VAR_0->index;
}
