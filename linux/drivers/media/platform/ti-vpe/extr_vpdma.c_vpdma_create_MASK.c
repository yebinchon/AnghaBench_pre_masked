
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpdma_data {void (* cb ) (struct platform_device*) ;int base; int lock; struct platform_device* pdev; } ;
struct resource {int start; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ,int ) ;
 struct resource* FUNC_3 (struct platform_device*,int ,char*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (struct resource*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct vpdma_data*) ;

int FUNC_8(struct platform_device *VAR_4, struct vpdma_data *VAR_5,
  void (*VAR_6)(struct platform_device *VAR_7))
{
 struct resource *VAR_8;
 int VAR_9;

 FUNC_0(&VAR_4->dev, "vpdma_create\n");

 VAR_5->pdev = VAR_4;
 VAR_5->cb = VAR_6;
 FUNC_6(&VAR_5->lock);

 VAR_8 = FUNC_3(VAR_4, VAR_2, "vpdma");
 if (VAR_8 == ((void*)0)) {
  FUNC_1(&VAR_4->dev, "missing platform resources data\n");
  return -VAR_0;
 }

 VAR_5->base = FUNC_2(&VAR_4->dev, VAR_8->start, FUNC_5(VAR_8));
 if (!VAR_5->base) {
  FUNC_1(&VAR_4->dev, "failed to ioremap\n");
  return -VAR_1;
 }

 VAR_9 = FUNC_7(VAR_5);
 if (VAR_9) {
  FUNC_4("failed to load firmware %s\n", VAR_3);
  return VAR_9;
 }

 return 0;
}
