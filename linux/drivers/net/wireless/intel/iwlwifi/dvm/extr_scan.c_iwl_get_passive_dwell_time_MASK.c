
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct iwl_priv {int dummy; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct iwl_priv*,scalar_t__) ;

__attribute__((used)) static u16 FUNC_1(struct iwl_priv *VAR_4,
          enum nl80211_band VAR_5)
{
 u16 VAR_6 = (VAR_5 == VAR_3) ?
     VAR_0 + VAR_1 :
     VAR_0 + VAR_2;

 return FUNC_0(VAR_4, VAR_6);
}
