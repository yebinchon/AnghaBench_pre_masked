
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct net_device_stats {int rx_missed_errors; } ;
struct net_device {int base_addr; } ;
struct de4x5_private {struct net_device_stats stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct de4x5_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static struct net_device_stats *
FUNC_2(struct net_device *VAR_3)
{
    struct de4x5_private *VAR_4 = FUNC_1(VAR_3);
    u_long VAR_5 = VAR_3->base_addr;

    VAR_4->stats.rx_missed_errors = (int)(FUNC_0(VAR_0) & (VAR_2 | VAR_1));

    return &VAR_4->stats;
}
