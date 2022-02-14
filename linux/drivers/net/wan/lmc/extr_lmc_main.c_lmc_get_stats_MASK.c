
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device_stats {int rx_missed_errors; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {TYPE_1__* lmc_device; int lmc_lock; } ;
typedef TYPE_2__ lmc_softc_t ;
struct TYPE_5__ {struct net_device_stats stats; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,char*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static struct net_device_stats *FUNC_5(struct net_device *VAR_1)
{
    lmc_softc_t *VAR_2 = FUNC_1(VAR_1);
    unsigned long VAR_3;

    FUNC_2(VAR_1, "lmc_get_stats in");

    FUNC_3(&VAR_2->lmc_lock, VAR_3);

    VAR_2->lmc_device->stats.rx_missed_errors += FUNC_0(VAR_2, VAR_0) & 0xffff;

    FUNC_4(&VAR_2->lmc_lock, VAR_3);

    FUNC_2(VAR_1, "lmc_get_stats out");

    return &VAR_2->lmc_device->stats;
}
