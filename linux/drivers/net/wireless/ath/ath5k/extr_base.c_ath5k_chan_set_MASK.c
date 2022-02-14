
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cfg80211_chan_def {int width; TYPE_2__* chan; } ;
struct ath5k_hw {int ah_bwmode; TYPE_1__* curchan; } ;
struct TYPE_4__ {int center_freq; } ;
struct TYPE_3__ {int center_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath5k_hw*,int ,char*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_1 (int) ;
 int FUNC_2 (struct ath5k_hw*,TYPE_2__*,int) ;

int
FUNC_3(struct ath5k_hw *VAR_5, struct cfg80211_chan_def *VAR_6)
{
 FUNC_0(VAR_5, VAR_3,
    "channel set, resetting (%u -> %u MHz)\n",
    VAR_5->curchan->center_freq, VAR_6->chan->center_freq);

 switch (VAR_6->width) {
 case 130:
 case 129:
  VAR_5->ah_bwmode = VAR_2;
  break;
 case 128:
  VAR_5->ah_bwmode = VAR_1;
  break;
 case 131:
  VAR_5->ah_bwmode = VAR_0;
  break;
 default:
  FUNC_1(1);
  return -VAR_4;
 }







 return FUNC_2(VAR_5, VAR_6->chan, 1);
}
