
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rt2x00_dev {int dummy; } ;
struct rf_channel {scalar_t__ rf2; int channel; int rf3; int rf1; } ;
struct ieee80211_conf {int dummy; } ;
struct channel_info {scalar_t__ default_power1; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rt2x00_dev*,int,int) ;
 int FUNC_1 (struct rt2x00_dev*) ;
 int FUNC_2 (struct rt2x00_dev*,int) ;
 int FUNC_3 (struct rt2x00_dev*,int,int ) ;
 int FUNC_4 (int *,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct rt2x00_dev *VAR_3,
      struct ieee80211_conf *VAR_4,
      struct rf_channel *VAR_5,
      struct channel_info *VAR_6)
{
 u8 VAR_7;

 FUNC_3(VAR_3, 8, VAR_5->rf1);
 FUNC_3(VAR_3, 9, VAR_5->rf3);
 VAR_7 = FUNC_2(VAR_3, 11);
 FUNC_4(&VAR_7, VAR_1, VAR_5->rf2);
 FUNC_3(VAR_3, 11, VAR_7);

 VAR_7 = FUNC_2(VAR_3, 49);
 if (VAR_6->default_power1 > VAR_0)
  FUNC_4(&VAR_7, VAR_2, VAR_0);
 else
  FUNC_4(&VAR_7, VAR_2, VAR_6->default_power1);
 FUNC_3(VAR_3, 49, VAR_7);

 FUNC_1(VAR_3);

 if (VAR_5->channel <= 14) {
  if (VAR_5->channel == 6)
   FUNC_0(VAR_3, 68, 0x0c);
  else
   FUNC_0(VAR_3, 68, 0x0b);

  if (VAR_5->channel >= 1 && VAR_5->channel <= 6)
   FUNC_0(VAR_3, 59, 0x0f);
  else if (VAR_5->channel >= 7 && VAR_5->channel <= 11)
   FUNC_0(VAR_3, 59, 0x0e);
  else if (VAR_5->channel >= 12 && VAR_5->channel <= 14)
   FUNC_0(VAR_3, 59, 0x0d);
 }
}
