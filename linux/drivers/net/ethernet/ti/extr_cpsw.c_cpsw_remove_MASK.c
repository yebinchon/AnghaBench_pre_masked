
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_3__ {int slaves; } ;
struct cpsw_common {int dma; int cpts; TYPE_2__* slaves; TYPE_1__ data; } ;
struct TYPE_4__ {scalar_t__ ndev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ) ;
 struct cpsw_common* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_0)
{
 struct cpsw_common *VAR_1 = FUNC_3(VAR_0);
 int VAR_2, VAR_3;

 VAR_3 = FUNC_5(&VAR_0->dev);
 if (VAR_3 < 0) {
  FUNC_6(&VAR_0->dev);
  return VAR_3;
 }

 for (VAR_2 = 0; VAR_2 < VAR_1->data.slaves; VAR_2++)
  if (VAR_1->slaves[VAR_2].ndev)
   FUNC_8(VAR_1->slaves[VAR_2].ndev);

 FUNC_2(VAR_1->cpts);
 FUNC_0(VAR_1->dma);
 FUNC_1(VAR_0);
 FUNC_7(&VAR_0->dev);
 FUNC_4(&VAR_0->dev);
 return 0;
}
