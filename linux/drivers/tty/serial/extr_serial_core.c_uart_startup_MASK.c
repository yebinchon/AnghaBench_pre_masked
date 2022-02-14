
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_port {int dummy; } ;
struct uart_state {struct tty_port port; } ;
struct tty_struct {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (struct tty_port*) ;
 int FUNC_2 (struct tty_struct*,struct uart_state*,int) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_1, struct uart_state *VAR_2,
  int VAR_3)
{
 struct tty_port *VAR_4 = &VAR_2->port;
 int VAR_5;

 if (FUNC_1(VAR_4))
  return 0;

 VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3);
 if (VAR_5)
  FUNC_0(VAR_0, &VAR_1->flags);

 return VAR_5;
}
