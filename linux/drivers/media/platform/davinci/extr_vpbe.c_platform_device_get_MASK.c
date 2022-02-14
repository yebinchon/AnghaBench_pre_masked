
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpbe_device {int venc_device; int osd_device; } ;
struct platform_device {int dev; int name; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct platform_device*) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 struct platform_device* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0, void *VAR_1)
{
 struct platform_device *VAR_2 = FUNC_3(VAR_0);
 struct vpbe_device *VAR_3 = VAR_1;

 if (FUNC_2(VAR_2->name, "vpbe-osd"))
  VAR_3->osd_device = FUNC_1(VAR_2);
 if (FUNC_2(VAR_2->name, "vpbe-venc"))
  VAR_3->venc_device = FUNC_0(&VAR_2->dev);

 return 0;
}
