
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int* readback; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;


 unsigned int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (unsigned int) ;
 int VAR_1 ;
 int FUNC_2 (struct comedi_device*,int) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_2,
     struct comedi_subdevice *VAR_3,
     struct comedi_insn *VAR_4,
     unsigned int *VAR_5)
{
 unsigned int VAR_6 = FUNC_0(VAR_4->chanspec);
 unsigned int VAR_7 = VAR_3->readback[VAR_6];
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_4->n; VAR_8++) {
  VAR_7 = VAR_5[VAR_8];
  FUNC_2(VAR_2, VAR_1 |
          FUNC_1(VAR_6));
  FUNC_3(VAR_7, VAR_2->iobase + VAR_0);
  FUNC_2(VAR_2, 0);
 }
 VAR_3->readback[VAR_6] = VAR_7;

 return VAR_4->n;
}
