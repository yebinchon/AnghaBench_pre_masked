
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int* readback; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {unsigned long iobase; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned long FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_0,
        struct comedi_subdevice *VAR_1,
        struct comedi_insn *VAR_2,
        unsigned int *VAR_3)
{
 unsigned int VAR_4 = FUNC_0(VAR_2->chanspec);
 unsigned long VAR_5 = VAR_0->iobase + FUNC_1(VAR_4);
 unsigned int VAR_6 = VAR_1->readback[VAR_4];
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_2->n; VAR_7++) {
  VAR_6 = VAR_3[VAR_7];
  FUNC_2(VAR_6 & 0x00ff, VAR_5);
  FUNC_2((VAR_6 >> 8) & 0x00ff, VAR_5 + 1);
 }
 VAR_1->readback[VAR_4] = VAR_6;

 return VAR_2->n;
}
