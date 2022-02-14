
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl_phy {int current_chan_bw; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct btc_coexist {struct rtl_priv* adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 scalar_t__ FUNC_0 (struct rtl_priv*) ;

__attribute__((used)) static u32 FUNC_1(struct btc_coexist *VAR_4)
{
 struct rtl_priv *VAR_5 = VAR_4->adapter;
 struct rtl_phy *VAR_6 = &VAR_5->phy;
 u32 VAR_7 = VAR_0;

 if (FUNC_0(VAR_5)) {
  VAR_7 = VAR_3;
 } else {
  switch (VAR_6->current_chan_bw) {
  case 130:
   VAR_7 = VAR_0;
   break;
  case 129:
   VAR_7 = VAR_1;
   break;
  case 128:
   VAR_7 = VAR_2;
   break;
  }
 }

 return VAR_7;
}
