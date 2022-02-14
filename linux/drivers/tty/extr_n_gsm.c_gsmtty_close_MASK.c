
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct gsm_dlci* driver_data; } ;
struct gsm_dlci {scalar_t__ state; int port; int mutex; } ;
struct file {int dummy; } ;


 scalar_t__ FUNC_0 (struct tty_struct*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct gsm_dlci*) ;
 int FUNC_2 (struct gsm_dlci*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct tty_struct*) ;
 scalar_t__ FUNC_6 (int *,struct tty_struct*,struct file*) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;

__attribute__((used)) static void FUNC_10(struct tty_struct *VAR_1, struct file *VAR_2)
{
 struct gsm_dlci *VAR_3 = VAR_1->driver_data;

 if (VAR_3 == ((void*)0))
  return;
 if (VAR_3->state == VAR_0)
  return;
 FUNC_3(&VAR_3->mutex);
 FUNC_1(VAR_3);
 FUNC_4(&VAR_3->mutex);
 if (FUNC_6(&VAR_3->port, VAR_1, VAR_2) == 0)
  return;
 FUNC_2(VAR_3);
 if (FUNC_7(&VAR_3->port) && FUNC_0(VAR_1))
  FUNC_8(&VAR_3->port);
 FUNC_5(&VAR_3->port, VAR_1);
 FUNC_9(&VAR_3->port, ((void*)0));
 return;
}
