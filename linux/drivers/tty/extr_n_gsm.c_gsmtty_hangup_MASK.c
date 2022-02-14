
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct gsm_dlci* driver_data; } ;
struct gsm_dlci {scalar_t__ state; int port; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct gsm_dlci*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_1)
{
 struct gsm_dlci *VAR_2 = VAR_1->driver_data;
 if (VAR_2->state == VAR_0)
  return;
 FUNC_1(&VAR_2->port);
 FUNC_0(VAR_2);
}
