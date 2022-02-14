
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlgmac_pdata {unsigned int channel_count; struct xlgmac_channel* channel_head; } ;
struct xlgmac_channel {int rx_ring; int tx_ring; } ;


 int FUNC_0 (struct xlgmac_pdata*,int ) ;

__attribute__((used)) static void FUNC_1(struct xlgmac_pdata *VAR_0)
{
 struct xlgmac_channel *VAR_1;
 unsigned int VAR_2;

 if (!VAR_0->channel_head)
  return;

 VAR_1 = VAR_0->channel_head;
 for (VAR_2 = 0; VAR_2 < VAR_0->channel_count; VAR_2++, VAR_1++) {
  FUNC_0(VAR_0, VAR_1->tx_ring);
  FUNC_0(VAR_0, VAR_1->rx_ring);
 }
}
