
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct amd_gpio {int gc; } ;


 int FUNC_0 (int *) ;
 struct amd_gpio* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct amd_gpio *VAR_1;

 VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->gc);

 return 0;
}
