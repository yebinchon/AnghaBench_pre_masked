
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,unsigned int*,unsigned int) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_0,
         struct comedi_subdevice *VAR_1,
         struct comedi_insn *VAR_2,
         unsigned int *VAR_3)
{
 unsigned int VAR_4 = FUNC_0(VAR_2->chanspec);
 unsigned int VAR_5;
 int VAR_6;

 if (VAR_4 < 8)
  VAR_5 = 0x0000ff;
 else if (VAR_4 < 16)
  VAR_5 = 0x00ff00;
 else if (VAR_4 < 20)
  VAR_5 = 0x0f0000;
 else
  VAR_5 = 0xf00000;

 VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_5);
 if (VAR_6)
  return VAR_6;

 FUNC_2(VAR_0, VAR_1);

 return VAR_2->n;
}
