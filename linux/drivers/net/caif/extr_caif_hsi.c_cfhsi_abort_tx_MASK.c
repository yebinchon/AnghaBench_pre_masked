
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_6__ {scalar_t__ inactivity_timeout; } ;
struct cfhsi {int lock; TYPE_3__ cfg; int inactivity_timer; int bits; int tx_state; TYPE_2__* ndev; } ;
struct TYPE_4__ {int tx_dropped; int tx_errors; } ;
struct TYPE_5__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (struct cfhsi*) ;
 int FUNC_1 (struct cfhsi*,struct sk_buff*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct cfhsi *VAR_3)
{
 struct sk_buff *VAR_4;

 for (;;) {
  FUNC_4(&VAR_3->lock);
  VAR_4 = FUNC_0(VAR_3);
  if (!VAR_4)
   break;

  VAR_3->ndev->stats.tx_errors++;
  VAR_3->ndev->stats.tx_dropped++;
  FUNC_1(VAR_3, VAR_4, -1);
  FUNC_5(&VAR_3->lock);
  FUNC_2(VAR_4);
 }
 VAR_3->tx_state = VAR_1;
 if (!FUNC_6(VAR_0, &VAR_3->bits))
  FUNC_3(&VAR_3->inactivity_timer,
   VAR_2 + VAR_3->cfg.inactivity_timeout);
 FUNC_5(&VAR_3->lock);
}
