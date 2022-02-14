
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {scalar_t__ chip_interface; struct rtl_priv* adapter; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct rtl_priv*,int ,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_3, u32 VAR_4,
      u8 VAR_5)
{
 struct btc_coexist *VAR_6 = (struct btc_coexist *)VAR_3;
 struct rtl_priv *VAR_7 = VAR_6->adapter;

 if (VAR_6->chip_interface == VAR_1)
  ;
 else if (VAR_6->chip_interface == VAR_0)
  FUNC_0(VAR_7, VAR_4, VAR_5);
 else if (VAR_6->chip_interface == VAR_2)
  FUNC_0(VAR_7, VAR_4, VAR_5);
}
