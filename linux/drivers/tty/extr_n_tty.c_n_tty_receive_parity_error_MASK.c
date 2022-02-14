
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct n_tty_data* disc_data; } ;
struct n_tty_data {int dummy; } ;


 scalar_t__ FUNC_0 (struct tty_struct*) ;
 scalar_t__ FUNC_1 (struct tty_struct*) ;
 scalar_t__ FUNC_2 (struct tty_struct*) ;
 int FUNC_3 (unsigned char,struct n_tty_data*) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_0, unsigned char VAR_1)
{
 struct n_tty_data *VAR_2 = VAR_0->disc_data;

 if (FUNC_1(VAR_0)) {
  if (FUNC_0(VAR_0))
   return;
  if (FUNC_2(VAR_0)) {
   FUNC_3('\377', VAR_2);
   FUNC_3('\0', VAR_2);
   FUNC_3(VAR_1, VAR_2);
  } else
   FUNC_3('\0', VAR_2);
 } else
  FUNC_3(VAR_1, VAR_2);
}
