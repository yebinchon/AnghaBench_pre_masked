
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct msix_entry {int entry; int vector; } ;
struct TYPE_3__ {scalar_t__ nports; } ;
struct adapter {int msix_nvectors; TYPE_2__* msix_info; TYPE_1__ params; int pdev; } ;
struct TYPE_4__ {int vec; } ;


 int FUNC_0 (struct msix_entry*) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct msix_entry*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(struct adapter *VAR_1)
{
 struct msix_entry VAR_2[VAR_0 + 1];
 int VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_2);
 for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4)
  VAR_2[VAR_4].entry = VAR_4;

 VAR_3 = FUNC_1(VAR_1->pdev, VAR_2,
     VAR_1->params.nports + 1, VAR_3);
 if (VAR_3 < 0)
  return VAR_3;

 for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4)
  VAR_1->msix_info[VAR_4].vec = VAR_2[VAR_4].vector;
 VAR_1->msix_nvectors = VAR_3;

 return 0;
}
