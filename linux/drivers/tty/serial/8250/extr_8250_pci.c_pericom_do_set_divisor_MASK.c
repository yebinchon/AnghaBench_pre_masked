
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct uart_port*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (struct uart_port*,int) ;
 int FUNC_2 (struct uart_port*,int,int) ;

__attribute__((used)) static void
FUNC_3(struct uart_port *VAR_3, unsigned int VAR_4,
          unsigned int VAR_5, unsigned int VAR_6)
{
 int VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;

 for (VAR_7 = 5 ; VAR_7 <= 15 ; VAR_7++) {
  VAR_9 = 921600 * 16 / VAR_7;
  VAR_10 = VAR_9 / 50;

  if ((VAR_4 < VAR_9 + VAR_10) &&
   (VAR_4 > VAR_9 - VAR_10)) {

   VAR_8 = FUNC_1(VAR_3, VAR_2);
   FUNC_2(VAR_3, VAR_2, VAR_8 | 0x80);

   FUNC_2(VAR_3, VAR_0, 1);
   FUNC_2(VAR_3, VAR_1, 0);
   FUNC_2(VAR_3, 2, 16 - VAR_7);
   FUNC_2(VAR_3, VAR_2, VAR_8);
   return;
  } else if (VAR_4 > VAR_9) {
   break;
  }
 }
 FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);
}
