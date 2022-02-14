
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {TYPE_1__* p2pdma; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int p2pmem_published; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,int) ;
 struct pci_dev* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1, struct device_attribute *VAR_2,
         char *VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_1(VAR_1);

 return FUNC_0(VAR_3, VAR_0, "%d\n",
   VAR_4->p2pdma->p2pmem_published);
}
