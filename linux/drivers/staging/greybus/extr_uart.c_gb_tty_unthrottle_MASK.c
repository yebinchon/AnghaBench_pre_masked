
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int c_cflag; } ;
struct tty_struct {TYPE_1__ termios; struct gb_tty* driver_data; } ;
struct gb_tty {int ctrlout; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct tty_struct*) ;
 unsigned char FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (struct tty_struct*,unsigned char*,int) ;
 int FUNC_3 (struct gb_tty*,int ) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_2)
{
 struct gb_tty *VAR_3 = VAR_2->driver_data;
 unsigned char VAR_4;
 int VAR_5;

 if (FUNC_0(VAR_2)) {
  VAR_4 = FUNC_1(VAR_2);
  VAR_5 = FUNC_2(VAR_2, &VAR_4, 1);
  if (VAR_5 <= 0)
   return;
 }

 if (VAR_2->termios.c_cflag & VAR_0) {
  VAR_3->ctrlout |= VAR_1;
  VAR_5 = FUNC_3(VAR_3, VAR_3->ctrlout);
 }
}
