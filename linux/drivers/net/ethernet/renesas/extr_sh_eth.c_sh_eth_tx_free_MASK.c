
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sh_eth_txdesc {int status; int addr; int len; } ;
struct sh_eth_private {scalar_t__ cur_tx; int dirty_tx; int num_tx_ring; int ** tx_skbuff; TYPE_1__* pdev; struct sh_eth_txdesc* tx_ring; } ;
struct TYPE_4__ {int tx_bytes; int tx_packets; } ;
struct net_device {TYPE_2__ stats; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int,int,int ) ;
 int FUNC_4 (int) ;
 struct sh_eth_private* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct sh_eth_private*,int ,struct net_device*,char*,int,int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_5, bool VAR_6)
{
 struct sh_eth_private *VAR_7 = FUNC_5(VAR_5);
 struct sh_eth_txdesc *VAR_8;
 int VAR_9 = 0;
 int VAR_10;
 bool VAR_11;

 for (; VAR_7->cur_tx - VAR_7->dirty_tx > 0; VAR_7->dirty_tx++) {
  VAR_10 = VAR_7->dirty_tx % VAR_7->num_tx_ring;
  VAR_8 = &VAR_7->tx_ring[VAR_10];
  VAR_11 = !(VAR_8->status & FUNC_0(VAR_1));
  if (VAR_6 && !VAR_11)
   break;

  FUNC_2();
  FUNC_6(VAR_7, VAR_4, VAR_5,
      "tx entry %d status 0x%08x\n",
      VAR_10, FUNC_4(VAR_8->status));

  if (VAR_7->tx_skbuff[VAR_10]) {
   FUNC_3(&VAR_7->pdev->dev,
      FUNC_4(VAR_8->addr),
      FUNC_4(VAR_8->len) >> 16,
      VAR_0);
   FUNC_1(VAR_7->tx_skbuff[VAR_10]);
   VAR_7->tx_skbuff[VAR_10] = ((void*)0);
   VAR_9++;
  }
  VAR_8->status = FUNC_0(VAR_3);
  if (VAR_10 >= VAR_7->num_tx_ring - 1)
   VAR_8->status |= FUNC_0(VAR_2);

  if (VAR_11) {
   VAR_5->stats.tx_packets++;
   VAR_5->stats.tx_bytes += FUNC_4(VAR_8->len) >> 16;
  }
 }
 return VAR_9;
}
