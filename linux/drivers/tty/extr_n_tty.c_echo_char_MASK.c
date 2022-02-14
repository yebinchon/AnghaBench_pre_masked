
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct n_tty_data* disc_data; } ;
struct n_tty_data {int dummy; } ;


 unsigned char VAR_0 ;
 scalar_t__ FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (unsigned char,struct n_tty_data*) ;
 scalar_t__ FUNC_2 (unsigned char) ;

__attribute__((used)) static void FUNC_3(unsigned char VAR_1, struct tty_struct *VAR_2)
{
 struct n_tty_data *VAR_3 = VAR_2->disc_data;

 if (VAR_1 == VAR_0) {
  FUNC_1(VAR_0, VAR_3);
  FUNC_1(VAR_0, VAR_3);
 } else {
  if (FUNC_0(VAR_2) && FUNC_2(VAR_1) && VAR_1 != '\t')
   FUNC_1(VAR_0, VAR_3);
  FUNC_1(VAR_1, VAR_3);
 }
}
