
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int hw; } ;
struct rtl_priv {TYPE_1__ mac80211; } ;
struct btc_coexist {struct rtl_priv* adapter; } ;


 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, u32 VAR_1, u32 VAR_2,
        u32 VAR_3)
{
 struct btc_coexist *VAR_4 = (struct btc_coexist *)VAR_0;
 struct rtl_priv *VAR_5 = VAR_4->adapter;

 FUNC_0(VAR_5->mac80211.hw, VAR_1, VAR_2, VAR_3);
}
