
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct asd_ha_struct {TYPE_1__* pcidev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(struct asd_ha_struct *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(&VAR_4->pcidev->dev, &VAR_0);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_0(&VAR_4->pcidev->dev, &VAR_1);
 if (VAR_5)
  goto err_rev;

 VAR_5 = FUNC_0(&VAR_4->pcidev->dev, &VAR_2);
 if (VAR_5)
  goto err_biosb;
 VAR_5 = FUNC_0(&VAR_4->pcidev->dev, &VAR_3);
 if (VAR_5)
  goto err_update_bios;

 return 0;

err_update_bios:
 FUNC_1(&VAR_4->pcidev->dev, &VAR_2);
err_biosb:
 FUNC_1(&VAR_4->pcidev->dev, &VAR_1);
err_rev:
 FUNC_1(&VAR_4->pcidev->dev, &VAR_0);
 return VAR_5;
}
