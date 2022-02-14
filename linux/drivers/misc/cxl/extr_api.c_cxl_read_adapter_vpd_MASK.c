
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct cxl_afu {int adapter; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* read_adapter_vpd ) (int ,void*,size_t) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cxl_afu*) ;
 TYPE_1__* VAR_1 ;
 struct cxl_afu* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (int ,void*,size_t) ;

ssize_t FUNC_3(struct pci_dev *VAR_2, void *VAR_3, size_t VAR_4)
{
 struct cxl_afu *VAR_5 = FUNC_1(VAR_2);
 if (FUNC_0(VAR_5))
  return -VAR_0;

 return VAR_1->read_adapter_vpd(VAR_5->adapter, VAR_3, VAR_4);
}
