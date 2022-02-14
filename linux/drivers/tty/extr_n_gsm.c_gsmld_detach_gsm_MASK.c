
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct gsm_mux {struct tty_struct* tty; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct gsm_mux*) ;
 int VAR_1 ;
 unsigned int FUNC_2 (struct gsm_mux*) ;
 int FUNC_3 (struct tty_struct*) ;
 int FUNC_4 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct tty_struct *VAR_2, struct gsm_mux *VAR_3)
{
 unsigned int VAR_4 = FUNC_2(VAR_3);
 int VAR_5;

 FUNC_0(VAR_2 != VAR_3->tty);
 for (VAR_5 = 1; VAR_5 < VAR_0; VAR_5++)
  FUNC_4(VAR_1, VAR_4 + VAR_5);
 FUNC_1(VAR_3);
 FUNC_3(VAR_3->tty);
 VAR_3->tty = ((void*)0);
}
