
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct uartlite_data {TYPE_1__* reg_ops; } ;
struct uart_port {scalar_t__ membase; struct uartlite_data* private_data; } ;
struct TYPE_2__ {int (* out ) (scalar_t__,scalar_t__) ;} ;


 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(u32 VAR_0, u32 VAR_1, struct uart_port *VAR_2)
{
 struct uartlite_data *VAR_3 = VAR_2->private_data;

 VAR_3->reg_ops->out(VAR_0, VAR_2->membase + VAR_1);
}
