
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (struct platform_device*,int) ;
 int FUNC_1 (struct platform_device*,char const*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0,
        const char *VAR_1, int VAR_2)
{
 struct device_node *VAR_3 = VAR_0->dev.of_node;
 int VAR_4;

 if (VAR_3)
  VAR_4 = FUNC_1(VAR_0, VAR_1);
 else
  VAR_4 = FUNC_0(VAR_0, VAR_2);

 return VAR_4;
}
