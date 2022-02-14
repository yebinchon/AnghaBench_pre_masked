
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {int dummy; } ;
struct net_device {struct net_device_stats stats; } ;
struct igc_adapter {int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct igc_adapter*) ;
 struct igc_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static struct net_device_stats *FUNC_3(struct net_device *VAR_1)
{
 struct igc_adapter *VAR_2 = FUNC_1(VAR_1);

 if (!FUNC_2(VAR_0, &VAR_2->state))
  FUNC_0(VAR_2);


 return &VAR_1->stats;
}
