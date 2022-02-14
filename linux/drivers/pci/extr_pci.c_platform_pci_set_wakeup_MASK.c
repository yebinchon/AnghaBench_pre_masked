
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_2__ {int (* set_wakeup ) (struct pci_dev*,int) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct pci_dev*,int) ;

__attribute__((used)) static inline int FUNC_1(struct pci_dev *VAR_2, bool VAR_3)
{
 return VAR_1 ?
   VAR_1->set_wakeup(VAR_2, VAR_3) : -VAR_0;
}
