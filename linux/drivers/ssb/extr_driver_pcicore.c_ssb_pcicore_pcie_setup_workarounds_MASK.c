
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ssb_pcicore {TYPE_2__* dev; } ;
struct TYPE_3__ {int revision; } ;
struct TYPE_4__ {TYPE_1__ id; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ssb_pcicore*,int ) ;
 int FUNC_2 (struct ssb_pcicore*,int ,int) ;
 int FUNC_3 (struct ssb_pcicore*) ;
 int FUNC_4 (struct ssb_pcicore*,int const,int,int) ;
 int FUNC_5 (struct ssb_pcicore*,int) ;
 int FUNC_6 (struct ssb_pcicore*,int,int) ;

__attribute__((used)) static void FUNC_7(struct ssb_pcicore *VAR_0)
{
 u32 VAR_1;
 u8 VAR_2 = VAR_0->dev->id.revision;

 if (VAR_2 == 0 || VAR_2 == 1) {

  VAR_1 = FUNC_5(VAR_0, 0x4);
  VAR_1 |= 0x8;
  FUNC_6(VAR_0, 0x4, VAR_1);
 }
 if (VAR_2 == 1) {

  VAR_1 = FUNC_5(VAR_0, 0x100);
  VAR_1 |= 0x40;
  FUNC_6(VAR_0, 0x100, VAR_1);
 }

 if (VAR_2 == 0) {
  const u8 VAR_3 = 0x1F;

  FUNC_4(VAR_0, VAR_3,
     2 , 0x8128);
  FUNC_4(VAR_0, VAR_3,
     6 , 0x0100);
  FUNC_4(VAR_0, VAR_3,
     7 , 0x1466);
 } else if (VAR_2 == 3 || VAR_2 == 4 || VAR_2 == 5) {

  FUNC_3(VAR_0);

 } else if (VAR_2 == 7) {

 }

 if (VAR_2 >= 6) {

  VAR_1 = FUNC_1(VAR_0, FUNC_0(5));
  if (!(VAR_1 & 0x8000))
   FUNC_2(VAR_0, FUNC_0(5),
     VAR_1 | 0x8000);
 }
}
