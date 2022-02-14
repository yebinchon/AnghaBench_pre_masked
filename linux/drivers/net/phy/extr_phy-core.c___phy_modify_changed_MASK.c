
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct phy_device {int dummy; } ;


 int FUNC_0 (struct phy_device*,int ) ;
 int FUNC_1 (struct phy_device*,int ,int) ;

int FUNC_2(struct phy_device *VAR_0, u32 VAR_1, u16 VAR_2,
    u16 VAR_3)
{
 int VAR_4, VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_4 = (VAR_5 & ~VAR_2) | VAR_3;
 if (VAR_4 == VAR_5)
  return 0;

 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_4);

 return VAR_5 < 0 ? VAR_5 : 1;
}
