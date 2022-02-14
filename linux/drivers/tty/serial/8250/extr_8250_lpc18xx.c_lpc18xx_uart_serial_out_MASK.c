
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int regshift; scalar_t__ membase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct uart_port *VAR_3, int VAR_4, int VAR_5)
{





 if (VAR_4 == VAR_0 && (VAR_5 & VAR_2))
  VAR_5 |= VAR_1;

 VAR_4 = VAR_4 << VAR_3->regshift;
 FUNC_0(VAR_5, VAR_3->membase + VAR_4);
}
