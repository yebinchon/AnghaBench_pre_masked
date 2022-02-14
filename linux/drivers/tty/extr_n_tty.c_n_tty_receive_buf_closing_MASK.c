
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;


 char VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct tty_struct*,int ) ;

__attribute__((used)) static void
FUNC_2(struct tty_struct *VAR_1, const unsigned char *VAR_2,
     char *VAR_3, int VAR_4)
{
 char VAR_5 = VAR_0;

 while (VAR_4--) {
  if (VAR_3)
   VAR_5 = *VAR_3++;
  if (FUNC_0(VAR_5 == VAR_0))
   FUNC_1(VAR_1, *VAR_2++);
 }
}
