
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {int lock; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (struct uart_port*,int,int ) ;
 int FUNC_2 (int ,int ,int ,char*,struct uart_port*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct uart_port *VAR_7)
{
 unsigned long VAR_8;
 int VAR_9;
 u32 VAR_10;

 FUNC_3(&VAR_7->lock, VAR_8);
 FUNC_1(VAR_7, 0, VAR_3);
 FUNC_4(&VAR_7->lock, VAR_8);

 VAR_9 = FUNC_2(VAR_7->irq, VAR_6, VAR_0,
     "rda-uart", VAR_7);
 if (VAR_9)
  return VAR_9;

 FUNC_3(&VAR_7->lock, VAR_8);

 VAR_10 = FUNC_0(VAR_7, VAR_1);
 VAR_10 |= VAR_2;
 FUNC_1(VAR_7, VAR_10, VAR_1);


 VAR_10 = FUNC_0(VAR_7, VAR_3);
 VAR_10 |= (VAR_4 | VAR_5);
 FUNC_1(VAR_7, VAR_10, VAR_3);

 FUNC_4(&VAR_7->lock, VAR_8);

 return 0;
}
