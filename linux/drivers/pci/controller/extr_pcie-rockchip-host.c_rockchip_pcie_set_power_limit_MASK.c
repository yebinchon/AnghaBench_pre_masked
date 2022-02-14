
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rockchip_pcie {int dev; int vpcie3v3; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct rockchip_pcie*,int ) ;
 int FUNC_4 (struct rockchip_pcie*,int,int ) ;

__attribute__((used)) static void FUNC_5(struct rockchip_pcie *VAR_4)
{
 int VAR_5;
 u32 VAR_6, VAR_7, VAR_8;

 if (FUNC_0(VAR_4->vpcie3v3))
  return;







 VAR_5 = FUNC_2(VAR_4->vpcie3v3);
 if (VAR_5 <= 0)
  return;

 VAR_7 = 3;
 VAR_5 = VAR_5 / 1000;
 VAR_8 = (VAR_5 * 3300) / 1000;
 while (VAR_8 > VAR_2) {
  if (!VAR_7) {
   FUNC_1(VAR_4->dev, "invalid power supply\n");
   return;
  }
  VAR_7--;
  VAR_8 = VAR_8 / 10;
 }

 VAR_6 = FUNC_3(VAR_4, VAR_0);
 VAR_6 |= (VAR_8 << VAR_3) |
    (VAR_7 << VAR_1);
 FUNC_4(VAR_4, VAR_6, VAR_0);
}
