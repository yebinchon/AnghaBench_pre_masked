
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int rx_bytes; int rx_packets; } ;
struct net_device {TYPE_1__ stats; } ;
struct can_frame {scalar_t__ can_dlc; } ;


 struct sk_buff* FUNC_0 (struct net_device*,struct can_frame**) ;
 int FUNC_1 (struct net_device*,struct can_frame*,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0, int VAR_1, u32 VAR_2)
{
 struct sk_buff *VAR_3;
 struct can_frame *VAR_4;

 if (VAR_1 == 0)
  return 0;

 VAR_3 = FUNC_0(VAR_0, &VAR_4);
 if (FUNC_3(!VAR_3))
  return 0;

 FUNC_1(VAR_0, VAR_4, VAR_2);

 VAR_0->stats.rx_packets++;
 VAR_0->stats.rx_bytes += VAR_4->can_dlc;
 FUNC_2(VAR_3);

 return 1;
}
