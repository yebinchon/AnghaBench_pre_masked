
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dev_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*,int,int,int) ;
 int FUNC_2 (struct phy_device*,int,int) ;

__attribute__((used)) static int FUNC_3(struct phy_device *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 if (VAR_1->dev_flags & VAR_0) {
  VAR_2 = FUNC_2(VAR_1, 0x1d, 0x0012);
  if (VAR_2 < 0)
   return VAR_2;

  VAR_2 = FUNC_1(VAR_1, 0x1e, 0x0fc0,
     2 << 9 |
     2 << 6);
  if (VAR_2 < 0)
   return VAR_2;

  VAR_2 = FUNC_2(VAR_1, 0x1d, 0x3);
  if (VAR_2 < 0)
   return VAR_2;

  VAR_2 = FUNC_2(VAR_1, 0x1e, 0x8000);
 }
 return VAR_2;
}
