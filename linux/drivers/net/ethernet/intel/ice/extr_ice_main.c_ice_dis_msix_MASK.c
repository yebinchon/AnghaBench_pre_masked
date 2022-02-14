
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ice_pf {int * msix_entries; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct ice_pf *VAR_0)
{
 FUNC_1(VAR_0->pdev);
 FUNC_0(&VAR_0->pdev->dev, VAR_0->msix_entries);
 VAR_0->msix_entries = ((void*)0);
}
