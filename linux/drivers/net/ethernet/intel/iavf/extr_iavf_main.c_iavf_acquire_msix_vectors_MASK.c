
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iavf_adapter {int num_msix_vectors; int * msix_entries; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int *,int,int) ;

__attribute__((used)) static int
FUNC_3(struct iavf_adapter *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;






 VAR_4 = VAR_0;






 VAR_3 = FUNC_2(VAR_1->pdev, VAR_1->msix_entries,
        VAR_4, VAR_2);
 if (VAR_3 < 0) {
  FUNC_0(&VAR_1->pdev->dev, "Unable to allocate MSI-X interrupts\n");
  FUNC_1(VAR_1->msix_entries);
  VAR_1->msix_entries = ((void*)0);
  return VAR_3;
 }





 VAR_1->num_msix_vectors = VAR_3;
 return 0;
}
