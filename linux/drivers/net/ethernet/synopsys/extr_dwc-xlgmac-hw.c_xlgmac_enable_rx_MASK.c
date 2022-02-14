
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlgmac_pdata {unsigned int channel_count; unsigned int rx_q_count; scalar_t__ mac_regs; struct xlgmac_channel* channel_head; } ;
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
 unsigned int FUNC_1 (unsigned int,int ,int ,int) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct xlgmac_pdata *VAR_13)
{
 struct xlgmac_channel *VAR_14;
 unsigned int VAR_15, VAR_16;


 VAR_14 = VAR_13->channel_head;
 for (VAR_16 = 0; VAR_16 < VAR_13->channel_count; VAR_16++, VAR_14++) {
  if (!VAR_14->rx_ring)
   break;

  VAR_15 = FUNC_2(FUNC_0(VAR_14, VAR_0));
  VAR_15 = FUNC_1(VAR_15, VAR_2,
          VAR_1, 1);
  FUNC_3(VAR_15, FUNC_0(VAR_14, VAR_0));
 }


 VAR_15 = 0;
 for (VAR_16 = 0; VAR_16 < VAR_13->rx_q_count; VAR_16++)
  VAR_15 |= (0x02 << (VAR_16 << 1));
 FUNC_3(VAR_15, VAR_13->mac_regs + VAR_12);


 VAR_15 = FUNC_2(VAR_13->mac_regs + VAR_3);
 VAR_15 = FUNC_1(VAR_15, VAR_9,
         VAR_8, 1);
 VAR_15 = FUNC_1(VAR_15, VAR_7,
         VAR_6, 1);
 VAR_15 = FUNC_1(VAR_15, VAR_5,
         VAR_4, 1);
 VAR_15 = FUNC_1(VAR_15, VAR_11,
         VAR_10, 1);
 FUNC_3(VAR_15, VAR_13->mac_regs + VAR_3);
}
