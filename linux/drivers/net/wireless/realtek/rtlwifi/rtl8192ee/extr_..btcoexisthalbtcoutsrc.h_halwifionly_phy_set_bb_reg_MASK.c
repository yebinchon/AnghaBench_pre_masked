
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wifi_only_cfg {scalar_t__ adapter; } ;
struct rtl_priv {int hw; } ;


 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static inline
void FUNC_1(struct wifi_only_cfg *VAR_0,
    u32 VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct rtl_priv *VAR_4 = (struct rtl_priv *)VAR_0->adapter;

 FUNC_0(VAR_4->hw, VAR_1, VAR_2, VAR_3);
}
