
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct pci9118_boardinfo {int name; } ;
struct comedi_device {int board_name; struct pci9118_boardinfo const* board_ptr; } ;


 unsigned long FUNC_0 (struct pci9118_boardinfo*) ;
 int VAR_0 ;
 struct pci_dev* FUNC_1 (struct comedi_device*) ;
 struct pci9118_boardinfo* VAR_1 ;
 int FUNC_2 (struct comedi_device*,int ,int ) ;
 int FUNC_3 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_2,
          unsigned long VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_1(VAR_2);
 const struct pci9118_boardinfo *VAR_5 = ((void*)0);

 if (VAR_3 < FUNC_0(VAR_1))
  VAR_5 = &VAR_1[VAR_3];
 if (!VAR_5)
  return -VAR_0;
 VAR_2->board_ptr = VAR_5;
 VAR_2->board_name = VAR_5->name;





 FUNC_3(VAR_4);

 return FUNC_2(VAR_2, 0, 0);
}
