
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device_info {char const* name; int dma_mask; int id; int * parent; } ;
struct platform_device {int dev; } ;
typedef int pdevinfo ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct platform_device*) ;
 int VAR_0 ;
 int FUNC_2 (int *,char*,char const*) ;
 int FUNC_3 (struct platform_device_info*,int ,int) ;
 struct platform_device* FUNC_4 (struct platform_device_info*) ;

__attribute__((used)) static struct platform_device *
FUNC_5(struct platform_device *VAR_1, const char *VAR_2)
{
 struct platform_device_info VAR_3;
 struct platform_device *VAR_4;

 FUNC_3(&VAR_3, 0, sizeof(VAR_3));

 VAR_3.parent = &VAR_1->dev;
 VAR_3.name = VAR_2;
 VAR_3.id = VAR_0;
 VAR_3.dma_mask = FUNC_0(32);

 VAR_4 = FUNC_4(&VAR_3);
 if (FUNC_1(VAR_4)) {
  FUNC_2(&VAR_1->dev, "%s not registered\n", VAR_2);
  VAR_4 = ((void*)0);
 }

 return VAR_4;
}
