
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* length; void* code; } ;
struct mwl8k_cmd_set_rts_threshold {TYPE_1__ header; void* threshold; void* action; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct mwl8k_cmd_set_rts_threshold*) ;
 struct mwl8k_cmd_set_rts_threshold* FUNC_2 (int,int ) ;
 int FUNC_3 (struct ieee80211_hw*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(struct ieee80211_hw *VAR_4, int VAR_5)
{
 struct mwl8k_cmd_set_rts_threshold *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_1);
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_6->header.code = FUNC_0(VAR_2);
 VAR_6->header.length = FUNC_0(sizeof(*VAR_6));
 VAR_6->action = FUNC_0(VAR_3);
 VAR_6->threshold = FUNC_0(VAR_5);

 VAR_7 = FUNC_3(VAR_4, &VAR_6->header);
 FUNC_1(VAR_6);

 return VAR_7;
}
