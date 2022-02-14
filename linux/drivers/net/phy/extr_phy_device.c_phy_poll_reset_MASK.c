
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct phy_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_3)
{

 unsigned int VAR_4 = 12;
 int VAR_5;

 do {
  FUNC_0(50);
  VAR_5 = FUNC_1(VAR_3, VAR_2);
  if (VAR_5 < 0)
   return VAR_5;
 } while (VAR_5 & VAR_0 && --VAR_4);
 if (VAR_5 & VAR_0)
  return -VAR_1;




 FUNC_0(1);
 return 0;
}
