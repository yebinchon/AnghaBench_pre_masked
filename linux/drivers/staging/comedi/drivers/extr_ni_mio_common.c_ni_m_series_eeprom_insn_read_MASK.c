
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {unsigned int* eeprom_buffer; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {unsigned int n; int chanspec; } ;
struct comedi_device {struct ni_private* private; } ;


 size_t FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_0,
     struct comedi_subdevice *VAR_1,
     struct comedi_insn *VAR_2,
     unsigned int *VAR_3)
{
 struct ni_private *VAR_4 = VAR_0->private;
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2->n; VAR_5++)
  VAR_3[VAR_5] = VAR_4->eeprom_buffer[FUNC_0(VAR_2->chanspec)];

 return VAR_2->n;
}
