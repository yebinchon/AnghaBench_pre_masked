
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned short u16 ;
struct uart_port {scalar_t__ type; } ;
struct TYPE_4__ {TYPE_1__* state; } ;
struct sci_port {scalar_t__ chan_tx; int work_tx; scalar_t__ cookie_tx; TYPE_2__ port; } ;
struct TYPE_3__ {int xmit; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 unsigned short FUNC_2 (struct uart_port*,int ) ;
 int FUNC_3 (struct uart_port*,int ,unsigned short) ;
 struct sci_port* FUNC_4 (struct uart_port*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct uart_port *VAR_5)
{
 struct sci_port *VAR_6 = FUNC_4(VAR_5);
 unsigned short VAR_7;
 if (!VAR_6->chan_tx || VAR_5->type == VAR_0 || VAR_5->type == VAR_1) {

  VAR_7 = FUNC_2(VAR_5, VAR_2);
  FUNC_3(VAR_5, VAR_2, VAR_7 | VAR_4);
 }
}
