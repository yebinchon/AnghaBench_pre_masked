
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ena_adapter {int num_queues; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ena_adapter* FUNC_0 (struct net_device*) ;

int FUNC_1(struct net_device *VAR_6, int VAR_7)
{
 struct ena_adapter *VAR_8 = FUNC_0(VAR_6);

 if (VAR_7 != VAR_5)
  return -VAR_4;

 return VAR_8->num_queues * (VAR_3 + VAR_2)
  + VAR_1 + VAR_0;
}
