
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {int lock; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct uart_port*) ;
 int FUNC_3 (struct uart_port*,int,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_6, void *VAR_7)
{
 struct uart_port *VAR_8 = VAR_7;
 unsigned long VAR_9;
 u32 VAR_10, VAR_11;

 FUNC_4(&VAR_8->lock, VAR_9);


 VAR_10 = FUNC_0(VAR_8, VAR_1);
 FUNC_3(VAR_8, VAR_10, VAR_1);

 if (VAR_10 & (VAR_3 | VAR_4))
  FUNC_1(VAR_8);

 if (VAR_10 & (VAR_5)) {
  VAR_11 = FUNC_0(VAR_8, VAR_2);
  VAR_11 &= ~VAR_5;
  FUNC_3(VAR_8, VAR_11, VAR_2);

  FUNC_2(VAR_8);
 }

 FUNC_5(&VAR_8->lock, VAR_9);

 return VAR_0;
}
