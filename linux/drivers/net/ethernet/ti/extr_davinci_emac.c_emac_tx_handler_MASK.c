
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {struct net_device* dev; } ;
struct TYPE_2__ {int tx_bytes; int tx_packets; } ;
struct net_device {TYPE_1__ stats; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_0, int VAR_1, int VAR_2)
{
 struct sk_buff *VAR_3 = VAR_0;
 struct net_device *VAR_4 = VAR_3->dev;




 if (FUNC_3(FUNC_1(VAR_4)))
  FUNC_2(VAR_4);
 VAR_4->stats.tx_packets++;
 VAR_4->stats.tx_bytes += VAR_1;
 FUNC_0(VAR_3);
}
