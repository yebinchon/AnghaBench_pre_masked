
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct il_priv {int dummy; } ;
struct il_channel_info {int ht40_extension_channel; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct il_channel_info* FUNC_0 (struct il_priv*,int,int ) ;
 int FUNC_1 (struct il_channel_info const*) ;

__attribute__((used)) static bool
FUNC_2(struct il_priv *VAR_4, enum nl80211_band VAR_5,
   u16 VAR_6, u8 VAR_7)
{
 const struct il_channel_info *VAR_8;

 VAR_8 = FUNC_0(VAR_4, VAR_5, VAR_6);
 if (!FUNC_1(VAR_8))
  return 0;

 if (VAR_7 == VAR_2)
  return !(VAR_8->
    ht40_extension_channel & VAR_1);
 else if (VAR_7 == VAR_3)
  return !(VAR_8->
    ht40_extension_channel & VAR_0);

 return 0;
}
