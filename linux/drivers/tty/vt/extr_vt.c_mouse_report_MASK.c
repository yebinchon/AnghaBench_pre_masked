
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int port; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,char*,char,char,char) ;

void FUNC_2(struct tty_struct *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 char VAR_4[8];

 FUNC_1(VAR_4, "\033[M%c%c%c", (char)(' ' + VAR_1), (char)('!' + VAR_2),
  (char)('!' + VAR_3));
 FUNC_0(VAR_4, VAR_0->port);
}
