
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct moxa_port* driver_data; } ;
struct TYPE_2__ {int open_wait; } ;
struct moxa_port {TYPE_1__ port; } ;
struct ktermios {int c_cflag; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (struct tty_struct*,struct ktermios*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct tty_struct *VAR_1,
  struct ktermios *VAR_2)
{
 struct moxa_port *VAR_3 = VAR_1->driver_data;

 if (VAR_3 == ((void*)0))
  return;
 FUNC_1(VAR_1, VAR_2);
 if (!(VAR_2->c_cflag & VAR_0) && FUNC_0(VAR_1))
  FUNC_2(&VAR_3->port.open_wait);
}
