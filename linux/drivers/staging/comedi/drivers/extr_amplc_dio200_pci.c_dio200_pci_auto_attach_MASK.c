
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int irq; } ;
struct dio200_board {unsigned int mainbar; scalar_t__ is_pcie; int name; } ;
struct comedi_device {int iobase; int class_dev; int mmio; int board_name; TYPE_1__* driver; struct dio200_board const* board_ptr; } ;
struct TYPE_2__ {int driver_name; } ;


 unsigned long FUNC_0 (struct dio200_board*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct comedi_device*,int ,int ) ;
 int FUNC_2 (struct comedi_device*) ;
 struct pci_dev* FUNC_3 (struct comedi_device*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*,int ,int ,int ) ;
 struct dio200_board* VAR_4 ;
 int FUNC_6 (struct comedi_device*) ;
 int FUNC_7 (struct pci_dev*,unsigned int) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*,unsigned int) ;
 int FUNC_10 (struct pci_dev*,unsigned int) ;

__attribute__((used)) static int FUNC_11(struct comedi_device *VAR_5,
      unsigned long VAR_6)
{
 struct pci_dev *VAR_7 = FUNC_3(VAR_5);
 const struct dio200_board *VAR_8 = ((void*)0);
 unsigned int VAR_9;
 int VAR_10;

 if (VAR_6 < FUNC_0(VAR_4))
  VAR_8 = &VAR_4[VAR_6];
 if (!VAR_8)
  return -VAR_0;
 VAR_5->board_ptr = VAR_8;
 VAR_5->board_name = VAR_8->name;

 FUNC_5(VAR_5->class_dev, "%s: attach pci %s (%s)\n",
   VAR_5->driver->driver_name, FUNC_8(VAR_7), VAR_5->board_name);

 VAR_10 = FUNC_2(VAR_5);
 if (VAR_10)
  return VAR_10;

 VAR_9 = VAR_8->mainbar;
 if (FUNC_9(VAR_7, VAR_9) & VAR_2) {
  VAR_5->mmio = FUNC_7(VAR_7, VAR_9);
  if (!VAR_5->mmio) {
   FUNC_4(VAR_5->class_dev,
    "error! cannot remap registers\n");
   return -VAR_1;
  }
 } else {
  VAR_5->iobase = FUNC_10(VAR_7, VAR_9);
 }

 if (VAR_8->is_pcie) {
  VAR_10 = FUNC_6(VAR_5);
  if (VAR_10 < 0)
   return VAR_10;
 }

 return FUNC_1(VAR_5, VAR_7->irq, VAR_3);
}
