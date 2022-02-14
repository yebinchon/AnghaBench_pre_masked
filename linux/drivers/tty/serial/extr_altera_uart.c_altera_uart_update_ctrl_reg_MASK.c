
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irq; } ;
struct altera_uart {unsigned short imr; TYPE_1__ port; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 int FUNC_0 (TYPE_1__*,unsigned short,int ) ;

__attribute__((used)) static void FUNC_1(struct altera_uart *VAR_3)
{
 unsigned short VAR_4 = VAR_3->imr;





 if (!VAR_3->port.irq)
  VAR_4 &= VAR_2 | VAR_1;

 FUNC_0(&VAR_3->port, VAR_4, VAR_0);
}
