
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct mite {scalar_t__ mmio; TYPE_1__* channels; struct pci_dev* pcidev; int lock; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {unsigned int channel; int done; struct mite* mite; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 struct pci_dev* FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct mite*) ;
 struct mite* FUNC_3 (int,int ) ;
 int FUNC_4 (struct comedi_device*,struct mite*,int) ;
 int FUNC_5 (int *) ;

struct mite *FUNC_6(struct comedi_device *VAR_2, bool VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_0(VAR_2);
 struct mite *VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 FUNC_5(&VAR_5->lock);
 VAR_5->pcidev = VAR_4;
 for (VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6) {
  VAR_5->channels[VAR_6].mite = VAR_5;
  VAR_5->channels[VAR_6].channel = VAR_6;
  VAR_5->channels[VAR_6].done = 1;
 }

 VAR_7 = FUNC_4(VAR_2, VAR_5, VAR_3);
 if (VAR_7) {
  if (VAR_5->mmio)
   FUNC_1(VAR_5->mmio);
  FUNC_2(VAR_5);
  return ((void*)0);
 }

 return VAR_5;
}
