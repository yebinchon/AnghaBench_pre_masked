
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct can_rx_offload {scalar_t__ mb_first; scalar_t__ mb_last; int inc; int mailbox_read; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,struct can_rx_offload*,unsigned int) ;

int FUNC_1(struct net_device *VAR_2, struct can_rx_offload *VAR_3)
{
 unsigned int VAR_4;

 if (VAR_3->mb_first > VAR_0 ||
     VAR_3->mb_last > VAR_0 || !VAR_3->mailbox_read)
  return -VAR_1;

 if (VAR_3->mb_first < VAR_3->mb_last) {
  VAR_3->inc = 1;
  VAR_4 = VAR_3->mb_last - VAR_3->mb_first;
 } else {
  VAR_3->inc = 0;
  VAR_4 = VAR_3->mb_first - VAR_3->mb_last;
 }

 return FUNC_0(VAR_2, VAR_3, VAR_4);
}
