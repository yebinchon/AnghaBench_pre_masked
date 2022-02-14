
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct comedi_device*) ;
 int VAR_2 ;
 unsigned int FUNC_5 (struct comedi_device*,struct comedi_subdevice*,int *) ;
 int FUNC_6 (struct comedi_device*,unsigned int,unsigned int) ;
 int FUNC_7 (struct comedi_device*,unsigned int,unsigned int) ;
 int FUNC_8 (struct comedi_device*) ;

__attribute__((used)) static int FUNC_9(struct comedi_device *VAR_3,
          struct comedi_subdevice *VAR_4,
          struct comedi_insn *VAR_5,
          unsigned int *VAR_6)
{
 unsigned int VAR_7 = FUNC_0(VAR_5->chanspec);
 unsigned int VAR_8 = FUNC_1(VAR_5->chanspec);
 int VAR_9 = 0;
 int VAR_10;

 FUNC_3(VAR_1, VAR_3->iobase + VAR_0);

 FUNC_6(VAR_3, VAR_7, VAR_8);
 FUNC_7(VAR_3, VAR_7, VAR_7);

 for (VAR_10 = 0; VAR_10 < VAR_5->n; VAR_10++) {
  FUNC_4(VAR_3);
  FUNC_8(VAR_3);

  VAR_9 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_2, 0);
  if (VAR_9)
   break;

  VAR_6[VAR_10] = FUNC_5(VAR_3, VAR_4, ((void*)0));
 }
 FUNC_4(VAR_3);

 return VAR_9 ? VAR_9 : VAR_5->n;
}
