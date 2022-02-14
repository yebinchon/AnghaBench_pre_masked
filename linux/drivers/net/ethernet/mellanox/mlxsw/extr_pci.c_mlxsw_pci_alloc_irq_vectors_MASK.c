
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_pci {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*,int,int,int ) ;

__attribute__((used)) static int FUNC_2(struct mlxsw_pci *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1->pdev, 1, 1, VAR_0);
 if (VAR_2 < 0)
  FUNC_0(&VAR_1->pdev->dev, "MSI-X init failed\n");
 return VAR_2;
}
