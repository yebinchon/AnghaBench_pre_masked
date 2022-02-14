
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int suspended; } ;
struct hclge_dev {int dummy; } ;


 int FUNC_0 (struct phy_device*,int) ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (struct phy_device*) ;

__attribute__((used)) static int FUNC_3(struct hclge_dev *VAR_0,
         struct phy_device *VAR_1)
{
 int VAR_2;

 if (!VAR_1->suspended) {
  VAR_2 = FUNC_2(VAR_1);
  if (VAR_2)
   return VAR_2;
 }

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  return VAR_2;

 return FUNC_0(VAR_1, 1);
}
