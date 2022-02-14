
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {scalar_t__ membase; } ;
struct ltq_uart_port {int lock; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int,void*) ;
 int FUNC_1 (int,void*) ;
 int FUNC_2 (int,void*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct ltq_uart_port* FUNC_6 (struct uart_port*) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_7, void *VAR_8)
{
 unsigned long VAR_9;
 u32 VAR_10;
 struct uart_port *VAR_11 = VAR_8;
 struct ltq_uart_port *VAR_12 = FUNC_6(VAR_11);

 FUNC_4(&VAR_12->lock, VAR_9);
 VAR_10 = FUNC_3(VAR_11->membase + VAR_6);
 FUNC_5(&VAR_12->lock, VAR_9);
 if (!(VAR_10 & VAR_1))
  return VAR_5;

 if (VAR_10 & VAR_3)
  FUNC_2(VAR_7, VAR_8);

 if (VAR_10 & VAR_2)
  FUNC_1(VAR_7, VAR_8);

 if (VAR_10 & VAR_0)
  FUNC_0(VAR_7, VAR_8);

 return VAR_4;
}
