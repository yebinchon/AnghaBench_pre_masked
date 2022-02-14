
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
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (struct uart_port*,int,int ) ;
 int FUNC_2 (int ,int ,int ,char*,struct uart_port*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct uart_port *VAR_12)
{
 u32 VAR_13;
 unsigned long VAR_14;
 int VAR_15;

 VAR_15 = FUNC_2(VAR_12->irq, VAR_11, VAR_0,
   "owl-uart", VAR_12);
 if (VAR_15)
  return VAR_15;

 FUNC_3(&VAR_12->lock, VAR_14);

 VAR_13 = FUNC_0(VAR_12, VAR_5);
 VAR_13 |= VAR_6 | VAR_10
  | VAR_7 | VAR_9 | VAR_8;
 FUNC_1(VAR_12, VAR_13, VAR_5);

 VAR_13 = FUNC_0(VAR_12, VAR_1);
 VAR_13 |= VAR_3 | VAR_4;
 VAR_13 |= VAR_2;
 FUNC_1(VAR_12, VAR_13, VAR_1);

 FUNC_4(&VAR_12->lock, VAR_14);

 return 0;
}
