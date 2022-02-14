
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct gsm_dlci* driver_data; } ;
struct gsm_dlci {scalar_t__ state; int throttled; int modem_tx; } ;


 scalar_t__ FUNC_0 (struct tty_struct*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct gsm_dlci*,int ) ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_2)
{
 struct gsm_dlci *VAR_3 = VAR_2->driver_data;
 if (VAR_3->state == VAR_0)
  return;
 if (FUNC_0(VAR_2))
  VAR_3->modem_tx &= ~VAR_1;
 VAR_3->throttled = 1;

 FUNC_1(VAR_3, 0);
}
