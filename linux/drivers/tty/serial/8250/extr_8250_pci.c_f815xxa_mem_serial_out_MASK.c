
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ membase; struct f815xxa_data* private_data; } ;
struct f815xxa_data {int lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_1, int VAR_2, int VAR_3)
{
 struct f815xxa_data *VAR_4 = VAR_1->private_data;
 unsigned long VAR_5;

 FUNC_1(&VAR_4->lock, VAR_5);
 FUNC_3(VAR_3, VAR_1->membase + VAR_2);
 FUNC_0(VAR_1->membase + VAR_0);
 FUNC_2(&VAR_4->lock, VAR_5);
}
