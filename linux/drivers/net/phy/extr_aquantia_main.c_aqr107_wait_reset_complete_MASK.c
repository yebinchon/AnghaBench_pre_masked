
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct phy_device*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_3)
{
 int VAR_4, VAR_5 = 100;

 do {
  VAR_4 = FUNC_1(VAR_3, VAR_1, VAR_2);
  if (VAR_4 < 0)
   return VAR_4;
  FUNC_0(20);
 } while (!VAR_4 && --VAR_5);

 return VAR_4 ? 0 : -VAR_0;
}
