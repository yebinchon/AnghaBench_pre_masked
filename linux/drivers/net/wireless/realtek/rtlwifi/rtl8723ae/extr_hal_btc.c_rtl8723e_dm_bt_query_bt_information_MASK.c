
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_2__ {int c2h_bt_info_req_sent; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (struct ieee80211_hw*,int,int,int *) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_3(VAR_3);
 u8 VAR_5[1] = {0};

 VAR_2 = 1;

 VAR_5[0] |= FUNC_0(0);

 FUNC_1(VAR_4, VAR_0, VAR_1,
  "Query Bt information, write 0x38=0x%x\n", VAR_5[0]);

 FUNC_2(VAR_3, 0x38, 1, VAR_5);
}
