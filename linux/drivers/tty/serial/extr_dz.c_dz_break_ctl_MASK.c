
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int lock; } ;
struct TYPE_2__ {int line; } ;
struct dz_port {TYPE_1__ port; } ;


 int VAR_0 ;
 unsigned short FUNC_0 (struct dz_port*,int ) ;
 int FUNC_1 (struct dz_port*,int ,unsigned short) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct dz_port* FUNC_4 (struct uart_port*) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_1, int VAR_2)
{




 struct dz_port *VAR_3 = FUNC_4(VAR_1);
 unsigned long VAR_4;
 unsigned short VAR_5, VAR_6 = 1 << VAR_3->port.line;

 FUNC_2(&VAR_1->lock, VAR_4);
 VAR_5 = FUNC_0(VAR_3, VAR_0);
 if (VAR_2)
  VAR_5 |= VAR_6;
 else
  VAR_5 &= ~VAR_6;
 FUNC_1(VAR_3, VAR_0, VAR_5);
 FUNC_3(&VAR_1->lock, VAR_4);
}
