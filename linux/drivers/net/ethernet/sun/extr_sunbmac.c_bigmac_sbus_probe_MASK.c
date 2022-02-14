
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device* parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct platform_device*,struct platform_device*) ;
 struct platform_device* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct device *VAR_1 = VAR_0->dev.parent;
 struct platform_device *VAR_2;

 VAR_2 = FUNC_1(VAR_1);

 return FUNC_0(VAR_0, VAR_2);
}
