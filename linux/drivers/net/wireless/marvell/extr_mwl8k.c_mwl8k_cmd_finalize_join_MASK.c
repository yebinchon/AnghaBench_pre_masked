
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* length; void* code; } ;
struct mwl8k_cmd_finalize_join {TYPE_2__ header; int beacon_data; int sleep_interval; } ;
struct TYPE_3__ {int beacon; } ;
struct ieee80211_mgmt {TYPE_1__ u; int frame_control; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mwl8k_cmd_finalize_join*) ;
 struct mwl8k_cmd_finalize_join* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int *,int) ;
 int FUNC_6 (struct ieee80211_hw*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_7(struct ieee80211_hw *VAR_4, void *VAR_5,
       int VAR_6, int VAR_7)
{
 struct mwl8k_cmd_finalize_join *VAR_8;
 struct ieee80211_mgmt *VAR_9 = VAR_5;
 int VAR_10;
 int VAR_11;

 VAR_8 = FUNC_4(sizeof(*VAR_8), VAR_1);
 if (VAR_8 == ((void*)0))
  return -VAR_0;

 VAR_8->header.code = FUNC_0(VAR_2);
 VAR_8->header.length = FUNC_0(sizeof(*VAR_8));
 VAR_8->sleep_interval = FUNC_1(VAR_7 ? VAR_7 : 1);

 VAR_10 = VAR_6 - FUNC_2(VAR_9->frame_control);
 if (VAR_10 < 0)
  VAR_10 = 0;
 else if (VAR_10 > VAR_3)
  VAR_10 = VAR_3;

 FUNC_5(VAR_8->beacon_data, &VAR_9->u.beacon, VAR_10);

 VAR_11 = FUNC_6(VAR_4, &VAR_8->header);
 FUNC_3(VAR_8);

 return VAR_11;
}
