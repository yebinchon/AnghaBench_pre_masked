
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb {TYPE_1__* nhi; } ;
struct pci_dev {int dummy; } ;
struct icm {int vnd_cap; struct pci_dev* upstream_port; } ;
struct TYPE_2__ {int pdev; } ;


 int VAR_0 ;
 struct pci_dev* FUNC_0 (int ) ;
 int FUNC_1 (struct pci_dev*,int ) ;
 struct icm* FUNC_2 (struct tb*) ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_3(struct tb *VAR_2)
{
 struct pci_dev *VAR_3;
 struct icm *VAR_4 = FUNC_2(VAR_2);





 if (!VAR_1)
  return 1;





 VAR_3 = FUNC_0(VAR_2->nhi->pdev);
 if (VAR_3) {
  int VAR_5;

  VAR_5 = FUNC_1(VAR_3,
           VAR_0);
  if (VAR_5 > 0) {
   VAR_4->upstream_port = VAR_3;
   VAR_4->vnd_cap = VAR_5;

   return 1;
  }
 }

 return 0;
}
