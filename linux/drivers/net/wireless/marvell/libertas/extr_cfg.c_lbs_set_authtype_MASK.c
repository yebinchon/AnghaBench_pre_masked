
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lbs_private {int dummy; } ;
struct TYPE_2__ {int size; } ;
struct cmd_ds_802_11_authenticate {int authtype; int bssid; TYPE_1__ hdr; } ;
struct cfg80211_connect_params {int auth_type; int bssid; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct lbs_private*,int ,struct cmd_ds_802_11_authenticate*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct cmd_ds_802_11_authenticate*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct lbs_private *VAR_2,
       struct cfg80211_connect_params *VAR_3)
{
 struct cmd_ds_802_11_authenticate VAR_4;
 int VAR_5;
 FUNC_4(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.hdr.size = FUNC_0(sizeof(VAR_4));
 if (VAR_3->bssid)
  FUNC_3(VAR_4.bssid, VAR_3->bssid, VAR_1);

 VAR_5 = FUNC_1(VAR_3->auth_type);
 if (VAR_5 < 0)
  goto done;

 VAR_4.authtype = VAR_5;
 VAR_5 = FUNC_2(VAR_2, VAR_0, &VAR_4);

 done:
 return VAR_5;
}
