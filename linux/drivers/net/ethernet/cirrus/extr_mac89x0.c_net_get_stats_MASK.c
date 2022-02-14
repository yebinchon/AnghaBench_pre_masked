
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {int rx_missed_errors; int collisions; } ;
struct net_device {struct net_device_stats stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct net_device*,int ) ;

__attribute__((used)) static struct net_device_stats *
FUNC_3(struct net_device *VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(VAR_3);

 VAR_2->stats.rx_missed_errors += (FUNC_2(VAR_2, VAR_0) >> 6);
 VAR_2->stats.collisions += (FUNC_2(VAR_2, VAR_1) >> 6);
 FUNC_0(VAR_3);

 return &VAR_2->stats;
}
