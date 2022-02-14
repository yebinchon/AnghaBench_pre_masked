
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pl031_local {int dummy; } ;
struct amba_device {scalar_t__* irq; int dev; } ;


 int FUNC_0 (struct amba_device*) ;
 struct pl031_local* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (scalar_t__,struct pl031_local*) ;

__attribute__((used)) static int FUNC_5(struct amba_device *VAR_0)
{
 struct pl031_local *VAR_1 = FUNC_1(&VAR_0->dev);

 FUNC_2(&VAR_0->dev);
 FUNC_3(&VAR_0->dev, 0);
 if (VAR_0->irq[0])
  FUNC_4(VAR_0->irq[0], VAR_1);
 FUNC_0(VAR_0);

 return 0;
}
