
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 unsigned int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*,int ,int) ;
 int VAR_3 ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_4,
    struct comedi_subdevice *VAR_5,
    struct comedi_insn *VAR_6,
    unsigned int *VAR_7)
{
 int VAR_8;
 int VAR_9;

 FUNC_2(VAR_4, VAR_5, VAR_6->chanspec, 1);


 VAR_8 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_3,
        VAR_0);
 if (VAR_8)
  return VAR_8;

 for (VAR_9 = 0; VAR_9 < VAR_6->n; VAR_9++) {
  FUNC_3(0xff, VAR_4->iobase + VAR_1);

  VAR_8 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_3,
         VAR_2);
  if (VAR_8)
   return VAR_8;

  VAR_7[VAR_9] = FUNC_1(VAR_4, VAR_5);
 }

 return VAR_6->n;
}
