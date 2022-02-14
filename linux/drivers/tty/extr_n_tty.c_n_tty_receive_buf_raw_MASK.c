
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct n_tty_data* disc_data; } ;
struct n_tty_data {int dummy; } ;


 char VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct tty_struct*,int ,char) ;
 int FUNC_2 (int ,struct n_tty_data*) ;

__attribute__((used)) static void
FUNC_3(struct tty_struct *VAR_1, const unsigned char *VAR_2,
        char *VAR_3, int VAR_4)
{
 struct n_tty_data *VAR_5 = VAR_1->disc_data;
 char VAR_6 = VAR_0;

 while (VAR_4--) {
  if (VAR_3)
   VAR_6 = *VAR_3++;
  if (FUNC_0(VAR_6 == VAR_0))
   FUNC_2(*VAR_2++, VAR_5);
  else
   FUNC_1(VAR_1, *VAR_2++, VAR_6);
 }
}
