
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* length; void* code; } ;
struct mwl8k_cmd_set_pre_scan {TYPE_1__ header; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct mwl8k_cmd_set_pre_scan*) ;
 struct mwl8k_cmd_set_pre_scan* FUNC_2 (int,int ) ;
 int FUNC_3 (struct ieee80211_hw*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_3)
{
 struct mwl8k_cmd_set_pre_scan *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_1);
 if (VAR_4 == ((void*)0))
  return -VAR_0;

 VAR_4->header.code = FUNC_0(VAR_2);
 VAR_4->header.length = FUNC_0(sizeof(*VAR_4));

 VAR_5 = FUNC_3(VAR_3, &VAR_4->header);
 FUNC_1(VAR_4);

 return VAR_5;
}
