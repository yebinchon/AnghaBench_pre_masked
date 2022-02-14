
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_port {int dummy; } ;
struct TYPE_3__ {unsigned int rx; } ;
struct TYPE_4__ {int ignore_status_mask; int dev; TYPE_1__ icount; } ;
struct tegra_uart_port {int rx_dma_buf_phys; TYPE_2__ uport; scalar_t__ rx_dma_buf_virt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (struct tty_port*,unsigned char*,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct tegra_uart_port *VAR_4,
          struct tty_port *VAR_5,
          unsigned int VAR_6)
{
 int VAR_7;


 if (!VAR_6)
  return;

 VAR_4->uport.icount.rx += VAR_6;
 if (!VAR_5) {
  FUNC_1(VAR_4->uport.dev, "No tty port\n");
  return;
 }

 if (VAR_4->uport.ignore_status_mask & VAR_3)
  return;

 FUNC_2(VAR_4->uport.dev, VAR_4->rx_dma_buf_phys,
    VAR_2, VAR_0);
 VAR_7 = FUNC_4(VAR_5,
   ((unsigned char *)(VAR_4->rx_dma_buf_virt)), VAR_6);
 if (VAR_7 != VAR_6) {
  FUNC_0(1);
  FUNC_1(VAR_4->uport.dev, "RxData copy to tty layer failed\n");
 }
 FUNC_3(VAR_4->uport.dev, VAR_4->rx_dma_buf_phys,
    VAR_2, VAR_1);
}
