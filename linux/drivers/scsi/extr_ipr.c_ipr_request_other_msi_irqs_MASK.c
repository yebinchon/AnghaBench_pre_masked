
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct ipr_ioa_cfg {int nvectors; int * hrrq; TYPE_1__* vectors_info; } ;
struct TYPE_2__ {int desc; } ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (struct pci_dev*,int) ;
 int FUNC_2 (int ,int ,int ,int ,int *) ;

__attribute__((used)) static int FUNC_3(struct ipr_ioa_cfg *VAR_1,
  struct pci_dev *VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_3 = 1; VAR_3 < VAR_1->nvectors; VAR_3++) {
  VAR_4 = FUNC_2(FUNC_1(VAR_2, VAR_3),
   VAR_0,
   0,
   VAR_1->vectors_info[VAR_3].desc,
   &VAR_1->hrrq[VAR_3]);
  if (VAR_4) {
   while (--VAR_3 >= 0)
    FUNC_0(FUNC_1(VAR_2, VAR_3),
     &VAR_1->hrrq[VAR_3]);
   return VAR_4;
  }
 }
 return 0;
}
