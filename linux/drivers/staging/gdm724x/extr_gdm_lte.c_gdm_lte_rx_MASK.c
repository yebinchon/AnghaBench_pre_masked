
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct TYPE_2__ {int rx_bytes; int rx_packets; int rx_dropped; } ;
struct nic {TYPE_1__ stats; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_2, struct nic *VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2);
 if (VAR_5 == VAR_1) {
  VAR_3->stats.rx_dropped++;
 } else {
  VAR_3->stats.rx_packets++;
  VAR_3->stats.rx_bytes += VAR_2->len + VAR_0;
 }

 return 0;
}
