
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct n_tty_data* disc_data; } ;
struct n_tty_data {int dummy; } ;


 scalar_t__ FUNC_0 (struct tty_struct*) ;
 scalar_t__ FUNC_1 (struct tty_struct*) ;
 scalar_t__ FUNC_2 (struct tty_struct*) ;
 int VAR_0 ;
 int FUNC_3 (int ,struct tty_struct*) ;
 int FUNC_4 (char,struct n_tty_data*) ;

__attribute__((used)) static void FUNC_5(struct tty_struct *VAR_1)
{
 struct n_tty_data *VAR_2 = VAR_1->disc_data;

 if (FUNC_1(VAR_1))
  return;
 if (FUNC_0(VAR_1)) {
  FUNC_3(VAR_0, VAR_1);
  return;
 }
 if (FUNC_2(VAR_1)) {
  FUNC_4('\377', VAR_2);
  FUNC_4('\0', VAR_2);
 }
 FUNC_4('\0', VAR_2);
}
