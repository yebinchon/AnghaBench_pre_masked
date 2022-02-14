
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct phy_device {int dummy; } ;


 int FUNC_0 (struct phy_device*,int) ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (struct phy_device*) ;

__attribute__((used)) static int FUNC_3(struct phy_device *VAR_0, u8 VAR_1)
{
 int VAR_2;

 if (VAR_1) {



  VAR_2 = FUNC_1(VAR_0);
  if (VAR_2)
   goto out;

  VAR_2 = FUNC_0(VAR_0, 1);
 } else {
  VAR_2 = FUNC_0(VAR_0, 0);
  if (VAR_2)
   goto out;

  VAR_2 = FUNC_2(VAR_0);
 }

out:
 return VAR_2;
}
