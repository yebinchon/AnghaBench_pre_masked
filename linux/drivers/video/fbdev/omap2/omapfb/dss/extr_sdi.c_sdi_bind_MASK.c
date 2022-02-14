
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct platform_device* pdev; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (struct platform_device*) ;
 struct platform_device* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, struct device *VAR_2, void *VAR_3)
{
 struct platform_device *VAR_4 = FUNC_1(VAR_1);

 VAR_0.pdev = VAR_4;

 FUNC_0(VAR_4);

 return 0;
}
