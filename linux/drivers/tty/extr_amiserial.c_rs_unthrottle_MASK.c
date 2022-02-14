
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int name; struct serial_state* driver_data; } ;
struct serial_state {int MCR; scalar_t__ x_char; } ;


 scalar_t__ FUNC_0 (struct tty_struct*) ;
 scalar_t__ FUNC_1 (struct tty_struct*) ;
 int VAR_0 ;
 int FUNC_2 (struct tty_struct*) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (struct tty_struct*,int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct serial_state*,int ,char*) ;
 int FUNC_9 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_10(struct tty_struct * VAR_1)
{
 struct serial_state *VAR_2 = VAR_1->driver_data;
 unsigned long VAR_3;




 if (FUNC_8(VAR_2, VAR_1->name, "rs_unthrottle"))
  return;

 if (FUNC_1(VAR_1)) {
  if (VAR_2->x_char)
   VAR_2->x_char = 0;
  else
   FUNC_6(VAR_1, FUNC_2(VAR_1));
 }
 if (FUNC_0(VAR_1))
  VAR_2->MCR |= VAR_0;
 FUNC_4(VAR_3);
 FUNC_7(VAR_2->MCR);
 FUNC_3(VAR_3);
}
