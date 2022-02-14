
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct circ_buf {int head; scalar_t__ buf; int tail; } ;
struct uart_state {struct circ_buf xmit; } ;
struct uart_port {int dummy; } ;
struct tty_struct {struct uart_state* driver_data; } ;


 int FUNC_0 (int,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct tty_struct*) ;
 int FUNC_3 (scalar_t__,unsigned char const*,int) ;
 struct uart_port* FUNC_4 (struct uart_state*,unsigned long) ;
 int FUNC_5 (struct uart_port*,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct tty_struct *VAR_2,
     const unsigned char *VAR_3, int VAR_4)
{
 struct uart_state *VAR_5 = VAR_2->driver_data;
 struct uart_port *VAR_6;
 struct circ_buf *VAR_7;
 unsigned long VAR_8;
 int VAR_9, VAR_10 = 0;





 if (!VAR_5) {
  FUNC_1(1);
  return -VAR_0;
 }

 VAR_6 = FUNC_4(VAR_5, VAR_8);
 VAR_7 = &VAR_5->xmit;
 if (!VAR_7->buf) {
  FUNC_5(VAR_6, VAR_8);
  return 0;
 }

 while (VAR_6) {
  VAR_9 = FUNC_0(VAR_7->head, VAR_7->tail, VAR_1);
  if (VAR_4 < VAR_9)
   VAR_9 = VAR_4;
  if (VAR_9 <= 0)
   break;
  FUNC_3(VAR_7->buf + VAR_7->head, VAR_3, VAR_9);
  VAR_7->head = (VAR_7->head + VAR_9) & (VAR_1 - 1);
  VAR_3 += VAR_9;
  VAR_4 -= VAR_9;
  VAR_10 += VAR_9;
 }

 FUNC_2(VAR_2);
 FUNC_5(VAR_6, VAR_8);
 return VAR_10;
}
