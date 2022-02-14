
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xlgmac_pdata {unsigned int channel_count; unsigned int tx_q_count; struct xlgmac_channel* channel_head; scalar_t__ mac_regs; } ;
struct xlgmac_channel {int tx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct xlgmac_channel*,int ) ;
 scalar_t__ FUNC_1 (struct xlgmac_pdata*,unsigned int,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (struct xlgmac_pdata*,struct xlgmac_channel*) ;

__attribute__((used)) static void FUNC_6(struct xlgmac_pdata *VAR_9)
{
 struct xlgmac_channel *VAR_10;
 unsigned int VAR_11;
 u32 VAR_12;


 VAR_10 = VAR_9->channel_head;
 for (VAR_11 = 0; VAR_11 < VAR_9->channel_count; VAR_11++, VAR_10++) {
  if (!VAR_10->tx_ring)
   break;

  FUNC_5(VAR_9, VAR_10);
 }


 VAR_12 = FUNC_3(VAR_9->mac_regs + VAR_3);
 VAR_12 = FUNC_2(VAR_12, VAR_5,
         VAR_4, 0);
 FUNC_4(VAR_12, VAR_9->mac_regs + VAR_3);


 for (VAR_11 = 0; VAR_11 < VAR_9->tx_q_count; VAR_11++) {
  VAR_12 = FUNC_3(FUNC_1(VAR_9, VAR_11, VAR_6));
  VAR_12 = FUNC_2(VAR_12, VAR_8,
          VAR_7, 0);
  FUNC_4(VAR_12, FUNC_1(VAR_9, VAR_11, VAR_6));
 }


 VAR_10 = VAR_9->channel_head;
 for (VAR_11 = 0; VAR_11 < VAR_9->channel_count; VAR_11++, VAR_10++) {
  if (!VAR_10->tx_ring)
   break;

  VAR_12 = FUNC_3(FUNC_0(VAR_10, VAR_0));
  VAR_12 = FUNC_2(VAR_12, VAR_2,
          VAR_1, 0);
  FUNC_4(VAR_12, FUNC_0(VAR_10, VAR_0));
 }
}
