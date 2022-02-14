
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct histb_pcie {scalar_t__ phy; } ;


 int FUNC_0 (struct histb_pcie*) ;
 int FUNC_1 (scalar_t__) ;
 struct histb_pcie* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct histb_pcie *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(VAR_1);

 if (VAR_1->phy)
  FUNC_1(VAR_1->phy);

 return 0;
}
