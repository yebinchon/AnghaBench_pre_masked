
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int* readback; } ;
struct comedi_insn {int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 scalar_t__ FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_1,
    struct comedi_subdevice *VAR_2,
    struct comedi_insn *VAR_3,
    unsigned int *VAR_4)
{
 unsigned int VAR_5 = FUNC_0(VAR_3->chanspec);
 unsigned int VAR_6;


 VAR_6 = FUNC_3(VAR_1->iobase + FUNC_1(VAR_5));
 VAR_6 |= VAR_0;
 FUNC_4(VAR_6, VAR_1->iobase + FUNC_1(VAR_5));


 FUNC_4(0x0, VAR_1->iobase + FUNC_1(VAR_5));


 FUNC_4(VAR_4[0], VAR_1->iobase + FUNC_2(VAR_5));


 VAR_2->readback[VAR_5] = VAR_4[0];

 return 1;
}
