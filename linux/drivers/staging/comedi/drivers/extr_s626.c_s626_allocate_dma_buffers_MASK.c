
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* physical_base; void* logical_base; } ;
struct TYPE_4__ {void* physical_base; void* logical_base; } ;
struct s626_private {TYPE_1__ rps_buf; TYPE_2__ ana_buf; } ;
struct pci_dev {int dummy; } ;
struct comedi_device {struct s626_private* private; } ;
typedef void* dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct pci_dev* FUNC_0 (struct comedi_device*) ;
 void* FUNC_1 (struct pci_dev*,int ,void**) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_0(VAR_2);
 struct s626_private *VAR_4 = VAR_2->private;
 void *VAR_5;
 dma_addr_t VAR_6;

 VAR_5 = FUNC_1(VAR_3, VAR_1, &VAR_6);
 if (!VAR_5)
  return -VAR_0;
 VAR_4->ana_buf.logical_base = VAR_5;
 VAR_4->ana_buf.physical_base = VAR_6;

 VAR_5 = FUNC_1(VAR_3, VAR_1, &VAR_6);
 if (!VAR_5)
  return -VAR_0;
 VAR_4->rps_buf.logical_base = VAR_5;
 VAR_4->rps_buf.physical_base = VAR_6;

 return 0;
}
