
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int lock; } ;
struct TYPE_2__ {int size; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 int VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 TYPE_1__* FUNC_0 (struct uart_port*,int ) ;
 unsigned short FUNC_1 (struct uart_port*,int ) ;
 int FUNC_2 (struct uart_port*,int ,unsigned short) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_5, int VAR_6)
{
 unsigned short VAR_7, VAR_8;
 unsigned long VAR_9;


 if (!FUNC_0(VAR_5, VAR_2)->size) {




  return;
 }

 FUNC_3(&VAR_5->lock, VAR_9);
 VAR_8 = FUNC_1(VAR_5, VAR_2);
 VAR_7 = FUNC_1(VAR_5, VAR_0);

 if (VAR_6 == -1) {
  VAR_8 = (VAR_8 | VAR_4) & ~VAR_3;
  VAR_7 &= ~VAR_1;
 } else {
  VAR_8 = (VAR_8 | VAR_3) & ~VAR_4;
  VAR_7 |= VAR_1;
 }

 FUNC_2(VAR_5, VAR_2, VAR_8);
 FUNC_2(VAR_5, VAR_0, VAR_7);
 FUNC_4(&VAR_5->lock, VAR_9);
}
