
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct wlandevice {TYPE_2__* netdev; } ;
struct TYPE_3__ {int tx_packets; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int FUNC_0 (char*,int ) ;

void FUNC_1(struct wlandevice *VAR_0, u16 VAR_1)
{
 FUNC_0("Tx Complete, status=0x%04x\n", VAR_1);

 VAR_0->netdev->stats.tx_packets++;
}
