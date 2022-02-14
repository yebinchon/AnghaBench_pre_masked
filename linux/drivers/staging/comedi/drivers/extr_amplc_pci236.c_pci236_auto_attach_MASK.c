
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int irq; } ;
struct pc236_private {void* lcr_iobase; } ;
struct comedi_device {int board_name; TYPE_1__* board_ptr; int class_dev; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct comedi_device*,unsigned long,int ,int ) ;
 struct pc236_private* FUNC_1 (struct comedi_device*,int) ;
 int FUNC_2 (struct comedi_device*) ;
 struct pci_dev* FUNC_3 (struct comedi_device*) ;
 int FUNC_4 (int ,char*,int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_5 (struct pci_dev*) ;
 void* FUNC_6 (struct pci_dev*,int) ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_3,
         unsigned long VAR_4)
{
 struct pci_dev *VAR_5 = FUNC_3(VAR_3);
 struct pc236_private *VAR_6;
 unsigned long VAR_7;
 int VAR_8;

 FUNC_4(VAR_3->class_dev, "amplc_pci236: attach pci %s\n",
   FUNC_5(VAR_5));

 VAR_6 = FUNC_1(VAR_3, sizeof(*VAR_6));
 if (!VAR_6)
  return -VAR_0;

 VAR_3->board_ptr = &VAR_2;
 VAR_3->board_name = VAR_2.name;
 VAR_8 = FUNC_2(VAR_3);
 if (VAR_8)
  return VAR_8;

 VAR_6->lcr_iobase = FUNC_6(VAR_5, 1);
 VAR_7 = FUNC_6(VAR_5, 2);
 return FUNC_0(VAR_3, VAR_7, VAR_5->irq,
      VAR_1);
}
