
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct dpi_data {int lock; struct platform_device* pdev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct dpi_data*) ;
 struct dpi_data* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *) ;
 struct platform_device* FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_2, struct device *VAR_3, void *VAR_4)
{
 struct platform_device *VAR_5 = FUNC_4(VAR_2);
 struct dpi_data *VAR_6;

 VAR_6 = FUNC_1(&VAR_5->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->pdev = VAR_5;

 FUNC_0(&VAR_5->dev, VAR_6);

 FUNC_3(&VAR_6->lock);

 FUNC_2(VAR_5);

 return 0;
}
