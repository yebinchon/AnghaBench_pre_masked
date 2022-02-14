
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct uart_port {scalar_t__ membase; } ;
struct men_z135_port {int lock; struct uart_port port; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct men_z135_port *VAR_0,
    u32 VAR_1, u32 VAR_2)
{
 struct uart_port *VAR_3 = &VAR_0->port;
 unsigned long VAR_4;
 u32 VAR_5;

 FUNC_2(&VAR_0->lock, VAR_4);

 VAR_5 = FUNC_0(VAR_3->membase + VAR_1);
 VAR_5 &= ~VAR_2;
 FUNC_1(VAR_5, VAR_3->membase + VAR_1);

 FUNC_3(&VAR_0->lock, VAR_4);
}
