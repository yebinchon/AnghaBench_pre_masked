
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct uart_port {int lock; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct uart_port*,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_4, void *VAR_5)
{
 struct uart_port *VAR_6 = VAR_5;
 u8 VAR_7 = FUNC_0(VAR_6, VAR_2);

 if (FUNC_5(!(VAR_7 & VAR_3)))
  return VAR_1;

 FUNC_3(&VAR_6->lock);

 FUNC_2(VAR_6, VAR_3, VAR_2);
 FUNC_1(VAR_6);

 FUNC_4(&VAR_6->lock);

 return VAR_0;
}
