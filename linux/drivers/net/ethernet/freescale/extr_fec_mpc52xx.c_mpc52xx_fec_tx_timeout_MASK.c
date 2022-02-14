
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_errors; } ;
struct net_device {TYPE_1__ stats; int dev; } ;
struct mpc52xx_fec_priv {int lock; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct net_device*) ;
 struct mpc52xx_fec_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_0)
{
 struct mpc52xx_fec_priv *VAR_1 = FUNC_2(VAR_0);
 unsigned long VAR_2;

 FUNC_0(&VAR_0->dev, "transmit timed out\n");

 FUNC_4(&VAR_1->lock, VAR_2);
 FUNC_1(VAR_0);
 VAR_0->stats.tx_errors++;
 FUNC_5(&VAR_1->lock, VAR_2);

 FUNC_3(VAR_0);
}
