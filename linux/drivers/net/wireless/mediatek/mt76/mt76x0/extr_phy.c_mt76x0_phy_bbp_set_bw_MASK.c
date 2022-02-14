
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt76x02_dev {int dummy; } ;
typedef enum nl80211_chan_width { ____Placeholder_nl80211_chan_width } nl80211_chan_width ;


 int VAR_0 ;
 int FUNC_0 (struct mt76x02_dev*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct mt76x02_dev *VAR_1, enum nl80211_chan_width VAR_2)
{
 enum { BW_20 = 0, BW_40 = 1, BW_80 = 2, BW_10 = 4};
 int VAR_3;

 switch (VAR_2) {
 default:
 case 132:
 case 133:
  VAR_3 = BW_20;
  break;
 case 131:
  VAR_3 = BW_40;
  break;
 case 129:
  VAR_3 = BW_80;
  break;
 case 135:
  VAR_3 = BW_10;
  break;
 case 128:
 case 134:
 case 130:

  return;
 }

 FUNC_0(VAR_1, VAR_0, VAR_3);
}
