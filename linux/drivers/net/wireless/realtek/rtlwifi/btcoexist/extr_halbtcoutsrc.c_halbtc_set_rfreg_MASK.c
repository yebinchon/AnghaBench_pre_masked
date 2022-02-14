
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int hw; } ;
struct rtl_priv {TYPE_1__ mac80211; } ;
struct btc_coexist {struct rtl_priv* adapter; } ;


 int FUNC_0 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, u8 VAR_1, u32 VAR_2,
        u32 VAR_3, u32 VAR_4)
{
 struct btc_coexist *VAR_5 = (struct btc_coexist *)VAR_0;
 struct rtl_priv *VAR_6 = VAR_5->adapter;

 FUNC_0(VAR_6->mac80211.hw, VAR_1, VAR_2, VAR_3, VAR_4);
}
