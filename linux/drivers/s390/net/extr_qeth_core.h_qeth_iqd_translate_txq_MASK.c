
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct net_device {int num_tx_queues; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline u16 FUNC_0(struct net_device *VAR_1, u16 VAR_2)
{
 if (VAR_2 == VAR_0)
  return VAR_1->num_tx_queues - 1;
 if (VAR_2 == VAR_1->num_tx_queues - 1)
  return VAR_0;
 return VAR_2;
}
