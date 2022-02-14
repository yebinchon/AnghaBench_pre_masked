
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_8250_port {int dummy; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 unsigned char FUNC_1 (struct uart_8250_port*) ;
 int FUNC_2 (struct uart_8250_port*,unsigned char) ;
 unsigned short FUNC_3 (struct uart_8250_port*) ;
 int FUNC_4 (struct uart_8250_port*,unsigned short) ;
 unsigned char FUNC_5 (struct uart_8250_port*,int ) ;
 int FUNC_6 (struct uart_8250_port*,int ,unsigned char) ;

__attribute__((used)) static int FUNC_7(struct uart_8250_port *VAR_11)
{
 unsigned char VAR_12, VAR_13, VAR_14;
 unsigned short VAR_15;
 int VAR_16;

 VAR_14 = FUNC_5(VAR_11, VAR_4);
 FUNC_6(VAR_11, VAR_4, 0);
 VAR_12 = FUNC_5(VAR_11, VAR_0);
 VAR_13 = FUNC_1(VAR_11);
 FUNC_6(VAR_11, VAR_0, VAR_3 |
      VAR_1 | VAR_2);
 FUNC_2(VAR_11, VAR_8);
 FUNC_6(VAR_11, VAR_4, VAR_5);
 VAR_15 = FUNC_3(VAR_11);
 FUNC_4(VAR_11, 0x0001);
 FUNC_6(VAR_11, VAR_4, 0x03);
 for (VAR_16 = 0; VAR_16 < 256; VAR_16++)
  FUNC_6(VAR_11, VAR_10, VAR_16);
 FUNC_0(20);
 for (VAR_16 = 0; (FUNC_5(VAR_11, VAR_6) & VAR_7) &&
      (VAR_16 < 256); VAR_16++)
  FUNC_5(VAR_11, VAR_9);
 FUNC_6(VAR_11, VAR_0, VAR_12);
 FUNC_2(VAR_11, VAR_13);
 FUNC_6(VAR_11, VAR_4, VAR_5);
 FUNC_4(VAR_11, VAR_15);
 FUNC_6(VAR_11, VAR_4, VAR_14);

 return VAR_16;
}
