
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {scalar_t__ num_resources; int name; int dev; int * resource; } ;
struct notifier_block {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,char*,int ) ;
 struct platform_device* FUNC_1 (void*) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct notifier_block *VAR_2,
     unsigned long VAR_3, void *VAR_4)
{
 struct platform_device *VAR_5 = FUNC_1(VAR_4);
 int VAR_6 = 0;

 if (VAR_5->num_resources == 0 || VAR_5->resource == ((void*)0))
  return VAR_1;

 switch (VAR_3) {
 case 129:
  VAR_6 = FUNC_2(VAR_5->resource, VAR_5->num_resources);
  break;
 case 128:
  VAR_6 = FUNC_3(VAR_5->resource, VAR_5->num_resources);
  break;
 default:
  return VAR_0;
 }
 if (VAR_6)
  FUNC_0(&VAR_5->dev, "Platform: Failed to %s device %s MMIO!\n",
   VAR_3 == 129 ? "map" :
   (VAR_3 == 128 ? "unmap" : "?"),
   VAR_5->name);

 return VAR_1;
}
