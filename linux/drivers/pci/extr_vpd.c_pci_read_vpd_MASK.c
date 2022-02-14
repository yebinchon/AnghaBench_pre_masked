
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {TYPE_2__* vpd; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* read ) (struct pci_dev*,int ,size_t,void*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,int ,size_t,void*) ;

ssize_t FUNC_1(struct pci_dev *VAR_1, loff_t VAR_2, size_t VAR_3, void *VAR_4)
{
 if (!VAR_1->vpd || !VAR_1->vpd->ops)
  return -VAR_0;
 return VAR_1->vpd->ops->read(VAR_1, VAR_2, VAR_3, VAR_4);
}
