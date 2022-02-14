
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_4__ {TYPE_1__* info; } ;
struct TYPE_3__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (struct uart_port*) ;

__attribute__((used)) static int FUNC_1(struct uart_port *VAR_1)
{
 return FUNC_0(VAR_1)->info->type == VAR_0;
}
