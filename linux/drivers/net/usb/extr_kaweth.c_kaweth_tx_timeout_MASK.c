
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_errors; } ;
struct net_device {TYPE_1__ stats; int name; int dev; } ;
struct kaweth_device {int tx_urb; } ;


 int FUNC_0 (int *,char*,int ) ;
 struct kaweth_device* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0)
{
 struct kaweth_device *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_0->dev, "%s: Tx timed out. Resetting.\n", VAR_0->name);
 VAR_0->stats.tx_errors++;
 FUNC_2(VAR_0);

 FUNC_3(VAR_1->tx_urb);
}
