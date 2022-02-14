
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {scalar_t__ size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (struct uart_port*,int ) ;

__attribute__((used)) static int FUNC_2(struct uart_port *VAR_4)
{
 if (FUNC_0(VAR_4, VAR_0)->size)
  return FUNC_1(VAR_4, VAR_0) != 0;
 else
  return (FUNC_1(VAR_4, VAR_1) &
   (VAR_2 | VAR_3)) != 0;
}
