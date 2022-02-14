
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (unsigned short) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct comedi_device*,int *,int) ;
 unsigned short FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_3,
    struct comedi_subdevice *VAR_4,
    struct comedi_insn *VAR_5,
    unsigned int *VAR_6)
{
 int VAR_7;
 int VAR_8;

 FUNC_2(VAR_3, &VAR_5->chanspec, 1);

 for (VAR_8 = 0; VAR_8 < VAR_5->n; VAR_8++) {
  unsigned short VAR_9;


  FUNC_4(0, VAR_3->iobase + VAR_1);

  FUNC_4(0, VAR_3->iobase + VAR_0);

  VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_2, 0);
  if (VAR_7)
   return VAR_7;

  VAR_9 = FUNC_3(VAR_3->iobase + VAR_0);
  VAR_6[VAR_8] = FUNC_0(VAR_9);
 }

 return VAR_5->n;
}
