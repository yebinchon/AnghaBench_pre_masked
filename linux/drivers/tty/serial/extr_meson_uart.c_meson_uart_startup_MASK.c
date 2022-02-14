
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {int fifosize; int name; int irq; scalar_t__ membase; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ,int ,int ,struct uart_port*) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct uart_port *VAR_8)
{
 u32 VAR_9;
 int VAR_10 = 0;

 VAR_9 = FUNC_2(VAR_8->membase + VAR_1);
 VAR_9 |= VAR_0;
 FUNC_4(VAR_9, VAR_8->membase + VAR_1);
 VAR_9 &= ~VAR_0;
 FUNC_4(VAR_9, VAR_8->membase + VAR_1);

 VAR_9 |= (VAR_3 | VAR_5);
 FUNC_4(VAR_9, VAR_8->membase + VAR_1);

 VAR_9 |= (VAR_4 | VAR_6);
 FUNC_4(VAR_9, VAR_8->membase + VAR_1);

 VAR_9 = (FUNC_0(1) | FUNC_1(VAR_8->fifosize / 2));
 FUNC_4(VAR_9, VAR_8->membase + VAR_2);

 VAR_10 = FUNC_3(VAR_8->irq, VAR_7, 0,
     VAR_8->name, VAR_8);

 return VAR_10;
}
