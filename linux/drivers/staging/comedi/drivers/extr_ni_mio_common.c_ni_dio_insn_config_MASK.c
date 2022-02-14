
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {int dio_control; } ;
struct comedi_subdevice {int io_bits; } ;
struct comedi_insn {int n; } ;
struct comedi_device {struct ni_private* private; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,unsigned int*,int ) ;
 int FUNC_2 (struct comedi_device*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_2,
         struct comedi_subdevice *VAR_3,
         struct comedi_insn *VAR_4,
         unsigned int *VAR_5)
{
 struct ni_private *VAR_6 = VAR_2->private;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, 0);
 if (VAR_7)
  return VAR_7;

 VAR_6->dio_control &= ~VAR_0;
 VAR_6->dio_control |= FUNC_0(VAR_3->io_bits);
 FUNC_2(VAR_2, VAR_6->dio_control, VAR_1);

 return VAR_4->n;
}
