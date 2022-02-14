
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int* dev_addr; TYPE_3__* phydev; } ;
struct au1000_private {int tx_head; int tx_tail; int rx_head; int lock; TYPE_4__* mac; TYPE_2__** rx_dma_ring; TYPE_1__** tx_dma_ring; } ;
struct TYPE_8__ {int vlan1_tag; int control; int mac_addr_low; int mac_addr_high; } ;
struct TYPE_7__ {scalar_t__ duplex; scalar_t__ link; } ;
struct TYPE_6__ {int buff_stat; } ;
struct TYPE_5__ {int buff_stat; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct net_device*,int) ;
 int VAR_8 ;
 struct au1000_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct au1000_private*,int ,struct net_device*,char*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 () ;
 int FUNC_6 (int,int *) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_9)
{
 struct au1000_private *VAR_10 = FUNC_1(VAR_9);
 unsigned long VAR_11;
 int VAR_12;
 u32 VAR_13;

 FUNC_2(VAR_10, VAR_8, VAR_9, "au1000_init\n");


 FUNC_0(VAR_9, 1);

 FUNC_3(&VAR_10->lock, VAR_11);

 FUNC_6(0, &VAR_10->mac->control);
 VAR_10->tx_head = (VAR_10->tx_dma_ring[0]->buff_stat & 0xC) >> 2;
 VAR_10->tx_tail = VAR_10->tx_head;
 VAR_10->rx_head = (VAR_10->rx_dma_ring[0]->buff_stat & 0xC) >> 2;

 FUNC_6(VAR_9->dev_addr[5]<<8 | VAR_9->dev_addr[4],
     &VAR_10->mac->mac_addr_high);
 FUNC_6(VAR_9->dev_addr[3]<<24 | VAR_9->dev_addr[2]<<16 |
  VAR_9->dev_addr[1]<<8 | VAR_9->dev_addr[0],
     &VAR_10->mac->mac_addr_low);


 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++)
  VAR_10->rx_dma_ring[VAR_12]->buff_stat |= VAR_7;

 FUNC_5();

 VAR_13 = VAR_4 | VAR_5;

 VAR_13 |= VAR_1;

 if (VAR_9->phydev) {
  if (VAR_9->phydev->link && (VAR_0 == VAR_9->phydev->duplex))
   VAR_13 |= VAR_3;
  else
   VAR_13 |= VAR_2;
 } else {
  VAR_13 |= VAR_3;
 }

 FUNC_6(VAR_13, &VAR_10->mac->control);
 FUNC_6(0x8100, &VAR_10->mac->vlan1_tag);
 FUNC_5();

 FUNC_4(&VAR_10->lock, VAR_11);
 return 0;
}
