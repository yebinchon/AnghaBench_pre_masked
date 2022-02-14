
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy_device {int const phy_id; } ;


 int VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int const VAR_3 ;
 int FUNC_0 (struct phy_device*,int ) ;

__attribute__((used)) static int FUNC_1(struct phy_device *VAR_4,
         const u32 VAR_5)
{
 int VAR_6;

 if ((VAR_4->phy_id & VAR_1) != VAR_5)
  return 0;

 VAR_6 = FUNC_0(VAR_4, VAR_2);
 if (VAR_6 < 0)
  return VAR_6;






 VAR_6 &= VAR_0;
 if (VAR_5 == VAR_3)
  return VAR_6;
 else
  return !VAR_6;
}
