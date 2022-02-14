
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int real_num_rx_queues; } ;


 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0)
{
 return FUNC_0() % VAR_0->real_num_rx_queues;
}
