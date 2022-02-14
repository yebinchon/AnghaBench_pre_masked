
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int hw; } ;
struct rtl_priv {TYPE_1__ mac80211; } ;
struct btc_coexist {struct rtl_priv* adapter; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static u32 FUNC_1(void *VAR_0, u32 VAR_1, u32 VAR_2)
{
 struct btc_coexist *VAR_3 = (struct btc_coexist *)VAR_0;
 struct rtl_priv *VAR_4 = VAR_3->adapter;

 return FUNC_0(VAR_4->mac80211.hw, VAR_1, VAR_2);
}
