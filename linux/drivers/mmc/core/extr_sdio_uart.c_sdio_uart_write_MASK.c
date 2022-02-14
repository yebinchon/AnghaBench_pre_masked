
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct sdio_uart_port* driver_data; } ;
struct sdio_uart_port {int ier; int func; int write_lock; int xmit_fifo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned char const*,int,int *) ;
 int FUNC_1 (struct sdio_uart_port*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sdio_uart_port*) ;
 int FUNC_4 (struct sdio_uart_port*) ;

__attribute__((used)) static int FUNC_5(struct tty_struct *VAR_2, const unsigned char *VAR_3,
      int VAR_4)
{
 struct sdio_uart_port *VAR_5 = VAR_2->driver_data;
 int VAR_6;

 if (!VAR_5->func)
  return -VAR_0;

 VAR_6 = FUNC_0(&VAR_5->xmit_fifo, VAR_3, VAR_4, &VAR_5->write_lock);
 if (!(VAR_5->ier & VAR_1)) {
  int VAR_7 = FUNC_1(VAR_5);
  if (!VAR_7) {
   FUNC_4(VAR_5);
   FUNC_2(VAR_5->func);
   FUNC_3(VAR_5);
  } else
   VAR_6 = VAR_7;
 }

 return VAR_6;
}
