
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct cpmac_priv {int dev; int reset_pending; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 () ;
 struct cpmac_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*,char*) ;
 scalar_t__ FUNC_7 (struct cpmac_priv*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct net_device *VAR_0)
{
 struct cpmac_priv *VAR_1 = FUNC_5(VAR_0);

 FUNC_9(&VAR_1->lock);
 VAR_0->stats.tx_errors++;
 FUNC_10(&VAR_1->lock);
 if (FUNC_7(VAR_1) && FUNC_4())
  FUNC_6(VAR_0, "transmit timeout\n");

 FUNC_1(&VAR_1->reset_pending);
 FUNC_2();
 FUNC_3(VAR_0);
 FUNC_2();
 FUNC_0(&VAR_1->reset_pending);

 FUNC_8(VAR_1->dev);
}
