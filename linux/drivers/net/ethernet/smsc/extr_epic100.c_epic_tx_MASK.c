
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct TYPE_3__ {int collisions; int tx_bytes; int tx_packets; } ;
struct net_device {TYPE_1__ stats; } ;
struct epic_private {unsigned int cur_tx; unsigned int dirty_tx; int tx_full; struct sk_buff** tx_skbuff; TYPE_2__* tx_ring; int pci_dev; } ;
struct TYPE_4__ {int txstatus; int bufaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct net_device*,struct epic_private*,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct net_device*,char*,unsigned int,unsigned int,int ) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_4, struct epic_private *VAR_5)
{
 unsigned int VAR_6, VAR_7;





 VAR_7 = VAR_5->cur_tx;
 for (VAR_6 = VAR_5->dirty_tx; VAR_7 - VAR_6 > 0; VAR_6++) {
  struct sk_buff *VAR_8;
  int VAR_9 = VAR_6 % VAR_3;
  int VAR_10 = VAR_5->tx_ring[VAR_9].txstatus;

  if (VAR_10 & VAR_0)
   break;

  if (FUNC_2(VAR_10 & 0x0001)) {
   VAR_4->stats.collisions += (VAR_10 >> 8) & 15;
   VAR_4->stats.tx_packets++;
   VAR_4->stats.tx_bytes += VAR_5->tx_skbuff[VAR_9]->len;
  } else
   FUNC_1(VAR_4, VAR_5, VAR_10);


  VAR_8 = VAR_5->tx_skbuff[VAR_9];
  FUNC_5(VAR_5->pci_dev, VAR_5->tx_ring[VAR_9].bufaddr,
     VAR_8->len, VAR_1);
  FUNC_0(VAR_8);
  VAR_5->tx_skbuff[VAR_9] = ((void*)0);
 }


 if (VAR_7 - VAR_6 > VAR_3) {
  FUNC_3(VAR_4, "Out-of-sync dirty pointer, %d vs. %d, full=%d.\n",
       VAR_6, VAR_7, VAR_5->tx_full);
  VAR_6 += VAR_3;
 }

 VAR_5->dirty_tx = VAR_6;
 if (VAR_5->tx_full && VAR_7 - VAR_6 < VAR_2 - 4) {

  VAR_5->tx_full = 0;
  FUNC_4(VAR_4);
 }
}
