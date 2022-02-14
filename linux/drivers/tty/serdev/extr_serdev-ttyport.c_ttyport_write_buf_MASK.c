
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {TYPE_1__* ops; int flags; } ;
struct serport {struct tty_struct* tty; int flags; } ;
struct serdev_controller {int dummy; } ;
struct TYPE_2__ {int (* write ) (struct tty_struct*,unsigned char const*,size_t) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct serport* FUNC_0 (struct serdev_controller*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct tty_struct*,unsigned char const*,size_t) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct serdev_controller *VAR_2, const unsigned char *VAR_3, size_t VAR_4)
{
 struct serport *VAR_5 = FUNC_0(VAR_2);
 struct tty_struct *VAR_6 = VAR_5->tty;

 if (!FUNC_3(VAR_0, &VAR_5->flags))
  return 0;

 FUNC_1(VAR_1, &VAR_6->flags);
 return VAR_6->ops->write(VAR_5->tty, VAR_3, VAR_4);
}
