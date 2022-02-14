
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_2__ {int (* bridge_d3 ) (struct pci_dev*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct pci_dev*) ;

__attribute__((used)) static inline bool FUNC_1(struct pci_dev *VAR_1)
{
 return VAR_0 ? VAR_0->bridge_d3(VAR_1) : 0;
}
