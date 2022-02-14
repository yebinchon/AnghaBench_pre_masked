
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int chanspec; int n; } ;
struct comedi_device {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 int VAR_4 ;
 unsigned int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_5,
          struct comedi_subdevice *VAR_6,
          struct comedi_insn *VAR_7,
          unsigned int *VAR_8)
{
 int VAR_9;
 int VAR_10;





 FUNC_2(VAR_7->chanspec, VAR_5->iobase + VAR_3);

 for (VAR_10 = 0; VAR_10 < VAR_7->n; VAR_10++) {

  FUNC_2(VAR_2, VAR_5->iobase + VAR_0);
  FUNC_3(1);
  FUNC_2(VAR_1 | VAR_2, VAR_5->iobase + VAR_0);
  FUNC_3(1);
  FUNC_2(0, VAR_5->iobase + VAR_0);
  FUNC_3(1);


  VAR_9 = FUNC_0(VAR_5, VAR_6, VAR_7, VAR_4, 0);
  if (VAR_9)
   return VAR_9;

  VAR_8[VAR_10] = FUNC_1(VAR_5, VAR_6);
 }

 return VAR_7->n;
}
