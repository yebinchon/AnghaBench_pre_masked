
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt8500_chip {int chip; int clk; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct vt8500_chip* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 struct vt8500_chip *VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 == ((void*)0))
  return -VAR_0;

 FUNC_0(VAR_2->clk);

 return FUNC_2(&VAR_2->chip);
}
