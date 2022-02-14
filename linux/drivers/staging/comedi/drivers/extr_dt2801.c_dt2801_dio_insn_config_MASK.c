
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {scalar_t__ io_bits; } ;
struct comedi_insn {int n; } ;
struct comedi_device {struct comedi_subdevice* subdevices; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,unsigned int*,int) ;
 int FUNC_1 (struct comedi_device*,int ) ;
 int FUNC_2 (struct comedi_device*,int) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_2,
      struct comedi_subdevice *VAR_3,
      struct comedi_insn *VAR_4,
      unsigned int *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, 0xff);
 if (VAR_6)
  return VAR_6;

 FUNC_1(VAR_2, VAR_3->io_bits ? VAR_1 : VAR_0);
 FUNC_2(VAR_2, (VAR_3 == &VAR_2->subdevices[3]) ? 1 : 0);

 return VAR_4->n;
}
