
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8xxxu_priv {int chip_cut; int enable_bluetooth; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtl8xxxu_priv*,char*) ;

__attribute__((used)) static int FUNC_1(struct rtl8xxxu_priv *VAR_1)
{
 char *VAR_2;
 int VAR_3;

 switch (VAR_1->chip_cut) {
 case 0:
  VAR_2 = "rtlwifi/rtl8723aufw_A.bin";
  break;
 case 1:
  if (VAR_1->enable_bluetooth)
   VAR_2 = "rtlwifi/rtl8723aufw_B.bin";
  else
   VAR_2 = "rtlwifi/rtl8723aufw_B_NoBT.bin";

  break;
 default:
  return -VAR_0;
 }

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 return VAR_3;
}
