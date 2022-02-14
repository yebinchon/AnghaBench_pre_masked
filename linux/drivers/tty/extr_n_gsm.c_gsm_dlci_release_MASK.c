
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct gsm_dlci {int state; int port; int mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct gsm_dlci*) ;
 int FUNC_1 (struct gsm_dlci*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tty_struct*) ;
 int FUNC_5 (struct tty_struct*) ;
 struct tty_struct* FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static void FUNC_8(struct gsm_dlci *VAR_1)
{
 struct tty_struct *VAR_2 = FUNC_6(&VAR_1->port);
 if (VAR_2) {
  FUNC_2(&VAR_1->mutex);
  FUNC_1(VAR_1);
  FUNC_3(&VAR_1->mutex);

  FUNC_4(VAR_2);

  FUNC_7(&VAR_1->port, ((void*)0));
  FUNC_5(VAR_2);
 }
 VAR_1->state = VAR_0;
 FUNC_0(VAR_1);
}
