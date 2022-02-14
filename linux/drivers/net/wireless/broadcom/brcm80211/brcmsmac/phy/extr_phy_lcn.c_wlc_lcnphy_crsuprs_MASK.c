
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct brcms_phy {int dummy; } ;


 int FUNC_0 (struct brcms_phy*,int,int) ;
 int FUNC_1 (struct brcms_phy*,int,int,int) ;
 int FUNC_2 (struct brcms_phy*,int,int) ;
 int FUNC_3 (struct brcms_phy*,int) ;
 int FUNC_4 (struct brcms_phy*,int) ;
 int FUNC_5 (struct brcms_phy*,int,int) ;

void FUNC_6(struct brcms_phy *VAR_0, int VAR_1)
{
 u16 VAR_2, VAR_3;
 VAR_2 = FUNC_3(VAR_0, 0x43b);
 VAR_3 = FUNC_3(VAR_0, 0x43c);
 if (VAR_1 != 0) {
  FUNC_1(VAR_0, 0x43b, (0x1 << 1), (1) << 1);

  FUNC_1(VAR_0, 0x43c, (0x1 << 1), (0) << 1);

  FUNC_1(VAR_0, 0x43b, (0x1 << 4), (1) << 4);

  FUNC_1(VAR_0, 0x43c, (0x1 << 6), (0) << 6);

  FUNC_5(VAR_0, 0x44b, 0xffff);
  FUNC_4(VAR_0, 1);

  FUNC_1(VAR_0, 0x634, (0xff << 8), (0) << 8);

  FUNC_2(VAR_0, 0x6da, 0x0080);

  FUNC_2(VAR_0, 0x00a, 0x228);
 } else {
  FUNC_0(VAR_0, 0x00a, ~(0x228));

  FUNC_0(VAR_0, 0x6da, 0xFF7F);
  FUNC_5(VAR_0, 0x43b, VAR_2);
  FUNC_5(VAR_0, 0x43c, VAR_3);
 }
}
