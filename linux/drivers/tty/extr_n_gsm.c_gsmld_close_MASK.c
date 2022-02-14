
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct gsm_mux* disc_data; } ;
struct gsm_mux {int dummy; } ;


 int FUNC_0 (struct tty_struct*,struct gsm_mux*) ;
 int FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (struct gsm_mux*) ;

__attribute__((used)) static void FUNC_3(struct tty_struct *VAR_0)
{
 struct gsm_mux *VAR_1 = VAR_0->disc_data;

 FUNC_0(VAR_0, VAR_1);

 FUNC_1(VAR_0);

 FUNC_2(VAR_1);
}
