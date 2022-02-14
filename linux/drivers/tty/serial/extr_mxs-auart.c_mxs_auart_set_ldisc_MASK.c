
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int flags; } ;
struct ktermios {scalar_t__ c_line; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uart_port*) ;

__attribute__((used)) static void FUNC_1(struct uart_port *VAR_2,
    struct ktermios *VAR_3)
{
 if (VAR_3->c_line == VAR_0) {
  VAR_2->flags |= VAR_1;
  FUNC_0(VAR_2);
 } else {
  VAR_2->flags &= ~VAR_1;
 }
}
