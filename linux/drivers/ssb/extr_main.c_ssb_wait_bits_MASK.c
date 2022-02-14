
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ssb_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int ,char*) ;
 int FUNC_1 (struct ssb_device*,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct ssb_device *VAR_1, u16 VAR_2, u32 VAR_3,
    int VAR_4, int VAR_5)
{
 int VAR_6;
 u32 VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_7 = FUNC_1(VAR_1, VAR_2);
  if (VAR_5) {
   if ((VAR_7 & VAR_3) == VAR_3)
    return 0;
  } else {
   if (!(VAR_7 & VAR_3))
    return 0;
  }
  FUNC_2(10);
 }
 FUNC_0(VAR_1->dev,
  "Timeout waiting for bitmask %08X on register %04X to %s\n",
  VAR_3, VAR_2, VAR_5 ? "set" : "clear");

 return -VAR_0;
}
