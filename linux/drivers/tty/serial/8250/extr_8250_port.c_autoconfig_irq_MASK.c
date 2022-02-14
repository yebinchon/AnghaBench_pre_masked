
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int flags; int iobase; int irq; } ;
struct uart_8250_port {struct uart_port port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 unsigned char FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned char,unsigned int) ;
 int FUNC_4 (unsigned long) ;
 unsigned long FUNC_5 () ;
 unsigned char FUNC_6 (struct uart_8250_port*) ;
 int FUNC_7 (struct uart_8250_port*,unsigned char) ;
 unsigned char FUNC_8 (struct uart_8250_port*,int ) ;
 int FUNC_9 (struct uart_8250_port*,int ,unsigned char) ;
 scalar_t__ FUNC_10 (struct uart_port*) ;
 int FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(struct uart_8250_port *VAR_11)
{
 struct uart_port *VAR_12 = &VAR_11->port;
 unsigned char VAR_13, VAR_14;
 unsigned char VAR_15 = 0;
 unsigned int VAR_16 = 0;
 unsigned long VAR_17;
 int VAR_18;

 if (VAR_12->flags & VAR_10) {
  VAR_16 = (VAR_12->iobase & 0xfe0) | 0x1f;
  VAR_15 = FUNC_2(VAR_16);
  FUNC_3(0x80, VAR_16);
  FUNC_2(VAR_16);
 }

 if (FUNC_10(VAR_12))
  FUNC_0();


 FUNC_4(FUNC_5());
 VAR_13 = FUNC_6(VAR_11);
 VAR_14 = FUNC_8(VAR_11, VAR_0);
 FUNC_7(VAR_11, VAR_4 | VAR_5);

 VAR_17 = FUNC_5();
 FUNC_7(VAR_11, 0);
 FUNC_11(10);
 if (VAR_12->flags & VAR_10) {
  FUNC_7(VAR_11, VAR_3 | VAR_6);
 } else {
  FUNC_7(VAR_11,
   VAR_3 | VAR_6 | VAR_5);
 }
 FUNC_9(VAR_11, VAR_0, 0x0f);
 FUNC_8(VAR_11, VAR_2);
 FUNC_8(VAR_11, VAR_8);
 FUNC_8(VAR_11, VAR_1);
 FUNC_8(VAR_11, VAR_7);
 FUNC_9(VAR_11, VAR_9, 0xFF);
 FUNC_11(20);
 VAR_18 = FUNC_4(VAR_17);

 FUNC_7(VAR_11, VAR_13);
 FUNC_9(VAR_11, VAR_0, VAR_14);

 if (VAR_12->flags & VAR_10)
  FUNC_3(VAR_15, VAR_16);

 if (FUNC_10(VAR_12))
  FUNC_1();

 VAR_12->irq = (VAR_18 > 0) ? VAR_18 : 0;
}
