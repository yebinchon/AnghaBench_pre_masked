
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct adapter {int hw_init_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct net_device*) ;

int FUNC_4(struct net_device *VAR_1)
{
 int VAR_2;
 struct adapter *VAR_3 = (struct adapter *)FUNC_3(VAR_1);

 if (FUNC_1(&VAR_3->hw_init_mutex))
  return -VAR_0;
 VAR_2 = FUNC_0(VAR_1);
 FUNC_2(&VAR_3->hw_init_mutex);
 return VAR_2;
}
