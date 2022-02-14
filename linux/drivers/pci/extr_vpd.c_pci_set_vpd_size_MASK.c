
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {TYPE_2__* vpd; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* set_size ) (struct pci_dev*,size_t) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,size_t) ;

int FUNC_1(struct pci_dev *VAR_1, size_t VAR_2)
{
 if (!VAR_1->vpd || !VAR_1->vpd->ops)
  return -VAR_0;
 return VAR_1->vpd->ops->set_size(VAR_1, VAR_2);
}
