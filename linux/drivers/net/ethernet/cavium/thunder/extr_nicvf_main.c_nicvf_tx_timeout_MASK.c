
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nicvf {int reset_task; TYPE_1__* drv_stats; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int tx_timeout; } ;


 struct nicvf* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct nicvf*,int ,struct net_device*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1)
{
 struct nicvf *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_2, VAR_0, VAR_1, "Transmit timed out, resetting\n");

 FUNC_3(VAR_2->drv_stats->tx_timeout);
 FUNC_2(&VAR_2->reset_task);
}
