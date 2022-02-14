
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hso_tiocmget {struct hso_tiocmget* serial_state_notification; int * urb; } ;
struct hso_serial {struct hso_tiocmget* tiocmget; } ;


 int FUNC_0 (struct hso_tiocmget*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct hso_serial *VAR_0)
{
 struct hso_tiocmget *VAR_1;
 if (!VAR_0)
  return;
 VAR_1 = VAR_0->tiocmget;
 if (VAR_1) {
  FUNC_1(VAR_1->urb);
  VAR_1->urb = ((void*)0);
  VAR_0->tiocmget = ((void*)0);
  FUNC_0(VAR_1->serial_state_notification);
  VAR_1->serial_state_notification = ((void*)0);
  FUNC_0(VAR_1);
 }
}
