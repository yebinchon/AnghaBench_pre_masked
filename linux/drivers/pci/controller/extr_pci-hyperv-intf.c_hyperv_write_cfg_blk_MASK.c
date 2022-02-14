
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_2__ {int (* write_block ) (struct pci_dev*,void*,unsigned int,unsigned int) ;} ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (struct pci_dev*,void*,unsigned int,unsigned int) ;

int FUNC_1(struct pci_dev *VAR_2, void *VAR_3, unsigned int VAR_4,
    unsigned int VAR_5)
{
 if (!VAR_1.write_block)
  return -VAR_0;

 return VAR_1.write_block(VAR_2, VAR_3, VAR_4, VAR_5);
}
