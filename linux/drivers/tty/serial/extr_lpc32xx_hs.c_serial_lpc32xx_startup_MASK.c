
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {int membase; int irq; int lock; int mapbase; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct uart_port*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ,struct uart_port*) ;
 int VAR_10 ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int,int ) ;

__attribute__((used)) static int FUNC_10(struct uart_port *VAR_11)
{
 int VAR_12;
 unsigned long VAR_13;
 u32 VAR_14;

 FUNC_7(&VAR_11->lock, VAR_13);

 FUNC_4(VAR_11);

 FUNC_9((VAR_7 | VAR_2 |
  VAR_0 | VAR_4),
        FUNC_1(VAR_11->membase));

 FUNC_9(0xFF, FUNC_2(VAR_11->membase));





 VAR_14 = VAR_8 | VAR_5 |
  FUNC_3(20) | VAR_6;
 FUNC_9(VAR_14, FUNC_0(VAR_11->membase));

 FUNC_5(VAR_11->mapbase, 0);

 FUNC_8(&VAR_11->lock, VAR_13);

 VAR_12 = FUNC_6(VAR_11->irq, VAR_10,
        0, VAR_9, VAR_11);
 if (!VAR_12)
  FUNC_9((VAR_14 | VAR_3 | VAR_1),
         FUNC_0(VAR_11->membase));

 return VAR_12;
}
