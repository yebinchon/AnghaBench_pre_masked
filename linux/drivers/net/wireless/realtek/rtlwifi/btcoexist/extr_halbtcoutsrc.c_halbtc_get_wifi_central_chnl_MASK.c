
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_phy {scalar_t__ current_channel; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct btc_coexist {struct rtl_priv* adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int) ;

__attribute__((used)) static u8 FUNC_1(struct btc_coexist *VAR_2)
{
 struct rtl_priv *VAR_3 = VAR_2->adapter;
 struct rtl_phy *VAR_4 = &(VAR_3->phy);
 u8 VAR_5 = 1;

 if (VAR_4->current_channel != 0)
  VAR_5 = VAR_4->current_channel;
 FUNC_0(VAR_3, VAR_0, VAR_1,
   "static halbtc_get_wifi_central_chnl:%d\n", VAR_5);
 return VAR_5;
}
