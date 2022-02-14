
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct cxl_afu {int dummy; } ;
struct TYPE_2__ {int parent; } ;
struct cxl {TYPE_1__ dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct pci_dev*) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static inline bool FUNC_3(struct cxl *VAR_1, struct cxl_afu *VAR_2)
{
 struct pci_dev *VAR_3;

 if (FUNC_0(VAR_0)) {
  VAR_3 = FUNC_2(VAR_1->dev.parent);
  return !FUNC_1(VAR_3);
 }
 return 1;
}
