
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device* parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,int) ;
 int FUNC_2 (struct device*,int,int) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct device *VAR_1 = VAR_0->dev.parent;
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1, 0x28);
 FUNC_2(VAR_1, 0x28, VAR_2 | 0x80);

 FUNC_0(VAR_1, "DS1WM OWM_EN high (inactive) %02x\n", VAR_2 | 0x80);
 return 0;
}
