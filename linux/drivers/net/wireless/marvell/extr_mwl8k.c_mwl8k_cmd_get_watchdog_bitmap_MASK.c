
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {void* length; void* code; } ;
struct mwl8k_cmd_get_watchdog_bitmap {int bitmap; TYPE_1__ header; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct mwl8k_cmd_get_watchdog_bitmap*) ;
 struct mwl8k_cmd_get_watchdog_bitmap* FUNC_2 (int,int ) ;
 int FUNC_3 (struct ieee80211_hw*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_3, u8 *VAR_4)
{
 struct mwl8k_cmd_get_watchdog_bitmap *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_5->header.code = FUNC_0(VAR_2);
 VAR_5->header.length = FUNC_0(sizeof(*VAR_5));

 VAR_6 = FUNC_3(VAR_3, &VAR_5->header);
 if (!VAR_6)
  *VAR_4 = VAR_5->bitmap;

 FUNC_1(VAR_5);

 return VAR_6;
}
