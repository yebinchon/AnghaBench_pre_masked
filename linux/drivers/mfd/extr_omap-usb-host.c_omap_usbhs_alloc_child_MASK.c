
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_2__ {struct device* parent; int * dma_mask; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*,void*,size_t) ;
 int FUNC_5 (struct platform_device*,struct resource*,int) ;
 struct platform_device* FUNC_6 (char const*,int ) ;
 int FUNC_7 (struct platform_device*) ;
 int VAR_0 ;

__attribute__((used)) static struct platform_device *FUNC_8(const char *VAR_1,
   struct resource *VAR_2, int VAR_3, void *VAR_4,
   size_t VAR_5, struct device *VAR_6)
{
 struct platform_device *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_6(VAR_1, 0);

 if (!VAR_7) {
  FUNC_1(VAR_6, "platform_device_alloc %s failed\n", VAR_1);
  goto err_end;
 }

 VAR_8 = FUNC_5(VAR_7, VAR_2, VAR_3);
 if (VAR_8) {
  FUNC_1(VAR_6, "platform_device_add_resources failed\n");
  goto err_alloc;
 }

 VAR_8 = FUNC_4(VAR_7, VAR_4, VAR_5);
 if (VAR_8) {
  FUNC_1(VAR_6, "platform_device_add_data failed\n");
  goto err_alloc;
 }

 VAR_7->dev.dma_mask = &VAR_0;
 FUNC_2(&VAR_7->dev, FUNC_0(32));
 VAR_7->dev.parent = VAR_6;

 VAR_8 = FUNC_3(VAR_7);
 if (VAR_8) {
  FUNC_1(VAR_6, "platform_device_add failed\n");
  goto err_alloc;
 }

 return VAR_7;

err_alloc:
 FUNC_7(VAR_7);

err_end:
 return ((void*)0);
}
