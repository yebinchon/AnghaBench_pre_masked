
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct uart_txx9_port {TYPE_1__ port; } ;
struct uart_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct uart_txx9_port*,int ) ;
 int FUNC_1 (struct uart_txx9_port*,int ,int) ;
 int FUNC_2 (struct uart_txx9_port*,int ) ;
 int FUNC_3 (struct uart_txx9_port*,int ,int) ;
 struct uart_txx9_port* FUNC_4 (struct uart_port*) ;
 int FUNC_5 (struct uart_port*,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct uart_port *VAR_13)
{
 struct uart_txx9_port *VAR_14 = FUNC_4(VAR_13);
 unsigned int VAR_15 = 10000;

 FUNC_1(VAR_14, VAR_1, VAR_3);


 FUNC_6(1);
 while ((FUNC_0(VAR_14, VAR_1) & VAR_3) && --VAR_15)
  FUNC_6(1);

 FUNC_3(VAR_14, VAR_1,
  VAR_4 | VAR_2);

 FUNC_1(VAR_14, VAR_7,
  VAR_10 | VAR_11 |
  ((VAR_14->port.flags & VAR_12) ?
   VAR_9 : VAR_8));
 FUNC_2(VAR_14, FUNC_5(VAR_13, 9600));
 FUNC_1(VAR_14, VAR_5, VAR_6 );
 FUNC_1(VAR_14, VAR_0, 0);
}
