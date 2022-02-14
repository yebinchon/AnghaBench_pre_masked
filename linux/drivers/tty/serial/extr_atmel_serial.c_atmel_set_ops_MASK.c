
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct atmel_uart_port {int * release_tx; int * schedule_tx; int * prepare_tx; int * release_rx; int * schedule_rx; int * prepare_rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (struct uart_port*) ;
 scalar_t__ FUNC_1 (struct uart_port*) ;
 scalar_t__ FUNC_2 (struct uart_port*) ;
 scalar_t__ FUNC_3 (struct uart_port*) ;
 struct atmel_uart_port* FUNC_4 (struct uart_port*) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_14)
{
 struct atmel_uart_port *VAR_15 = FUNC_4(VAR_14);

 if (FUNC_0(VAR_14)) {
  VAR_15->prepare_rx = &VAR_0;
  VAR_15->schedule_rx = &VAR_8;
  VAR_15->release_rx = &VAR_4;
 } else if (FUNC_2(VAR_14)) {
  VAR_15->prepare_rx = &VAR_1;
  VAR_15->schedule_rx = &VAR_9;
  VAR_15->release_rx = &VAR_5;
 } else {
  VAR_15->prepare_rx = ((void*)0);
  VAR_15->schedule_rx = &VAR_10;
  VAR_15->release_rx = ((void*)0);
 }

 if (FUNC_1(VAR_14)) {
  VAR_15->prepare_tx = &VAR_2;
  VAR_15->schedule_tx = &VAR_12;
  VAR_15->release_tx = &VAR_6;
 } else if (FUNC_3(VAR_14)) {
  VAR_15->prepare_tx = &VAR_3;
  VAR_15->schedule_tx = &VAR_13;
  VAR_15->release_tx = &VAR_7;
 } else {
  VAR_15->prepare_tx = ((void*)0);
  VAR_15->schedule_tx = &VAR_11;
  VAR_15->release_tx = ((void*)0);
 }
}
