
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int undec_sm_pwdb; scalar_t__ useramask; } ;
struct TYPE_3__ {scalar_t__ opmode; } ;
struct rtl_priv {TYPE_2__ dm; TYPE_1__ mac80211; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ieee80211_hw*,int ,int,int *) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct rtl_priv*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_1(VAR_2);


 if (VAR_3->mac80211.opmode != VAR_1)
  return;

 if (VAR_3->dm.useramask) {
  u32 VAR_4 = VAR_3->dm.undec_sm_pwdb;

  VAR_4 <<= 16;
  VAR_4 |= 0x100;


  FUNC_0(VAR_2, VAR_0, 3, (u8 *) (&VAR_4));
 } else {
  FUNC_2(VAR_3, 0x4fe,
          (u8) VAR_3->dm.undec_sm_pwdb);
 }
}
