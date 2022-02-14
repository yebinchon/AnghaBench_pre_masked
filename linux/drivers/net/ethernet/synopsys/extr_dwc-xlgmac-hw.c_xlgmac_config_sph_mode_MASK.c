
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xlgmac_pdata {unsigned int channel_count; scalar_t__ mac_regs; struct xlgmac_channel* channel_head; } ;
struct xlgmac_channel {int rx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct xlgmac_channel*,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int VAR_6 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct xlgmac_pdata *VAR_7)
{
 struct xlgmac_channel *VAR_8;
 unsigned int VAR_9;
 u32 VAR_10;

 VAR_8 = VAR_7->channel_head;
 for (VAR_9 = 0; VAR_9 < VAR_7->channel_count; VAR_9++, VAR_8++) {
  if (!VAR_8->rx_ring)
   break;

  VAR_10 = FUNC_2(FUNC_0(VAR_8, VAR_0));
  VAR_10 = FUNC_1(VAR_10, VAR_2,
          VAR_1, 1);
  FUNC_3(VAR_10, FUNC_0(VAR_8, VAR_0));
 }

 VAR_10 = FUNC_2(VAR_7->mac_regs + VAR_3);
 VAR_10 = FUNC_1(VAR_10, VAR_5,
         VAR_4,
    VAR_6);
 FUNC_3(VAR_10, VAR_7->mac_regs + VAR_3);
}
