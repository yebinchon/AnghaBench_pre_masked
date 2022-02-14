
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int io_bits; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,unsigned int*,unsigned int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_2,
        struct comedi_subdevice *VAR_3,
        struct comedi_insn *VAR_4,
        unsigned int *VAR_5)
{
 unsigned int VAR_6 = FUNC_0(VAR_4->chanspec);
 unsigned int VAR_7 = 0;
 int VAR_8;






 if (VAR_5[0] != VAR_1) {

  if (VAR_6 < 16)
   return -VAR_0;


  VAR_7 = 0xff0000;
 }

 VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_7);
 if (VAR_8)
  return VAR_8;


 FUNC_2((VAR_3->io_bits >> 24) & 0xff, VAR_2->iobase + 224);

 return VAR_4->n;
}
