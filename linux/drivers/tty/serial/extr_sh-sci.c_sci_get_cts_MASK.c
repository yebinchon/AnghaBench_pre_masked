
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {scalar_t__ type; } ;
struct TYPE_2__ {scalar_t__ size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (struct uart_port*,int ) ;

__attribute__((used)) static bool FUNC_2(struct uart_port *VAR_6)
{
 if (VAR_6->type == VAR_0 || VAR_6->type == VAR_1) {

  return !(FUNC_1(VAR_6, VAR_2) & VAR_3);
 } else if (FUNC_0(VAR_6, VAR_4)->size) {

  return !(FUNC_1(VAR_6, VAR_4) & VAR_5);
 }

 return 1;
}
