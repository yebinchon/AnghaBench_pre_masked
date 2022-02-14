
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct hvc_struct* driver_data; } ;
struct hvc_struct {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* tiocmget ) (struct hvc_struct*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct hvc_struct*) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_1)
{
 struct hvc_struct *VAR_2 = VAR_1->driver_data;

 if (!VAR_2 || !VAR_2->ops->tiocmget)
  return -VAR_0;
 return VAR_2->ops->tiocmget(VAR_2);
}
