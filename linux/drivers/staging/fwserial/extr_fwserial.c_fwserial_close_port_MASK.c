
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct tty_driver {int dummy; } ;
struct TYPE_2__ {int mutex; } ;
struct fwtty_port {int index; TYPE_1__ port; } ;


 struct tty_driver* VAR_0 ;
 int FUNC_0 (struct fwtty_port*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tty_struct*) ;
 struct tty_struct* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct tty_driver*,int ) ;
 int FUNC_6 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_7(struct tty_driver *VAR_1,
    struct fwtty_port *VAR_2)
{
 struct tty_struct *VAR_3;

 FUNC_1(&VAR_2->port.mutex);
 VAR_3 = FUNC_4(&VAR_2->port);
 if (VAR_3) {
  FUNC_6(VAR_3);
  FUNC_3(VAR_3);
 }
 FUNC_2(&VAR_2->port.mutex);

 if (VAR_1 == VAR_0)
  FUNC_5(VAR_1, FUNC_0(VAR_2));
 else
  FUNC_5(VAR_1, VAR_2->index);
}
