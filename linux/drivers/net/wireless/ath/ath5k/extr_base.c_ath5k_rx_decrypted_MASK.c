
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int* data; unsigned int len; } ;
struct ieee80211_hdr {int frame_control; } ;
struct ath_common {int keymap; } ;
struct ath5k_rx_status {int rs_status; scalar_t__ rs_keyix; } ;
struct ath5k_hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 struct ath_common* FUNC_0 (struct ath5k_hw*) ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (unsigned int,int ) ;

__attribute__((used)) static unsigned int
FUNC_4(struct ath5k_hw *VAR_3, struct sk_buff *VAR_4,
     struct ath5k_rx_status *VAR_5)
{
 struct ath_common *VAR_6 = FUNC_0(VAR_3);
 struct ieee80211_hdr *VAR_7 = (void *)VAR_4->data;
 unsigned int VAR_8, VAR_9;

 if (!(VAR_5->rs_status & VAR_0) &&
   VAR_5->rs_keyix != VAR_1)
  return VAR_2;




 VAR_9 = FUNC_2(VAR_7->frame_control);
 if (FUNC_1(VAR_7->frame_control) &&
     !(VAR_5->rs_status & VAR_0) &&
     VAR_4->len >= VAR_9 + 4) {
  VAR_8 = VAR_4->data[VAR_9 + 3] >> 6;

  if (FUNC_3(VAR_8, VAR_6->keymap))
   return VAR_2;
 }

 return 0;
}
