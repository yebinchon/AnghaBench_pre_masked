
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* write_room ) (struct tty_struct*) ;} ;


 int FUNC_0 (struct tty_struct*) ;

int FUNC_1(struct tty_struct *VAR_0)
{
 if (VAR_0->ops->write_room)
  return VAR_0->ops->write_room(VAR_0);
 return 2048;
}
