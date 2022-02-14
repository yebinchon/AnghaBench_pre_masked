
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct phy_device {scalar_t__ autoneg; int advertising; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct phy_device*,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct phy_device*,int,int,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct phy_device *VAR_3)
{
 int VAR_4 = 0;

 if (VAR_3->autoneg == VAR_0) {
  u16 VAR_5 = 0;

  if (FUNC_1(VAR_1,
          VAR_3->advertising))
   VAR_5 = VAR_2;

  VAR_4 = FUNC_2(VAR_3, 0xa5d, 0x12,
            VAR_2, VAR_5);
  if (VAR_4 < 0)
   return VAR_4;
 }

 return FUNC_0(VAR_3, VAR_4);
}
