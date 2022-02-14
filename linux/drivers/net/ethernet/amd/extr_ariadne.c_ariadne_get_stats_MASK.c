
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {int rx_missed_errors; } ;
struct net_device {struct net_device_stats stats; scalar_t__ base_addr; } ;
struct Am79C960 {short RAP; int RDP; } ;


 short VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static struct net_device_stats *FUNC_3(struct net_device *VAR_1)
{
 volatile struct Am79C960 *VAR_2 = (struct Am79C960 *)VAR_1->base_addr;
 short VAR_3;
 unsigned long VAR_4;

 FUNC_1(VAR_4);
 VAR_3 = VAR_2->RAP;
 VAR_2->RAP = VAR_0;
 VAR_1->stats.rx_missed_errors = FUNC_2(VAR_2->RDP);
 VAR_2->RAP = VAR_3;
 FUNC_0(VAR_4);

 return &VAR_1->stats;
}
