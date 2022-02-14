
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsc911x_data {int dummy; } ;
struct net_device_stats {int rx_dropped; } ;
struct net_device {struct net_device_stats stats; } ;


 int VAR_0 ;
 struct smsc911x_data* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct smsc911x_data*,int ) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static struct net_device_stats *FUNC_3(struct net_device *VAR_1)
{
 struct smsc911x_data *VAR_2 = FUNC_0(VAR_1);
 FUNC_2(VAR_1);
 VAR_1->stats.rx_dropped += FUNC_1(VAR_2, VAR_0);
 return &VAR_1->stats;
}
