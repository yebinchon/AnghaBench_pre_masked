
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct uart_txx9_port {TYPE_1__ port; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (struct uart_txx9_port*,unsigned int*) ;
 unsigned int FUNC_1 (struct uart_txx9_port*,int ) ;
 int FUNC_2 (struct uart_txx9_port*,int ,unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct uart_txx9_port*) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_9, void *VAR_10)
{
 int VAR_11 = 0;
 struct uart_txx9_port *VAR_12 = VAR_10;
 unsigned int VAR_13;

 while (1) {
  FUNC_3(&VAR_12->port.lock);
  VAR_13 = FUNC_1(VAR_12, VAR_5);
  if (!(FUNC_1(VAR_12, VAR_3) & VAR_4))
   VAR_13 &= ~VAR_7;
  if (!(VAR_13 & (VAR_7 | VAR_6 |
    VAR_8))) {
   FUNC_4(&VAR_12->port.lock);
   break;
  }

  if (VAR_13 & VAR_6)
   FUNC_0(VAR_12, &VAR_13);
  if (VAR_13 & VAR_7)
   FUNC_5(VAR_12);

  FUNC_2(VAR_12, VAR_5,
    VAR_7 | VAR_6 |
    VAR_8);
  FUNC_4(&VAR_12->port.lock);

  if (VAR_11++ > VAR_2)
   break;
 }

 return VAR_11 ? VAR_0 : VAR_1;
}
