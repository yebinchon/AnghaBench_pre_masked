
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8xxxu_priv {scalar_t__ vendor_umc; int chip_cut; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtl8xxxu_priv*,int ,int) ;
 int FUNC_1 (struct rtl8xxxu_priv*,int,int) ;

void FUNC_2(struct rtl8xxxu_priv *VAR_1)
{

 FUNC_1(VAR_1, 0xfe40, 0xe0);
 FUNC_1(VAR_1, 0xfe41, 0x8d);
 FUNC_1(VAR_1, 0xfe42, 0x80);




 FUNC_0(VAR_1, VAR_0, 0xfd0320);





 if (!(!VAR_1->chip_cut && VAR_1->vendor_umc)) {
  FUNC_1(VAR_1, 0xfe40, 0xe6);
  FUNC_1(VAR_1, 0xfe41, 0x94);
  FUNC_1(VAR_1, 0xfe42, 0x80);

  FUNC_1(VAR_1, 0xfe40, 0xe0);
  FUNC_1(VAR_1, 0xfe41, 0x19);
  FUNC_1(VAR_1, 0xfe42, 0x80);

  FUNC_1(VAR_1, 0xfe40, 0xe5);
  FUNC_1(VAR_1, 0xfe41, 0x91);
  FUNC_1(VAR_1, 0xfe42, 0x80);

  FUNC_1(VAR_1, 0xfe40, 0xe2);
  FUNC_1(VAR_1, 0xfe41, 0x81);
  FUNC_1(VAR_1, 0xfe42, 0x80);
 }
}
