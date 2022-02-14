
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct pci_8255_boardinfo {int n_8255; int dio_badr; scalar_t__ has_mite; int name; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {int mmio; struct comedi_subdevice* subdevices; int iobase; int board_name; struct pci_8255_boardinfo const* board_ptr; } ;


 unsigned long FUNC_0 (struct pci_8255_boardinfo*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct comedi_device*,int) ;
 int FUNC_2 (struct comedi_device*) ;
 struct pci_dev* FUNC_3 (struct comedi_device*) ;
 struct pci_8255_boardinfo* VAR_4 ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int ) ;
 int FUNC_6 (struct pci_dev*,int ) ;
 int FUNC_7 (struct pci_dev*,int ) ;
 int FUNC_8 (struct comedi_device*,struct comedi_subdevice*,int *,int) ;
 int FUNC_9 (struct comedi_device*,struct comedi_subdevice*,int *,int) ;

__attribute__((used)) static int FUNC_10(struct comedi_device *VAR_5,
    unsigned long VAR_6)
{
 struct pci_dev *VAR_7 = FUNC_3(VAR_5);
 const struct pci_8255_boardinfo *VAR_8 = ((void*)0);
 struct comedi_subdevice *VAR_9;
 int VAR_10;
 int VAR_11;

 if (VAR_6 < FUNC_0(VAR_4))
  VAR_8 = &VAR_4[VAR_6];
 if (!VAR_8)
  return -VAR_0;
 VAR_5->board_ptr = VAR_8;
 VAR_5->board_name = VAR_8->name;

 VAR_10 = FUNC_2(VAR_5);
 if (VAR_10)
  return VAR_10;

 if (VAR_8->has_mite) {
  VAR_10 = FUNC_4(VAR_7);
  if (VAR_10)
   return VAR_10;
 }

 if ((FUNC_6(VAR_7, VAR_8->dio_badr) & VAR_3)) {
  VAR_5->mmio = FUNC_5(VAR_7, VAR_8->dio_badr);
  if (!VAR_5->mmio)
   return -VAR_1;
 } else {
  VAR_5->iobase = FUNC_7(VAR_7, VAR_8->dio_badr);
 }






 VAR_10 = FUNC_1(VAR_5, VAR_8->n_8255);
 if (VAR_10)
  return VAR_10;

 for (VAR_11 = 0; VAR_11 < VAR_8->n_8255; VAR_11++) {
  VAR_9 = &VAR_5->subdevices[VAR_11];
  if (VAR_5->mmio)
   VAR_10 = FUNC_9(VAR_5, VAR_9, ((void*)0), VAR_11 * VAR_2);
  else
   VAR_10 = FUNC_8(VAR_5, VAR_9, ((void*)0), VAR_11 * VAR_2);
  if (VAR_10)
   return VAR_10;
 }

 return 0;
}
