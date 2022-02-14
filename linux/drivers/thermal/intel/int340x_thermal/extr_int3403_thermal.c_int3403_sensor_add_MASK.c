
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct int3403_sensor {int int340x_zone; } ;
struct int3403_priv {TYPE_2__* adev; struct int3403_sensor* priv; TYPE_1__* pdev; } ;
struct TYPE_4__ {int handle; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,void*) ;
 struct int3403_sensor* FUNC_3 (int *,int,int ) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct int3403_priv *VAR_4)
{
 int VAR_5 = 0;
 struct int3403_sensor *VAR_6;

 VAR_6 = FUNC_3(&VAR_4->pdev->dev, sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_4->priv = VAR_6;

 VAR_6->int340x_zone = FUNC_4(VAR_4->adev, ((void*)0));
 if (FUNC_0(VAR_6->int340x_zone))
  return FUNC_1(VAR_6->int340x_zone);

 VAR_5 = FUNC_2(VAR_4->adev->handle,
   VAR_0, VAR_3,
   (void *)VAR_4);
 if (VAR_5)
  goto err_free_obj;

 return 0;

 err_free_obj:
 FUNC_5(VAR_6->int340x_zone);
 return VAR_5;
}
