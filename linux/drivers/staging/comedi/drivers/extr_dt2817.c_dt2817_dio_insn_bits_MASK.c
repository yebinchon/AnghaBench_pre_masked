
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int state; } ;
struct comedi_insn {int n; } ;
struct comedi_device {unsigned long iobase; } ;


 unsigned long VAR_0 ;
 unsigned int FUNC_0 (struct comedi_subdevice*,unsigned int*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_1,
    struct comedi_subdevice *VAR_2,
    struct comedi_insn *VAR_3,
    unsigned int *VAR_4)
{
 unsigned long VAR_5 = VAR_1->iobase + VAR_0;
 unsigned int VAR_6;
 unsigned int VAR_7;

 VAR_6 = FUNC_0(VAR_2, VAR_4);
 if (VAR_6) {
  if (VAR_6 & 0x000000ff)
   FUNC_2(VAR_2->state & 0xff, VAR_5 + 0);
  if (VAR_6 & 0x0000ff00)
   FUNC_2((VAR_2->state >> 8) & 0xff, VAR_5 + 1);
  if (VAR_6 & 0x00ff0000)
   FUNC_2((VAR_2->state >> 16) & 0xff, VAR_5 + 2);
  if (VAR_6 & 0xff000000)
   FUNC_2((VAR_2->state >> 24) & 0xff, VAR_5 + 3);
 }

 VAR_7 = FUNC_1(VAR_5 + 0);
 VAR_7 |= (FUNC_1(VAR_5 + 1) << 8);
 VAR_7 |= (FUNC_1(VAR_5 + 2) << 16);
 VAR_7 |= (FUNC_1(VAR_5 + 3) << 24);

 VAR_4[1] = VAR_7;

 return VAR_3->n;
}
