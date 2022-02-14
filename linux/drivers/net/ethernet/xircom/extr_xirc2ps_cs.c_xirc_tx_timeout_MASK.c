
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct local_info {int tx_timeout_task; } ;


 int FUNC_0 (struct net_device*,char*) ;
 struct local_info* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct net_device *VAR_0)
{
    struct local_info *VAR_1 = FUNC_1(VAR_0);
    VAR_0->stats.tx_errors++;
    FUNC_0(VAR_0, "transmit timed out\n");
    FUNC_2(&VAR_1->tx_timeout_task);
}
