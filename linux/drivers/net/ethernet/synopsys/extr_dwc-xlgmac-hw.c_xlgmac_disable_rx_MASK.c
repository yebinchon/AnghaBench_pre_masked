
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xlgmac_pdata {unsigned int rx_q_count; unsigned int channel_count; struct xlgmac_channel* channel_head; scalar_t__ mac_regs; } ;
struct xlgmac_channel {int rx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_0 (struct xlgmac_channel*,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct xlgmac_pdata*,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct xlgmac_pdata *VAR_13)
{
 struct xlgmac_channel *VAR_14;
 unsigned int VAR_15;
 u32 VAR_16;


 VAR_16 = FUNC_2(VAR_13->mac_regs + VAR_3);
 VAR_16 = FUNC_1(VAR_16, VAR_9,
         VAR_8, 0);
 VAR_16 = FUNC_1(VAR_16, VAR_7,
         VAR_6, 0);
 VAR_16 = FUNC_1(VAR_16, VAR_5,
         VAR_4, 0);
 VAR_16 = FUNC_1(VAR_16, VAR_11,
         VAR_10, 0);
 FUNC_3(VAR_16, VAR_13->mac_regs + VAR_3);


 for (VAR_15 = 0; VAR_15 < VAR_13->rx_q_count; VAR_15++)
  FUNC_4(VAR_13, VAR_15);


 FUNC_3(0, VAR_13->mac_regs + VAR_12);


 VAR_14 = VAR_13->channel_head;
 for (VAR_15 = 0; VAR_15 < VAR_13->channel_count; VAR_15++, VAR_14++) {
  if (!VAR_14->rx_ring)
   break;

  VAR_16 = FUNC_2(FUNC_0(VAR_14, VAR_0));
  VAR_16 = FUNC_1(VAR_16, VAR_2,
          VAR_1, 0);
  FUNC_3(VAR_16, FUNC_0(VAR_14, VAR_0));
 }
}
