
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct rtl8169_private {int phydev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int,int ,int ) ;
 int FUNC_2 (struct rtl8169_private*,int) ;
 int FUNC_3 (struct rtl8169_private*,int,int) ;
 int FUNC_4 (struct rtl8169_private*) ;
 int FUNC_5 (struct rtl8169_private*) ;
 int FUNC_6 (struct rtl8169_private*) ;
 int FUNC_7 (struct rtl8169_private*) ;
 int FUNC_8 (struct rtl8169_private*,int) ;
 int FUNC_9 (struct rtl8169_private*,int,int,int) ;
 int FUNC_10 (struct rtl8169_private*,int,int) ;

__attribute__((used)) static void FUNC_11(struct rtl8169_private *VAR_0)
{
 u16 VAR_1, VAR_2, VAR_3, VAR_4;
 u16 VAR_5;
 u32 VAR_6;

 FUNC_6(VAR_0);


 FUNC_10(VAR_0, 0x1f, 0x0a43);
 FUNC_10(VAR_0, 0x13, 0x808a);
 FUNC_9(VAR_0, 0x14, 0x000a, 0x003f);
 FUNC_10(VAR_0, 0x1f, 0x0000);


 FUNC_10(VAR_0, 0x1f, 0x0a43);
 FUNC_10(VAR_0, 0x13, 0x0811);
 FUNC_9(VAR_0, 0x14, 0x0800, 0x0000);
 FUNC_10(VAR_0, 0x1f, 0x0a42);
 FUNC_9(VAR_0, 0x16, 0x0002, 0x0000);
 FUNC_10(VAR_0, 0x1f, 0x0000);


 FUNC_1(VAR_0->phydev, 0x0a44, 0x11, 0, FUNC_0(11));

 FUNC_3(VAR_0, 0xdd02, 0x807d);
 VAR_6 = FUNC_2(VAR_0, 0xdd02);
 VAR_1 = ((VAR_6 & 0x80)>>7);
 VAR_1 <<= 3;

 VAR_6 = FUNC_2(VAR_0, 0xdd00);
 VAR_1 |= ((VAR_6 & (0xe000))>>13);
 VAR_2 = ((VAR_6 & (0x1e00))>>9);
 VAR_3 = ((VAR_6 & (0x01e0))>>5);
 VAR_4 = ((VAR_6 & 0x0010)>>4);
 VAR_4 <<= 3;
 VAR_4 |= (VAR_6 & (0x07));
 VAR_6 = (VAR_1<<12)|(VAR_2<<8)|(VAR_3<<4)|(VAR_4);

 if ((VAR_1 != 0x0f) || (VAR_2 != 0x0f) ||
     (VAR_3 != 0x0f) || (VAR_4 != 0x0f)) {
  FUNC_10(VAR_0, 0x1f, 0x0bcf);
  FUNC_10(VAR_0, 0x16, VAR_6);
  FUNC_10(VAR_0, 0x1f, 0x0000);
 }


 FUNC_10(VAR_0, 0x1f, 0x0bcd);
 VAR_6 = FUNC_8(VAR_0, 0x16);
 VAR_6 &= 0x000f;
 VAR_5 = 0;
 if (VAR_6 > 3)
  VAR_5 = VAR_6 - 3;
 VAR_6 = VAR_5 | (VAR_5<<4) | (VAR_5<<8) | (VAR_5<<12);
 FUNC_10(VAR_0, 0x17, VAR_6);
 FUNC_10(VAR_0, 0x1f, 0x0bcd);
 FUNC_10(VAR_0, 0x1f, 0x0000);


 FUNC_1(VAR_0->phydev, 0x0a44, 0x11, FUNC_0(7), 0);

 FUNC_5(VAR_0);
 FUNC_4(VAR_0);
 FUNC_7(VAR_0);
}
