
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct circ_buf {unsigned char* buf; size_t head; } ;
struct uart_state {struct circ_buf xmit; } ;
struct uart_port {int dummy; } ;
struct tty_struct {struct uart_state* driver_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct circ_buf*) ;
 struct uart_port* FUNC_1 (struct uart_state*,unsigned long) ;
 int FUNC_2 (struct uart_port*,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_1, unsigned char VAR_2)
{
 struct uart_state *VAR_3 = VAR_1->driver_data;
 struct uart_port *VAR_4;
 struct circ_buf *VAR_5;
 unsigned long VAR_6;
 int VAR_7 = 0;

 VAR_5 = &VAR_3->xmit;
 VAR_4 = FUNC_1(VAR_3, VAR_6);
 if (!VAR_5->buf) {
  FUNC_2(VAR_4, VAR_6);
  return 0;
 }

 if (VAR_4 && FUNC_0(VAR_5) != 0) {
  VAR_5->buf[VAR_5->head] = VAR_2;
  VAR_5->head = (VAR_5->head + 1) & (VAR_0 - 1);
  VAR_7 = 1;
 }
 FUNC_2(VAR_4, VAR_6);
 return VAR_7;
}
