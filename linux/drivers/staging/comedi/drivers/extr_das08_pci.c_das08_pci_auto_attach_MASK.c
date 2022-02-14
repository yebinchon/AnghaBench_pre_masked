
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct das08_private_struct {int dummy; } ;
struct comedi_device {int iobase; int * board_ptr; } ;


 int VAR_0 ;
 struct das08_private_struct* FUNC_0 (struct comedi_device*,int) ;
 int FUNC_1 (struct comedi_device*) ;
 struct pci_dev* FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (struct comedi_device*,int ) ;
 int * VAR_1 ;
 int FUNC_4 (struct pci_dev*,int) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_2,
     unsigned long VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_2(VAR_2);
 struct das08_private_struct *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_2, sizeof(*VAR_5));
 if (!VAR_5)
  return -VAR_0;


 VAR_2->board_ptr = &VAR_1[0];

 VAR_6 = FUNC_1(VAR_2);
 if (VAR_6)
  return VAR_6;
 VAR_2->iobase = FUNC_4(VAR_4, 2);

 return FUNC_3(VAR_2, VAR_2->iobase);
}
