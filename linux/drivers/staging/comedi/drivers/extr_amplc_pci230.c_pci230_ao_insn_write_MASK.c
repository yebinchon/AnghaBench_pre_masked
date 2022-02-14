
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci230_private {scalar_t__ daqio; int ao_bipolar; } ;
struct comedi_subdevice {unsigned int* readback; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {struct pci230_private* private; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_3 (unsigned int,scalar_t__) ;
 int FUNC_4 (struct comedi_device*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_1,
    struct comedi_subdevice *VAR_2,
    struct comedi_insn *VAR_3,
    unsigned int *VAR_4)
{
 struct pci230_private *VAR_5 = VAR_1->private;
 unsigned int VAR_6 = FUNC_0(VAR_3->chanspec);
 unsigned int VAR_7 = FUNC_1(VAR_3->chanspec);
 unsigned int VAR_8 = VAR_2->readback[VAR_6];
 int VAR_9;





 VAR_5->ao_bipolar = FUNC_2(VAR_2, VAR_7);
 FUNC_3(VAR_7, VAR_5->daqio + VAR_0);

 for (VAR_9 = 0; VAR_9 < VAR_3->n; VAR_9++) {
  VAR_8 = VAR_4[VAR_9];
  FUNC_4(VAR_1, VAR_8, VAR_6);
 }
 VAR_2->readback[VAR_6] = VAR_8;

 return VAR_3->n;
}
