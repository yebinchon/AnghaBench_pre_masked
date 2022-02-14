
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device_stats {int dummy; } ;
struct typhoon {scalar_t__ card_state; struct net_device_stats stats_saved; TYPE_1__* dev; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {struct net_device_stats stats; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct net_device*,char*) ;
 struct typhoon* FUNC_1 (struct net_device*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct typhoon*) ;

__attribute__((used)) static struct net_device_stats *
FUNC_4(struct net_device *VAR_1)
{
 struct typhoon *VAR_2 = FUNC_1(VAR_1);
 struct net_device_stats *VAR_3 = &VAR_2->dev->stats;
 struct net_device_stats *VAR_4 = &VAR_2->stats_saved;

 FUNC_2();
 if(VAR_2->card_state == VAR_0)
  return VAR_4;

 if(FUNC_3(VAR_2) < 0) {
  FUNC_0(VAR_1, "error getting stats\n");
  return VAR_4;
 }

 return VAR_3;
}
