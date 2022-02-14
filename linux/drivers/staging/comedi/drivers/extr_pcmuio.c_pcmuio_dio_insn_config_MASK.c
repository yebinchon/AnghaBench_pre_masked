
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int io_bits; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,unsigned int*,int ) ;
 int FUNC_1 (struct comedi_subdevice*) ;
 int FUNC_2 (struct comedi_subdevice*) ;
 int FUNC_3 (struct comedi_device*,int ,int,int ,int) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_1,
      struct comedi_subdevice *VAR_2,
      struct comedi_insn *VAR_3,
      unsigned int *VAR_4)
{
 int VAR_5 = FUNC_1(VAR_2);
 int VAR_6 = FUNC_2(VAR_2);
 int VAR_7;

 VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, 0);
 if (VAR_7)
  return VAR_7;

 if (VAR_4[0] == VAR_0)
  FUNC_3(VAR_1, VAR_2->io_bits, VAR_5, 0, VAR_6);

 return VAR_3->n;
}
