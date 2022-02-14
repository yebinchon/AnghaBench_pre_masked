
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef short u_long ;
struct net_device {short name; short irq; int dev_addr; } ;
struct de4x5_private {int rxRingSize; int txRingSize; TYPE_2__* tx_ring; TYPE_1__* rx_ring; } ;
struct TYPE_4__ {int buf; int status; } ;
struct TYPE_3__ {int buf; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct de4x5_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void
FUNC_3(struct net_device *VAR_2)
{
    struct de4x5_private *VAR_3 = FUNC_1(VAR_2);
    int VAR_4;

    if (VAR_1 & VAR_0) {
 FUNC_2("%s: de4x5 opening with irq %d\n",VAR_2->name,VAR_2->irq);
 FUNC_2("\tphysical address: %pM\n", VAR_2->dev_addr);
 FUNC_2("Descriptor head addresses:\n");
 FUNC_2("\t0x%8.8lx  0x%8.8lx\n",(u_long)VAR_3->rx_ring,(u_long)VAR_3->tx_ring);
 FUNC_2("Descriptor addresses:\nRX: ");
 for (VAR_4=0;VAR_4<VAR_3->rxRingSize-1;VAR_4++){
     if (VAR_4 < 3) {
  FUNC_2("0x%8.8lx  ",(u_long)&VAR_3->rx_ring[VAR_4].status);
     }
 }
 FUNC_2("...0x%8.8lx\n",(u_long)&VAR_3->rx_ring[VAR_4].status);
 FUNC_2("TX: ");
 for (VAR_4=0;VAR_4<VAR_3->txRingSize-1;VAR_4++){
     if (VAR_4 < 3) {
  FUNC_2("0x%8.8lx  ", (u_long)&VAR_3->tx_ring[VAR_4].status);
     }
 }
 FUNC_2("...0x%8.8lx\n", (u_long)&VAR_3->tx_ring[VAR_4].status);
 FUNC_2("Descriptor buffers:\nRX: ");
 for (VAR_4=0;VAR_4<VAR_3->rxRingSize-1;VAR_4++){
     if (VAR_4 < 3) {
  FUNC_2("0x%8.8x  ",FUNC_0(VAR_3->rx_ring[VAR_4].buf));
     }
 }
 FUNC_2("...0x%8.8x\n",FUNC_0(VAR_3->rx_ring[VAR_4].buf));
 FUNC_2("TX: ");
 for (VAR_4=0;VAR_4<VAR_3->txRingSize-1;VAR_4++){
     if (VAR_4 < 3) {
  FUNC_2("0x%8.8x  ", FUNC_0(VAR_3->tx_ring[VAR_4].buf));
     }
 }
 FUNC_2("...0x%8.8x\n", FUNC_0(VAR_3->tx_ring[VAR_4].buf));
 FUNC_2("Ring size:\nRX: %d\nTX: %d\n",
        (short)VAR_3->rxRingSize,
        (short)VAR_3->txRingSize);
    }
}
