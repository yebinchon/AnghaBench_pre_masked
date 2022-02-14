
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct ssb_pcicore {TYPE_2__* dev; } ;
struct TYPE_3__ {int revision; } ;
struct TYPE_4__ {TYPE_1__ id; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ssb_pcicore*,int const) ;
 int FUNC_2 (struct ssb_pcicore*,int const,int) ;
 int FUNC_3 (struct ssb_pcicore*,scalar_t__) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct ssb_pcicore *VAR_0, u8 VAR_1,
    u8 VAR_2, u16 VAR_3)
{
 const u16 VAR_4 = 0x128;
 const u16 VAR_5 = 0x12C;
 int VAR_6 = 10;
 u32 VAR_7;
 int VAR_8;

 VAR_7 = 0x80;
 VAR_7 |= 0x2;
 FUNC_2(VAR_0, VAR_4, VAR_7);

 if (VAR_0->dev->id.revision >= 10) {
  VAR_6 = 200;
  FUNC_3(VAR_0, VAR_1);
 }

 VAR_7 = (1 << 30);
 VAR_7 |= (1 << 28);
 VAR_7 |= (1 << 17);
 if (VAR_0->dev->id.revision < 10)
  VAR_7 |= (u32)VAR_1 << 22;
 VAR_7 |= (u32)VAR_2 << 18;
 VAR_7 |= VAR_3;
 FUNC_2(VAR_0, VAR_5, VAR_7);

 FUNC_4(10);
 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  VAR_7 = FUNC_1(VAR_0, VAR_4);
  if (VAR_7 & 0x100 )
   break;
  FUNC_0(1);
 }
 FUNC_2(VAR_0, VAR_4, 0);
}
