
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gve_priv {TYPE_1__* pdev; int dev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct gve_priv*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct gve_priv*) ;

__attribute__((used)) static int FUNC_4(struct gve_priv *VAR_0, bool VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, 1);
 if (VAR_2)
  goto err;
 if (VAR_1) {
  VAR_2 = FUNC_2(VAR_0->dev);
  if (VAR_2)
   goto err;
 }
 return 0;
err:
 FUNC_0(&VAR_0->pdev->dev, "Reset failed! !!! DISABLING ALL QUEUES !!!\n");
 FUNC_3(VAR_0);
 return VAR_2;
}
