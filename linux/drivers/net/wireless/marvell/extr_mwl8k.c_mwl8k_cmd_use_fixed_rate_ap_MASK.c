
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* length; void* code; } ;
struct mwl8k_cmd_use_fixed_rate_ap {int multicast_rate; int management_rate; TYPE_1__ header; int action; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mwl8k_cmd_use_fixed_rate_ap*) ;
 struct mwl8k_cmd_use_fixed_rate_ap* FUNC_3 (int,int ) ;
 int FUNC_4 (struct ieee80211_hw*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_5(struct ieee80211_hw *VAR_4, int VAR_5, int VAR_6)
{
 struct mwl8k_cmd_use_fixed_rate_ap *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_1);
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 VAR_7->header.code = FUNC_0(VAR_2);
 VAR_7->header.length = FUNC_0(sizeof(*VAR_7));
 VAR_7->action = FUNC_1(VAR_3);
 VAR_7->multicast_rate = VAR_5;
 VAR_7->management_rate = VAR_6;

 VAR_8 = FUNC_4(VAR_4, &VAR_7->header);
 FUNC_2(VAR_7);

 return VAR_8;
}
