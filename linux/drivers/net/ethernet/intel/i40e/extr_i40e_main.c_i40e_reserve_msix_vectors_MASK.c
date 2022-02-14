
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40e_pf {TYPE_1__* pdev; int msix_entries; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct i40e_pf *VAR_1, int VAR_2)
{
 VAR_2 = FUNC_1(VAR_1->pdev, VAR_1->msix_entries,
     VAR_0, VAR_2);
 if (VAR_2 < 0) {
  FUNC_0(&VAR_1->pdev->dev,
    "MSI-X vector reservation failed: %d\n", VAR_2);
  VAR_2 = 0;
 }

 return VAR_2;
}
