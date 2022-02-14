
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int rx_bytes; int multicast; int rx_packets; } ;
struct net_device {TYPE_1__ stats; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,char*,int) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_1, u32 VAR_2,
 int VAR_3)
{
 FUNC_0(VAR_1, "RX packet, len: %d\n", VAR_3);

 VAR_1->stats.rx_packets++;
 VAR_1->stats.rx_bytes += VAR_3;
 if (VAR_2 & VAR_0)
  VAR_1->stats.multicast++;
}
