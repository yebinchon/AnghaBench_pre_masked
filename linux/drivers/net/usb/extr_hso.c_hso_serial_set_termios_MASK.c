
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ktermios {int c_cflag; } ;
struct tty_struct {struct ktermios termios; struct hso_serial* driver_data; } ;
struct TYPE_2__ {scalar_t__ count; } ;
struct hso_serial {int serial_lock; TYPE_1__ port; } ;


 int FUNC_0 (struct tty_struct*,struct ktermios*) ;
 int FUNC_1 (int,char*,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_0, struct ktermios *VAR_1)
{
 struct hso_serial *VAR_2 = VAR_0->driver_data;
 unsigned long VAR_3;

 if (VAR_1)
  FUNC_1(0x16, "Termios called with: cflags new[%d] - old[%d]\n",
   VAR_0->termios.c_cflag, VAR_1->c_cflag);


 FUNC_2(&VAR_2->serial_lock, VAR_3);
 if (VAR_2->port.count)
  FUNC_0(VAR_0, VAR_1);
 else
  VAR_0->termios = *VAR_1;
 FUNC_3(&VAR_2->serial_lock, VAR_3);


}
