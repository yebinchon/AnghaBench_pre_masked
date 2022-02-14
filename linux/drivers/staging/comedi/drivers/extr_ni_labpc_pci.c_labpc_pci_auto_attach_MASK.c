
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int irq; } ;
struct labpc_boardinfo {int name; } ;
struct comedi_device {int mmio; int board_name; struct labpc_boardinfo const* board_ptr; } ;


 unsigned long FUNC_0 (struct labpc_boardinfo*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct comedi_device*) ;
 struct pci_dev* FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (struct comedi_device*,int ,int ) ;
 struct labpc_boardinfo* VAR_3 ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_4,
     unsigned long VAR_5)
{
 struct pci_dev *VAR_6 = FUNC_2(VAR_4);
 const struct labpc_boardinfo *VAR_7 = ((void*)0);
 int VAR_8;

 if (VAR_5 < FUNC_0(VAR_3))
  VAR_7 = &VAR_3[VAR_5];
 if (!VAR_7)
  return -VAR_0;
 VAR_4->board_ptr = VAR_7;
 VAR_4->board_name = VAR_7->name;

 VAR_8 = FUNC_1(VAR_4);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_4(VAR_6);
 if (VAR_8)
  return VAR_8;

 VAR_4->mmio = FUNC_5(VAR_6, 1);
 if (!VAR_4->mmio)
  return -VAR_1;

 return FUNC_3(VAR_4, VAR_6->irq, VAR_2);
}
