
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int irq; } ;
struct TYPE_2__ {int * echo_skb; scalar_t__ echo_skb_max; int state; } ;
struct grcan_priv {int closing; int txdlc; int echo_skb; TYPE_1__ can; int lock; int rr_timer; int hang_timer; scalar_t__ need_txbug_workaround; int napi; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 struct grcan_priv* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_1)
{
 struct grcan_priv *VAR_2 = FUNC_7(VAR_1);
 unsigned long VAR_3;

 FUNC_6(&VAR_2->napi);

 FUNC_9(&VAR_2->lock, VAR_3);

 VAR_2->closing = 1;
 if (VAR_2->need_txbug_workaround) {
  FUNC_1(&VAR_2->hang_timer);
  FUNC_1(&VAR_2->rr_timer);
 }
 FUNC_8(VAR_1);
 FUNC_4(VAR_1);
 VAR_2->can.state = VAR_0;

 FUNC_10(&VAR_2->lock, VAR_3);

 FUNC_2(VAR_1->irq, VAR_1);
 FUNC_0(VAR_1);

 FUNC_3(VAR_1);
 VAR_2->can.echo_skb_max = 0;
 VAR_2->can.echo_skb = ((void*)0);
 FUNC_5(VAR_2->echo_skb);
 FUNC_5(VAR_2->txdlc);

 return 0;
}
