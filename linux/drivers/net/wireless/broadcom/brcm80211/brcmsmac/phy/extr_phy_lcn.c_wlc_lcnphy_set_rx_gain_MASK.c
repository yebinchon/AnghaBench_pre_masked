
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct brcms_phy {int radio_chanspec; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct brcms_phy*,int,int,int) ;
 int FUNC_2 (struct brcms_phy*,int) ;

__attribute__((used)) static void FUNC_3(struct brcms_phy *VAR_0, u32 VAR_1)
{
 u16 VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_2 = (VAR_1 & ((u32) 1 << 28)) ? 0 : 1;
 VAR_3 = (u16) (VAR_1 >> 29) & 0x01;
 VAR_4 = (u16) (VAR_1 >> 0) & 0x0f;
 VAR_5 = (u16) (VAR_1 >> 4) & 0x0f;
 VAR_6 = (u16) (VAR_1 >> 8) & 0xf;
 VAR_7 = (u16) (VAR_1 >> 12) & 0xf;
 VAR_8 = (u16) (VAR_1 >> 16) & 0xf;

 VAR_9 = (u16) ((VAR_4 & 0x3) | ((VAR_4 & 0x3) << 2) |
     ((VAR_5 & 0x3) << 4) | ((VAR_5 & 0x3) << 6) |
     ((VAR_6 & 0xf) << 8) | ((VAR_7 & 0xf) << 12));
 VAR_10 = VAR_8;

 FUNC_1(VAR_0, 0x44d, (0x1 << 0), VAR_2 << 0);
 FUNC_1(VAR_0, 0x4b1, (0x1 << 9), VAR_3 << 9);
 FUNC_1(VAR_0, 0x4b1, (0x1 << 10), VAR_3 << 10);
 FUNC_1(VAR_0, 0x4b6, (0xffff << 0), VAR_9 << 0);
 FUNC_1(VAR_0, 0x4b7, (0xf << 0), VAR_10 << 0);

 if (FUNC_0(VAR_0->radio_chanspec)) {
  FUNC_1(VAR_0, 0x4b1, (0x3 << 11), VAR_4 << 11);
  FUNC_1(VAR_0, 0x4e6, (0x3 << 3), VAR_4 << 3);
 }
 FUNC_2(VAR_0, 1);
}
