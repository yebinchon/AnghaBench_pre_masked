
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xvcu_device {int aclk; int pll_ref; int logicore_reg_ba; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct xvcu_device* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_2)
{
 struct xvcu_device *VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 if (!VAR_3)
  return -VAR_0;


 FUNC_2(VAR_3->logicore_reg_ba, VAR_1, 0);

 FUNC_0(VAR_3->pll_ref);
 FUNC_0(VAR_3->aclk);

 return 0;
}
