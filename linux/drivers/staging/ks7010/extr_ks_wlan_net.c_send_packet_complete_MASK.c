
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct TYPE_2__ {int tx_bytes; int tx_packets; } ;
struct ks_wlan_private {TYPE_1__ nstats; int net_dev; } ;


 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct ks_wlan_private *VAR_0, struct sk_buff *VAR_1)
{
 VAR_0->nstats.tx_packets++;

 if (FUNC_1(VAR_0->net_dev))
  FUNC_2(VAR_0->net_dev);

 if (VAR_1) {
  VAR_0->nstats.tx_bytes += VAR_1->len;
  FUNC_0(VAR_1);
 }
}
