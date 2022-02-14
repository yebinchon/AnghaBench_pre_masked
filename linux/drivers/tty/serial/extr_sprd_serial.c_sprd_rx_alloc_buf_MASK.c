
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int virt; int phys_addr; } ;
struct TYPE_3__ {int dev; } ;
struct sprd_uart_port {TYPE_2__ rx_dma; TYPE_1__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct sprd_uart_port *VAR_3)
{
 VAR_3->rx_dma.virt = FUNC_0(VAR_3->port.dev, VAR_2,
          &VAR_3->rx_dma.phys_addr, VAR_1);
 if (!VAR_3->rx_dma.virt)
  return -VAR_0;

 return 0;
}
