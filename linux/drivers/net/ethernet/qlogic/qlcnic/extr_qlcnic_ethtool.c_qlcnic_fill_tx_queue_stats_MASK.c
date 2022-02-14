
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int tx_bytes; int xmit_finished; int xmit_called; int xmit_off; int xmit_on; } ;
struct qlcnic_host_tx_ring {TYPE_1__ tx_stats; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static u64 *FUNC_1(u64 *VAR_0, void *VAR_1)
{
 struct qlcnic_host_tx_ring *VAR_2;

 VAR_2 = (struct qlcnic_host_tx_ring *)VAR_1;

 *VAR_0++ = FUNC_0(VAR_2->tx_stats.xmit_on);
 *VAR_0++ = FUNC_0(VAR_2->tx_stats.xmit_off);
 *VAR_0++ = FUNC_0(VAR_2->tx_stats.xmit_called);
 *VAR_0++ = FUNC_0(VAR_2->tx_stats.xmit_finished);
 *VAR_0++ = FUNC_0(VAR_2->tx_stats.tx_bytes);

 return VAR_0;
}
