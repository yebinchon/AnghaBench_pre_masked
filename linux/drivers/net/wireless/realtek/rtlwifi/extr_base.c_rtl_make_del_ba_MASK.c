
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct rtl_efuse {int * dev_addr; } ;
struct TYPE_5__ {void* reason_code; void* params; int action_code; } ;
struct TYPE_6__ {TYPE_1__ delba; } ;
struct TYPE_7__ {TYPE_2__ u; int category; } ;
struct TYPE_8__ {TYPE_3__ action; } ;
struct ieee80211_mgmt {TYPE_4__ u; void* frame_control; int bssid; int da; int sa; } ;
struct ieee80211_hw {int extra_tx_headroom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int) ;
 struct sk_buff* FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int ) ;
 struct rtl_efuse* FUNC_3 (int ) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 struct ieee80211_mgmt* FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*,int ) ;

struct sk_buff *FUNC_7(struct ieee80211_hw *VAR_6,
    u8 *VAR_7, u8 *VAR_8, u16 VAR_9)
{
 struct rtl_efuse *VAR_10 = FUNC_3(FUNC_4(VAR_6));
 struct sk_buff *VAR_11;
 struct ieee80211_mgmt *VAR_12;
 u16 VAR_13;


 VAR_11 = FUNC_1(34 + VAR_6->extra_tx_headroom);
 if (!VAR_11)
  return ((void*)0);

 FUNC_6(VAR_11, VAR_6->extra_tx_headroom);
 VAR_12 = FUNC_5(VAR_11, 34);
 FUNC_2(VAR_12->sa, VAR_7, VAR_0);
 FUNC_2(VAR_12->da, VAR_10->dev_addr, VAR_0);
 FUNC_2(VAR_12->bssid, VAR_8, VAR_0);
 VAR_12->frame_control = FUNC_0(VAR_1 |
        VAR_2);
 VAR_12->u.action.category = VAR_4;
 VAR_12->u.action.u.delba.action_code = VAR_3;
 VAR_13 = (u16)(1 << 11);
 VAR_13 |= (u16)(VAR_9 << 12);

 VAR_12->u.action.u.delba.params = FUNC_0(VAR_13);
 VAR_12->u.action.u.delba.reason_code =
  FUNC_0(VAR_5);

 return VAR_11;
}
