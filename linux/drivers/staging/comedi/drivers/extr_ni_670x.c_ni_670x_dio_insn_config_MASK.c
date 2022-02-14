
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int io_bits; } ;
struct comedi_insn {int n; } ;
struct comedi_device {scalar_t__ mmio; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,unsigned int*,int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_1,
       struct comedi_subdevice *VAR_2,
       struct comedi_insn *VAR_3,
       unsigned int *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, 0);
 if (VAR_5)
  return VAR_5;

 FUNC_1(VAR_2->io_bits, VAR_1->mmio + VAR_0);

 return VAR_3->n;
}
