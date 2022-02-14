
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int phys_addr; scalar_t__ virt; } ;
struct TYPE_3__ {int dev; } ;
struct sprd_uart_port {TYPE_2__ rx_dma; TYPE_1__ port; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct sprd_uart_port *VAR_1)
{
 if (VAR_1->rx_dma.virt)
  FUNC_0(VAR_1->port.dev, VAR_0,
      VAR_1->rx_dma.virt, VAR_1->rx_dma.phys_addr);

}
