
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_8250_port {int capabilities; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 unsigned char VAR_7 ;
 int FUNC_0 (struct uart_8250_port*) ;
 int FUNC_1 (struct uart_8250_port*) ;
 unsigned char FUNC_2 (struct uart_8250_port*,int ) ;
 int FUNC_3 (struct uart_8250_port*,int ,unsigned char) ;

__attribute__((used)) static void FUNC_4(struct uart_8250_port *VAR_8, int VAR_9)
{
 unsigned char VAR_10 = 0, VAR_11 = 0;

 FUNC_0(VAR_8);

 if (VAR_8->capabilities & VAR_1) {
  if (VAR_8->capabilities & VAR_0) {
   VAR_10 = FUNC_2(VAR_8, VAR_6);
   VAR_11 = FUNC_2(VAR_8, VAR_2);
   FUNC_3(VAR_8, VAR_6, VAR_7);
   FUNC_3(VAR_8, VAR_2, VAR_3);
   FUNC_3(VAR_8, VAR_6, 0);
  }
  FUNC_3(VAR_8, VAR_4, VAR_9 ? VAR_5 : 0);
  if (VAR_8->capabilities & VAR_0) {
   FUNC_3(VAR_8, VAR_6, VAR_7);
   FUNC_3(VAR_8, VAR_2, VAR_11);
   FUNC_3(VAR_8, VAR_6, VAR_10);
  }
 }

 FUNC_1(VAR_8);
}
