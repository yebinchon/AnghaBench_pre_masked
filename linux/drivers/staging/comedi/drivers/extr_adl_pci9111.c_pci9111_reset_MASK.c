
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci9111_private_data {int lcr_io_base; } ;
struct comedi_device {scalar_t__ iobase; struct pci9111_private_data* private; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_1)
{
 struct pci9111_private_data *VAR_2 = VAR_1->private;


 FUNC_1(VAR_2->lcr_io_base, 1, 1, 1,
      1, 0);


 FUNC_0(0, VAR_1->iobase + VAR_0);

 return 0;
}
