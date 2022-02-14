
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {int lock; int membase; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_1,
         int VAR_2)
{
 unsigned long VAR_3;
 u32 VAR_4;

 FUNC_2(&VAR_1->lock, VAR_3);
 VAR_4 = FUNC_1(FUNC_0(VAR_1->membase));
 if (VAR_2 != 0)
  VAR_4 |= VAR_0;
 else
  VAR_4 &= ~VAR_0;
 FUNC_4(VAR_4, FUNC_0(VAR_1->membase));
 FUNC_3(&VAR_1->lock, VAR_3);
}
