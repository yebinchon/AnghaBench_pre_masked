
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct gsm_mux {int tty; int output; } ;


 int VAR_0 ;
 int FUNC_0 (struct gsm_mux*) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_1 (struct gsm_mux*) ;
 int FUNC_2 (struct tty_struct*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,unsigned int,int *) ;

__attribute__((used)) static int FUNC_5(struct tty_struct *VAR_3, struct gsm_mux *VAR_4)
{
 unsigned int VAR_5;
 int VAR_6, VAR_7;

 VAR_4->tty = FUNC_2(VAR_3);
 VAR_4->output = VAR_2;
 VAR_6 = FUNC_0(VAR_4);
 if (VAR_6 != 0)
  FUNC_3(VAR_4->tty);
 else {


  VAR_5 = FUNC_1(VAR_4);
  for (VAR_7 = 1; VAR_7 < VAR_0; VAR_7++)
   FUNC_4(VAR_1, VAR_5 + VAR_7, ((void*)0));
 }
 return VAR_6;
}
