
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ tso; } ;
struct xlgmac_pdata {unsigned int channel_count; TYPE_1__ hw_feat; struct xlgmac_channel* channel_head; } ;
struct xlgmac_channel {int tx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xlgmac_channel*,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct xlgmac_pdata *VAR_3)
{
 struct xlgmac_channel *VAR_4;
 unsigned int VAR_5;
 u32 VAR_6;

 VAR_4 = VAR_3->channel_head;
 for (VAR_5 = 0; VAR_5 < VAR_3->channel_count; VAR_5++, VAR_4++) {
  if (!VAR_4->tx_ring)
   break;

  if (VAR_3->hw_feat.tso) {
   VAR_6 = FUNC_2(FUNC_0(VAR_4, VAR_0));
   VAR_6 = FUNC_1(VAR_6, VAR_2,
           VAR_1, 1);
   FUNC_3(VAR_6, FUNC_0(VAR_4, VAR_0));
  }
 }
}
