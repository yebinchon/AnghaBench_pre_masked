
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_4__ {int tx_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct ag71xx_ring {int curr; int dirty; TYPE_3__* buf; int order; } ;
struct ag71xx_desc {scalar_t__ ctrl; } ;
struct ag71xx {struct net_device* ndev; struct ag71xx_ring tx_ring; } ;
struct TYPE_5__ {int * skb; scalar_t__ len; } ;
struct TYPE_6__ {TYPE_2__ tx; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ag71xx_desc*) ;
 struct ag71xx_desc* FUNC_2 (struct ag71xx_ring*,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct net_device*,size_t,size_t) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct ag71xx *VAR_0)
{
 struct ag71xx_ring *VAR_1 = &VAR_0->tx_ring;
 int VAR_2 = FUNC_0(VAR_1->order) - 1;
 u32 VAR_3 = 0, VAR_4 = 0;
 struct net_device *VAR_5 = VAR_0->ndev;

 while (VAR_1->curr != VAR_1->dirty) {
  struct ag71xx_desc *VAR_6;
  u32 VAR_7 = VAR_1->dirty & VAR_2;

  VAR_6 = FUNC_2(VAR_1, VAR_7);
  if (!FUNC_1(VAR_6)) {
   VAR_6->ctrl = 0;
   VAR_5->stats.tx_errors++;
  }

  if (VAR_1->buf[VAR_7].tx.skb) {
   VAR_3 += VAR_1->buf[VAR_7].tx.len;
   VAR_4++;
   FUNC_3(VAR_1->buf[VAR_7].tx.skb);
  }
  VAR_1->buf[VAR_7].tx.skb = ((void*)0);
  VAR_1->dirty++;
 }


 FUNC_5();

 FUNC_4(VAR_5, VAR_4, VAR_3);
}
