
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlgmac_hw_ops {int (* enable_int ) (struct xlgmac_channel*,int) ;} ;
struct xlgmac_pdata {unsigned int channel_count; struct xlgmac_channel* channel_head; struct xlgmac_hw_ops hw_ops; } ;
struct xlgmac_channel {scalar_t__ rx_ring; scalar_t__ tx_ring; } ;
typedef enum xlgmac_int { ____Placeholder_xlgmac_int } xlgmac_int ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xlgmac_channel*,int) ;

__attribute__((used)) static void FUNC_1(struct xlgmac_pdata *VAR_3)
{
 struct xlgmac_hw_ops *VAR_4 = &VAR_3->hw_ops;
 struct xlgmac_channel *VAR_5;
 enum xlgmac_int VAR_6;
 unsigned int VAR_7;

 VAR_5 = VAR_3->channel_head;
 for (VAR_7 = 0; VAR_7 < VAR_3->channel_count; VAR_7++, VAR_5++) {
  if (VAR_5->tx_ring && VAR_5->rx_ring)
   VAR_6 = VAR_2;
  else if (VAR_5->tx_ring)
   VAR_6 = VAR_1;
  else if (VAR_5->rx_ring)
   VAR_6 = VAR_0;
  else
   continue;

  VAR_4->enable_int(VAR_5, VAR_6);
 }
}
