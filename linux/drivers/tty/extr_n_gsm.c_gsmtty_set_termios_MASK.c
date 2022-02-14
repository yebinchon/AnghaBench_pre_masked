
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int termios; struct gsm_dlci* driver_data; } ;
struct ktermios {int dummy; } ;
struct gsm_dlci {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,struct ktermios*) ;

__attribute__((used)) static void FUNC_1(struct tty_struct *VAR_1, struct ktermios *VAR_2)
{
 struct gsm_dlci *VAR_3 = VAR_1->driver_data;
 if (VAR_3->state == VAR_0)
  return;





 FUNC_0(&VAR_1->termios, VAR_2);
}
