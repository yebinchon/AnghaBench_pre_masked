
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ link_state; scalar_t__ vendor; } ;
struct dig_t {int last_min_undec_pwdb_for_dm; int min_undec_pwdb_for_dm; } ;
struct rtl_priv {TYPE_1__ mac80211; struct dig_t dm_digtable; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (struct rtl_priv*,int ) ;
 int FUNC_2 (struct rtl_priv*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct rtl_priv *VAR_5)
{
 struct dig_t *VAR_6 = &VAR_5->dm_digtable;

 if ((VAR_5->mac80211.link_state >= VAR_2) &&
     (VAR_5->mac80211.vendor == VAR_3)) {
  FUNC_0(VAR_5, VAR_0, VAR_1, "IOT_PEER = CISCO\n");
  if (VAR_6->last_min_undec_pwdb_for_dm >= 50
      && VAR_6->min_undec_pwdb_for_dm < 50) {
   FUNC_2(VAR_5, VAR_4, 0x00);
   FUNC_0(VAR_5, VAR_0, VAR_1,
     "Early Mode Off\n");
  } else if (VAR_6->last_min_undec_pwdb_for_dm <= 55 &&
      VAR_6->min_undec_pwdb_for_dm > 55) {
   FUNC_2(VAR_5, VAR_4, 0x0f);
   FUNC_0(VAR_5, VAR_0, VAR_1,
     "Early Mode On\n");
  }
 } else if (!(FUNC_1(VAR_5, VAR_4) & 0xf)) {
  FUNC_2(VAR_5, VAR_4, 0x0f);
  FUNC_0(VAR_5, VAR_0, VAR_1, "Early Mode On\n");
 }
}
