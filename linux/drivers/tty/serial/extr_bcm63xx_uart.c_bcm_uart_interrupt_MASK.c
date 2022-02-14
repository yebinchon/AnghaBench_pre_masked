
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_1 (int ) ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_2 (struct uart_port*) ;
 int FUNC_3 (struct uart_port*) ;
 unsigned int FUNC_4 (struct uart_port*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct uart_port*,unsigned int) ;
 int FUNC_8 (struct uart_port*,unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_10, void *VAR_11)
{
 struct uart_port *VAR_12;
 unsigned int VAR_13;

 VAR_12 = VAR_11;
 FUNC_5(&VAR_12->lock);

 VAR_13 = FUNC_4(VAR_12, VAR_7);
 if (VAR_13 & VAR_8)
  FUNC_2(VAR_12);

 if (VAR_13 & VAR_9)
  FUNC_3(VAR_12);

 if (VAR_13 & FUNC_1(VAR_6)) {
  unsigned int VAR_14;

  VAR_14 = FUNC_4(VAR_12, VAR_5);
  if (VAR_14 & FUNC_0(VAR_3))
   FUNC_7(VAR_12,
            VAR_14 & VAR_1);
  if (VAR_14 & FUNC_0(VAR_4))
   FUNC_8(VAR_12,
            VAR_14 & VAR_2);
 }

 FUNC_6(&VAR_12->lock);
 return VAR_0;
}
