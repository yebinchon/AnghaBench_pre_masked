
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct watchdog_device {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* ioctl ) (struct watchdog_device*,unsigned int,unsigned long) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct watchdog_device*,unsigned int,unsigned long) ;

__attribute__((used)) static int FUNC_1(struct watchdog_device *VAR_1, unsigned int VAR_2,
       unsigned long VAR_3)
{
 if (!VAR_1->ops->ioctl)
  return -VAR_0;

 return VAR_1->ops->ioctl(VAR_1, VAR_2, VAR_3);
}
