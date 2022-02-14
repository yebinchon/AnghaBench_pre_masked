
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {struct apci1564_private* private; } ;
struct apci1564_private {unsigned long counters; } ;


 scalar_t__ VAR_0 ;
 unsigned long FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_1,
          struct comedi_subdevice *VAR_2,
          struct comedi_insn *VAR_3,
          unsigned int *VAR_4)
{
 struct apci1564_private *VAR_5 = VAR_1->private;
 unsigned int VAR_6 = FUNC_1(VAR_3->chanspec);
 unsigned long VAR_7 = VAR_5->counters + FUNC_0(VAR_6);
 int VAR_8;


 for (VAR_8 = 0; VAR_8 < VAR_3->n; VAR_8++)
  VAR_4[VAR_8] = FUNC_2(VAR_7 + VAR_0);

 return VAR_3->n;
}
