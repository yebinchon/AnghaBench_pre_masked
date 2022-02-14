
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ membase; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,void*) ;
 int FUNC_1 (int,void*) ;
 unsigned long FUNC_2 (scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 struct uart_port *VAR_6 = VAR_5;
 unsigned long VAR_7;

 VAR_7 = FUNC_2(VAR_6->membase + VAR_3);

 if (VAR_7 & VAR_1)
  FUNC_0(VAR_4, VAR_5);
 if (VAR_7 & VAR_2)
  FUNC_1(VAR_4, VAR_5);

 return VAR_0;
}
