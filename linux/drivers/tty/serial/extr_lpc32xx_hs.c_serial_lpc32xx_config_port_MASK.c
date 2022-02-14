
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int fifosize; int membase; int type; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct uart_port*) ;
 int FUNC_5 (struct uart_port*) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static void FUNC_7(struct uart_port *VAR_8, int VAR_9)
{
 int VAR_10;

 VAR_10 = FUNC_5(VAR_8);
 if (VAR_10 < 0)
  return;
 VAR_8->type = VAR_7;
 VAR_8->fifosize = 64;

 FUNC_4(VAR_8);

 FUNC_6((VAR_5 | VAR_1 |
  VAR_0 | VAR_2),
        FUNC_1(VAR_8->membase));

 FUNC_6(0xFF, FUNC_2(VAR_8->membase));



 FUNC_6(VAR_6 | VAR_3 |
        FUNC_3(20) | VAR_4,
        FUNC_0(VAR_8->membase));
}
