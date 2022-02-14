
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct phy_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct phy_device*,int,int,int) ;
 int FUNC_1 (struct phy_device*,int ) ;
 int FUNC_2 (struct phy_device*,int,int) ;
 int FUNC_3 (struct phy_device*) ;

__attribute__((used)) static int FUNC_4(struct phy_device *VAR_1)
{
 u16 VAR_2;





 FUNC_2(VAR_1, 0x1f, 0x2a30);
 FUNC_0(VAR_1, 0x08, 0x0200, 0x0200);
 FUNC_2(VAR_1, 0x1f, 0x52b5);
 FUNC_2(VAR_1, 0x10, 0xb68a);
 FUNC_0(VAR_1, 0x12, 0xff07, 0x0003);
 FUNC_0(VAR_1, 0x11, 0x00ff, 0x00a2);
 FUNC_2(VAR_1, 0x10, 0x968a);
 FUNC_2(VAR_1, 0x1f, 0x2a30);
 FUNC_0(VAR_1, 0x08, 0x0200, 0x0000);
 FUNC_2(VAR_1, 0x1f, 0x0000);


 VAR_2 = FUNC_1(VAR_1, VAR_0);
 VAR_2 &= 0x0f;


 if (VAR_2 == 0) {
  FUNC_2(VAR_1, 0x1f, 0x2a30);
  FUNC_0(VAR_1, 0x08, 0x0200, 0x0200);
  FUNC_2(VAR_1, 0x1f, 0x52b5);
  FUNC_2(VAR_1, 0x12, 0x0000);
  FUNC_2(VAR_1, 0x11, 0x0689);
  FUNC_2(VAR_1, 0x10, 0x8f92);
  FUNC_2(VAR_1, 0x1f, 0x52b5);
  FUNC_2(VAR_1, 0x12, 0x0000);
  FUNC_2(VAR_1, 0x11, 0x0e35);
  FUNC_2(VAR_1, 0x10, 0x9786);
  FUNC_2(VAR_1, 0x1f, 0x2a30);
  FUNC_0(VAR_1, 0x08, 0x0200, 0x0000);
  FUNC_2(VAR_1, 0x17, 0xff80);
  FUNC_2(VAR_1, 0x17, 0x0000);
 }

 FUNC_2(VAR_1, 0x1f, 0x0000);
 FUNC_2(VAR_1, 0x12, 0x0048);

 if (VAR_2 == 0) {
  FUNC_2(VAR_1, 0x1f, 0x2a30);
  FUNC_2(VAR_1, 0x14, 0x6600);
  FUNC_2(VAR_1, 0x1f, 0x0000);
  FUNC_2(VAR_1, 0x18, 0xa24e);
 } else {
  FUNC_2(VAR_1, 0x1f, 0x2a30);
  FUNC_0(VAR_1, 0x16, 0x0fc0, 0x0240);
  FUNC_0(VAR_1, 0x14, 0x6000, 0x4000);



  FUNC_2(VAR_1, 0x1f, 0x0001);
  FUNC_0(VAR_1, 0x14, 0xe000, 0x6000);
  FUNC_2(VAR_1, 0x1f, 0x0000);
 }

 FUNC_3(VAR_1);

 return 0;
}
