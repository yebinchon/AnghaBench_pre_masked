
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct bgmac {int dev; } ;


 int FUNC_0 (struct bgmac*,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static bool FUNC_3(struct bgmac *VAR_0, u16 VAR_1, u32 VAR_2,
        u32 VAR_3, int VAR_4)
{
 u32 VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4 / 10; VAR_6++) {
  VAR_5 = FUNC_0(VAR_0, VAR_1);
  if ((VAR_5 & VAR_2) == VAR_3)
   return 1;
  FUNC_2(10);
 }
 FUNC_1(VAR_0->dev, "Timeout waiting for reg 0x%X\n", VAR_1);
 return 0;
}
