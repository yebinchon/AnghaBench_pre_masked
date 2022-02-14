
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_errors; } ;
struct net_device {TYPE_1__ stats; int dev; } ;


 int FUNC_0 (int *,char*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0)
{

 FUNC_0(&VAR_0->dev, "Tx timed out.\n");


 VAR_0->stats.tx_errors++;
}
