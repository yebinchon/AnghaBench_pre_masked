
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int real_num_tx_queues; } ;


 int FUNC_0 (struct net_device*,int) ;

__attribute__((used)) static inline void FUNC_1(struct net_device *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->real_num_tx_queues; VAR_1++)
  FUNC_0(VAR_0, VAR_1);
}
