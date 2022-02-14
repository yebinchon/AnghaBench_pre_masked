
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct net_device* dev; } ;
struct net_failover_info {int standby_dev; int primary_dev; } ;
struct net_device {int rx_handler_data; } ;
typedef int rx_handler_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct net_failover_info* FUNC_0 (struct net_device*) ;
 struct net_device* FUNC_1 (int ) ;

__attribute__((used)) static rx_handler_result_t FUNC_2(struct sk_buff **VAR_2)
{
 struct sk_buff *VAR_3 = *VAR_2;
 struct net_device *VAR_4 = FUNC_1(VAR_3->dev->rx_handler_data);
 struct net_failover_info *VAR_5 = FUNC_0(VAR_4);
 struct net_device *VAR_6, *VAR_7;

 VAR_6 = FUNC_1(VAR_5->primary_dev);
 VAR_7 = FUNC_1(VAR_5->standby_dev);

 if (VAR_6 && VAR_3->dev == VAR_7)
  return VAR_1;

 VAR_3->dev = VAR_4;

 return VAR_0;
}
