
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct fec_enet_private {struct fec_enet_priv_tx_q** tx_queue; } ;
struct TYPE_2__ {struct bufdesc* cur; struct bufdesc* base; } ;
struct fec_enet_priv_tx_q {TYPE_1__ bd; int * tx_skbuff; struct bufdesc* dirty_tx; } ;
struct bufdesc {int cbd_datlen; int cbd_bufaddr; int cbd_sc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct bufdesc* FUNC_2 (struct bufdesc*,TYPE_1__*) ;
 int FUNC_3 (struct net_device*,char*) ;
 struct fec_enet_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_0)
{
 struct fec_enet_private *VAR_1 = FUNC_4(VAR_0);
 struct bufdesc *VAR_2;
 struct fec_enet_priv_tx_q *VAR_3;
 int VAR_4 = 0;

 FUNC_3(VAR_0, "TX ring dump\n");
 FUNC_5("Nr     SC     addr       len  SKB\n");

 VAR_3 = VAR_1->tx_queue[0];
 VAR_2 = VAR_3->bd.base;

 do {
  FUNC_5("%3u %c%c 0x%04x 0x%08x %4u %p\n",
   VAR_4,
   VAR_2 == VAR_3->bd.cur ? 'S' : ' ',
   VAR_2 == VAR_3->dirty_tx ? 'H' : ' ',
   FUNC_0(VAR_2->cbd_sc),
   FUNC_1(VAR_2->cbd_bufaddr),
   FUNC_0(VAR_2->cbd_datlen),
   VAR_3->tx_skbuff[VAR_4]);
  VAR_2 = FUNC_2(VAR_2, &VAR_3->bd);
  VAR_4++;
 } while (VAR_2 != VAR_3->bd.base);
}
