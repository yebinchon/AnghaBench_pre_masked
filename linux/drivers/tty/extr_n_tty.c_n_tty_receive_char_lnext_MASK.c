
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct n_tty_data* disc_data; } ;
struct n_tty_data {scalar_t__ lnext; } ;


 scalar_t__ FUNC_0 (struct tty_struct*) ;
 scalar_t__ FUNC_1 (struct tty_struct*) ;
 scalar_t__ FUNC_2 (struct tty_struct*) ;
 char VAR_0 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct tty_struct*,unsigned char) ;
 int FUNC_5 (struct tty_struct*,unsigned char,char) ;
 unsigned char FUNC_6 (unsigned char) ;

__attribute__((used)) static void
FUNC_7(struct tty_struct *VAR_1, unsigned char VAR_2, char VAR_3)
{
 struct n_tty_data *VAR_4 = VAR_1->disc_data;

 VAR_4->lnext = 0;
 if (FUNC_3(VAR_3 == VAR_0)) {
  if (FUNC_0(VAR_1))
   VAR_2 &= 0x7f;
  if (FUNC_1(VAR_1) && FUNC_2(VAR_1))
   VAR_2 = FUNC_6(VAR_2);
  FUNC_4(VAR_1, VAR_2);
 } else
  FUNC_5(VAR_1, VAR_2, VAR_3);
}
