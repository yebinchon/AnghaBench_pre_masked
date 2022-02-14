
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcnet32_private {int lock; TYPE_1__* a; } ;
struct net_device_stats {int rx_missed_errors; } ;
struct net_device {unsigned long base_addr; struct net_device_stats stats; } ;
struct TYPE_2__ {int (* read_csr ) (unsigned long,int) ;} ;


 struct pcnet32_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (unsigned long,int) ;

__attribute__((used)) static struct net_device_stats *FUNC_4(struct net_device *VAR_0)
{
 struct pcnet32_private *VAR_1 = FUNC_0(VAR_0);
 unsigned long VAR_2 = VAR_0->base_addr;
 unsigned long VAR_3;

 FUNC_1(&VAR_1->lock, VAR_3);
 VAR_0->stats.rx_missed_errors = VAR_1->a->read_csr(VAR_2, 112);
 FUNC_2(&VAR_1->lock, VAR_3);

 return &VAR_0->stats;
}
