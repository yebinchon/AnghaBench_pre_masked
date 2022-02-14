
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct phy_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct phy_device*,int ) ;

__attribute__((used)) static int FUNC_1(struct phy_device *VAR_6, u16 *VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_0(VAR_6, VAR_2);
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_0 & VAR_8) {
  if (VAR_8 & VAR_1)

   *VAR_7 = VAR_3;
  else
   *VAR_7 = VAR_5;
 } else {
  *VAR_7 = VAR_4;
 }

 return 0;
}
