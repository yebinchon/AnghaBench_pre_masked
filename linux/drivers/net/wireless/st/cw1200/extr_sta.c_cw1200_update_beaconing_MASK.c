
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wsm_reset {int reset_statistics; int link_id; } ;
struct ieee80211_bss_conf {scalar_t__ beacon_int; } ;
struct cw1200_common {scalar_t__ mode; scalar_t__ join_status; scalar_t__ beacon_int; TYPE_1__* vif; } ;
struct TYPE_2__ {struct ieee80211_bss_conf bss_conf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct cw1200_common*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct cw1200_common*) ;
 int FUNC_3 (struct cw1200_common*,struct wsm_reset*) ;
 int FUNC_4 (struct cw1200_common*) ;

__attribute__((used)) static int FUNC_5(struct cw1200_common *VAR_3)
{
 struct ieee80211_bss_conf *VAR_4 = &VAR_3->vif->bss_conf;
 struct wsm_reset VAR_5 = {
  .link_id = 0,
  .reset_statistics = 1,
 };

 if (VAR_3->mode == VAR_2) {

  if (VAR_3->join_status != VAR_0 ||
      VAR_3->beacon_int != VAR_4->beacon_int) {
   FUNC_1("ap restarting\n");
   FUNC_2(VAR_3);
   if (VAR_3->join_status != VAR_1)
    FUNC_3(VAR_3, &VAR_5);
   VAR_3->join_status = VAR_1;
   FUNC_0(VAR_3);
   FUNC_4(VAR_3);
  } else
   FUNC_1("ap started join_status: %d\n",
     VAR_3->join_status);
 }
 return 0;
}
