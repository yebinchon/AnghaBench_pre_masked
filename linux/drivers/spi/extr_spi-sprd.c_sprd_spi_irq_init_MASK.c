
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sprd_spi {scalar_t__ irq; } ;
struct platform_device {int dev; int name; } ;


 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int *,int,int ,int ,int ,struct sprd_spi*) ;
 scalar_t__ FUNC_2 (struct platform_device*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1, struct sprd_spi *VAR_2)
{
 int VAR_3;

 VAR_2->irq = FUNC_2(VAR_1, 0);
 if (VAR_2->irq < 0)
  return VAR_2->irq;

 VAR_3 = FUNC_1(&VAR_1->dev, VAR_2->irq, VAR_0,
    0, VAR_1->name, VAR_2);
 if (VAR_3)
  FUNC_0(&VAR_1->dev, "failed to request spi irq %d, ret = %d\n",
   VAR_2->irq, VAR_3);

 return VAR_3;
}
