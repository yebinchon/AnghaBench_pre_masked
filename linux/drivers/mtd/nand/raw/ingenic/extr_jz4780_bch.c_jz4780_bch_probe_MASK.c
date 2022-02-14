
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct ingenic_ecc {int clk; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct platform_device*) ;
 struct ingenic_ecc* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 struct ingenic_ecc *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3)
  return VAR_3;

 VAR_2 = FUNC_2(VAR_1);
 FUNC_0(VAR_2->clk, VAR_0);

 return 0;
}
