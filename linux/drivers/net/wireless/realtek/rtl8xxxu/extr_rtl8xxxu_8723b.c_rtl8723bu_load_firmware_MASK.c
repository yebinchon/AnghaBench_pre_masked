
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8xxxu_priv {scalar_t__ enable_bluetooth; } ;


 int FUNC_0 (struct rtl8xxxu_priv*,char*) ;

__attribute__((used)) static int FUNC_1(struct rtl8xxxu_priv *VAR_0)
{
 char *VAR_1;
 int VAR_2;

 if (VAR_0->enable_bluetooth)
  VAR_1 = "rtlwifi/rtl8723bu_bt.bin";
 else
  VAR_1 = "rtlwifi/rtl8723bu_nic.bin";

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 return VAR_2;
}
