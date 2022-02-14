
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ interface; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (struct phy_device*) ;
 int FUNC_3 (struct phy_device*,int,int) ;

__attribute__((used)) static int FUNC_4(struct phy_device *VAR_2)
{
 int VAR_3;


 VAR_3 = FUNC_3(VAR_2, 0x1d, 0x001b);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_3(VAR_2, 0x1e, 0x418f);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_3(VAR_2, 0x1d, 0x0016);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_3(VAR_2, 0x1e, 0xa2da);
 if (VAR_3 < 0)
  return VAR_3;

 if (VAR_2->interface == VAR_0) {
  VAR_3 = FUNC_0(VAR_2);
  if (VAR_3 < 0)
   return VAR_3;
 }

 if (VAR_2->interface == VAR_1) {
  VAR_3 = FUNC_1(VAR_2);
  if (VAR_3 < 0)
   return VAR_3;
 }

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 return 0;
}
