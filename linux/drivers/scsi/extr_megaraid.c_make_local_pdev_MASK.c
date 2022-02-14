
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_3__ {int dev; } ;
typedef TYPE_1__ adapter_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int ,int) ;
 struct pci_dev* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct pci_dev*,int ) ;

__attribute__((used)) static inline int
FUNC_5(adapter_t *VAR_0, struct pci_dev **VAR_1)
{
 *VAR_1 = FUNC_3(((void*)0));

 if( *VAR_1 == ((void*)0) ) return -1;

 FUNC_2(*VAR_1, VAR_0->dev, sizeof(struct pci_dev));

 if( FUNC_4(*VAR_1, FUNC_0(32)) != 0 ) {
  FUNC_1(*VAR_1);
  return -1;
 }

 return 0;
}
