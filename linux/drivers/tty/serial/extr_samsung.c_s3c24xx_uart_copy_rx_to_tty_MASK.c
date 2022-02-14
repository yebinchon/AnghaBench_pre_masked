
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_port {int dummy; } ;
struct TYPE_3__ {int rx; } ;
struct TYPE_4__ {int dev; TYPE_1__ icount; } ;
struct s3c24xx_uart_port {TYPE_2__ port; struct s3c24xx_uart_dma* dma; } ;
struct s3c24xx_uart_dma {scalar_t__ rx_buf; int rx_size; int rx_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (struct tty_port*,unsigned char*,int) ;

__attribute__((used)) static void FUNC_4(struct s3c24xx_uart_port *VAR_1,
  struct tty_port *VAR_2, int VAR_3)
{
 struct s3c24xx_uart_dma *VAR_4 = VAR_1->dma;
 int VAR_5;

 if (!VAR_3)
  return;

 FUNC_2(VAR_1->port.dev, VAR_4->rx_addr,
    VAR_4->rx_size, VAR_0);

 VAR_1->port.icount.rx += VAR_3;
 if (!VAR_2) {
  FUNC_1(VAR_1->port.dev, "No tty port\n");
  return;
 }
 VAR_5 = FUNC_3(VAR_2,
   ((unsigned char *)(VAR_1->dma->rx_buf)), VAR_3);
 if (VAR_5 != VAR_3) {
  FUNC_0(1);
  FUNC_1(VAR_1->port.dev, "RxData copy to tty layer failed\n");
 }
}
