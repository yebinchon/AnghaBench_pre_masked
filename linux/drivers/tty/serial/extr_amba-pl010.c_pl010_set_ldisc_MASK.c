
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; int flags; } ;
struct ktermios {scalar_t__ c_line; int c_cflag; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct uart_port*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct uart_port*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_2, struct ktermios *VAR_3)
{
 if (VAR_3->c_line == VAR_0) {
  VAR_2->flags |= VAR_1;
  FUNC_3(&VAR_2->lock);
  FUNC_2(VAR_2);
  FUNC_4(&VAR_2->lock);
 } else {
  VAR_2->flags &= ~VAR_1;
  if (!FUNC_0(VAR_2, VAR_3->c_cflag)) {
   FUNC_3(&VAR_2->lock);
   FUNC_1(VAR_2);
   FUNC_4(&VAR_2->lock);
  }
 }
}
