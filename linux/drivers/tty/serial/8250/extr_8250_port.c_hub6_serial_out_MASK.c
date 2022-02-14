
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int regshift; int hub6; scalar_t__ iobase; } ;


 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct uart_port *VAR_0, int VAR_1, int VAR_2)
{
 VAR_1 = VAR_1 << VAR_0->regshift;
 FUNC_0(VAR_0->hub6 - 1 + VAR_1, VAR_0->iobase);
 FUNC_0(VAR_2, VAR_0->iobase + 1);
}
