
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netdev_private {unsigned int rx_buf_sz; int ** rx_skbuff; int * rx_dma; int pci_dev; TYPE_1__* rx_ring; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int addr; scalar_t__ cmd_status; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 struct netdev_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_3)
{
 struct netdev_private *VAR_4 = FUNC_2(VAR_3);
 unsigned int VAR_5 = VAR_4->rx_buf_sz;
 int VAR_6;


 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_4->rx_ring[VAR_6].cmd_status = 0;
  VAR_4->rx_ring[VAR_6].addr = FUNC_0(0xBADF00D0);
  if (VAR_4->rx_skbuff[VAR_6]) {
   FUNC_3(VAR_4->pci_dev, VAR_4->rx_dma[VAR_6],
    VAR_5 + VAR_0,
    VAR_1);
   FUNC_1(VAR_4->rx_skbuff[VAR_6]);
  }
  VAR_4->rx_skbuff[VAR_6] = ((void*)0);
 }
}
