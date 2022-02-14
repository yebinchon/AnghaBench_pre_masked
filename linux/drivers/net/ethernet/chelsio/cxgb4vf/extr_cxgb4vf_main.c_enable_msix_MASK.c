
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sge {int max_ethqsets; int ethqsets; } ;
struct msix_entry {int entry; int vector; } ;
struct TYPE_3__ {int nports; } ;
struct adapter {TYPE_2__* msix_info; int pdev_dev; int pdev; TYPE_1__ params; struct sge sge; } ;
struct TYPE_4__ {int vec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,struct msix_entry*,int,int) ;
 int FUNC_2 (struct adapter*,int) ;

__attribute__((used)) static int FUNC_3(struct adapter *VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;
 struct msix_entry VAR_7[VAR_0];
 struct sge *VAR_8 = &VAR_2->sge;

 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3)
  VAR_7[VAR_3].entry = VAR_3;
 VAR_4 = VAR_8->max_ethqsets + VAR_1;
 VAR_5 = VAR_2->params.nports + VAR_1;

 VAR_4 = FUNC_1(VAR_2->pdev, VAR_7, VAR_5, VAR_4);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_6 = VAR_4 - VAR_1;
 if (VAR_6 < VAR_8->max_ethqsets) {
  FUNC_0(VAR_2->pdev_dev, "only enough MSI-X vectors"
    " for %d Queue Sets\n", VAR_6);
  VAR_8->max_ethqsets = VAR_6;
  if (VAR_6 < VAR_8->ethqsets)
   FUNC_2(VAR_2, VAR_6);
 }
 for (VAR_3 = 0; VAR_3 < VAR_4; ++VAR_3)
  VAR_2->msix_info[VAR_3].vec = VAR_7[VAR_3].vector;

 return 0;
}
