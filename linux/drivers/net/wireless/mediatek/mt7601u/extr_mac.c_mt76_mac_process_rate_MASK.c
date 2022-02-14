
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ieee80211_rx_status {int rate_idx; int enc_flags; int bw; int encoding; } ;


 int FUNC_0 (int ,int) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(struct ieee80211_rx_status *VAR_11, u16 VAR_12)
{
 u8 VAR_13 = FUNC_0(VAR_1, VAR_12);

 switch (FUNC_0(VAR_2, VAR_12)) {
 case 128:
  if (FUNC_1(VAR_13 >= 8))
   VAR_13 = 0;
  VAR_13 += 4;

  VAR_11->rate_idx = VAR_13;
  return;
 case 131:
  if (VAR_13 >= 8) {
   VAR_13 -= 8;
   VAR_11->enc_flags |= VAR_7;
  }

  if (FUNC_1(VAR_13 >= 4))
   VAR_13 = 0;

  VAR_11->rate_idx = VAR_13;
  return;
 case 129:
  VAR_11->enc_flags |= VAR_6;

 case 130:
  VAR_11->encoding = VAR_10;
  VAR_11->rate_idx = VAR_13;
  break;
 default:
  FUNC_1(1);
  return;
 }

 if (VAR_12 & VAR_3)
  VAR_11->enc_flags |= VAR_8;

 if (VAR_12 & VAR_4)
  VAR_11->enc_flags |= 1 << VAR_9;

 if (VAR_12 & VAR_0)
  VAR_11->bw = VAR_5;
}
