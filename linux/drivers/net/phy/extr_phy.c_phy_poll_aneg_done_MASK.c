
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct phy_device*) ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_1)
{
 unsigned int VAR_2 = 100;
 int VAR_3;

 do {
  FUNC_0(100);
  VAR_3 = FUNC_1(VAR_1);
 } while (!VAR_3 && --VAR_2);

 if (!VAR_3)
  return -VAR_0;

 return VAR_3 < 0 ? VAR_3 : 0;
}
