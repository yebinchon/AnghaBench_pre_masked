
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct uart_port*) ;
 int FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct uart_port*,int ) ;
 int FUNC_3 (struct uart_port*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;

__attribute__((used)) static int FUNC_7(struct uart_port *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4 = 0;
 int VAR_5;
 int VAR_6;
 unsigned long VAR_7;

 VAR_3 = FUNC_0(VAR_1);
 FUNC_6(VAR_7);

 FUNC_3(VAR_1, VAR_3 | VAR_0);

 while (!FUNC_4(FUNC_1(VAR_1)))
  VAR_4++;






 FUNC_3(VAR_1, VAR_3 & ~(VAR_0));

 VAR_6 = 1;
 FUNC_2(VAR_1, 0);







 VAR_5 = FUNC_1(VAR_1);
 while (((VAR_5 >> 20) & 0x3F) == VAR_6) {
  VAR_6++;
  FUNC_2(VAR_1, 0);
  VAR_5 = FUNC_1(VAR_1);
 }

 VAR_6--;

 FUNC_3(VAR_1, VAR_3);
 FUNC_5(VAR_7);

 if (VAR_6 == 0)
  VAR_6 = 1;

 return VAR_6;
}
