
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy_device {int dummy; } ;
struct adin_hw_stat {scalar_t__ reg1; scalar_t__ reg2; } ;


 int VAR_0 ;
 int FUNC_0 (struct phy_device*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct phy_device *VAR_1,
       struct adin_hw_stat *VAR_2,
       u32 *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_0, VAR_2->reg1);
 if (VAR_4 < 0)
  return VAR_4;

 *VAR_3 = (VAR_4 & 0xffff);

 if (VAR_2->reg2 == 0)
  return 0;

 VAR_4 = FUNC_0(VAR_1, VAR_0, VAR_2->reg2);
 if (VAR_4 < 0)
  return VAR_4;

 *VAR_3 <<= 16;
 *VAR_3 |= (VAR_4 & 0xffff);

 return 0;
}
