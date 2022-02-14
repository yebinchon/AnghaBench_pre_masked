
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct uartlite_data {TYPE_1__* reg_ops; } ;
struct uart_port {scalar_t__ membase; struct uartlite_data* private_data; } ;
struct TYPE_2__ {scalar_t__ (* in ) (scalar_t__) ;} ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_1(u32 VAR_0, struct uart_port *VAR_1)
{
 struct uartlite_data *VAR_2 = VAR_1->private_data;

 return VAR_2->reg_ops->in(VAR_1->membase + VAR_0);
}
