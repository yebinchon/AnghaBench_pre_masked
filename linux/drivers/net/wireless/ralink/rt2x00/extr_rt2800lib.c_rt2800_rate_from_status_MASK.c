
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct skb_frame_desc {int tx_rate_idx; int tx_rate_flags; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct skb_frame_desc *VAR_9,
        u32 VAR_10, enum nl80211_band VAR_11)
{
 u8 VAR_12 = 0;
 u8 VAR_13 = FUNC_0(VAR_10, VAR_6);

 switch (FUNC_0(VAR_10, VAR_7)) {
 case 130:
  VAR_12 |= VAR_1;

 case 129:
  VAR_12 |= VAR_2;
  break;
 case 128:
  if (VAR_11 == VAR_4)
   VAR_13 += 4;
  break;
 case 131:
  if (VAR_13 >= 8)
   VAR_13 -= 8;
  break;
 }

 if (FUNC_0(VAR_10, VAR_5))
  VAR_12 |= VAR_0;

 if (FUNC_0(VAR_10, VAR_8))
  VAR_12 |= VAR_3;

 VAR_9->tx_rate_idx = VAR_13;
 VAR_9->tx_rate_flags = VAR_12;
}
