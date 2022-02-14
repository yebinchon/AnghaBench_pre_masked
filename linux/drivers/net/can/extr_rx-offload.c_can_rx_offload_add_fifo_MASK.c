
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct can_rx_offload {int mailbox_read; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,struct can_rx_offload*,unsigned int) ;

int FUNC_1(struct net_device *VAR_1, struct can_rx_offload *VAR_2, unsigned int VAR_3)
{
 if (!VAR_2->mailbox_read)
  return -VAR_0;

 return FUNC_0(VAR_1, VAR_2, VAR_3);
}
