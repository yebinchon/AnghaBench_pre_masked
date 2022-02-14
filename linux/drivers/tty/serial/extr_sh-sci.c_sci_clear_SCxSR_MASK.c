
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {scalar_t__ type; } ;
struct TYPE_4__ {TYPE_1__* params; } ;
struct TYPE_3__ {scalar_t__ overrun_mask; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (struct uart_port*,int ,unsigned int) ;
 TYPE_2__* FUNC_2 (struct uart_port*) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_5, unsigned int VAR_6)
{
 if (VAR_5->type == VAR_0) {

  FUNC_1(VAR_5, VAR_4, VAR_6);
 } else if (FUNC_2(VAR_5)->params->overrun_mask == VAR_1) {


  FUNC_1(VAR_5, VAR_4,
    FUNC_0(VAR_5, VAR_4) & VAR_6);
 } else {

  FUNC_1(VAR_5, VAR_4, VAR_6 & ~(VAR_2 | VAR_3));
 }
}
