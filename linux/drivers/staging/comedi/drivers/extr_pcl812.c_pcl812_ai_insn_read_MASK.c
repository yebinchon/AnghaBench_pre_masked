
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcl812_private {int mode_reg_int; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; struct pcl812_private* private; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (struct comedi_device*) ;
 int VAR_3 ;
 unsigned int FUNC_3 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_4 (struct comedi_device*,int ,int) ;
 int FUNC_5 (struct comedi_device*) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_4,
          struct comedi_subdevice *VAR_5,
          struct comedi_insn *VAR_6,
          unsigned int *VAR_7)
{
 struct pcl812_private *VAR_8 = VAR_4->private;
 int VAR_9 = 0;
 int VAR_10;

 FUNC_1(VAR_8->mode_reg_int | VAR_2,
      VAR_4->iobase + VAR_1);

 FUNC_4(VAR_4, VAR_6->chanspec, 1);

 for (VAR_10 = 0; VAR_10 < VAR_6->n; VAR_10++) {
  FUNC_2(VAR_4);
  FUNC_5(VAR_4);

  VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_3, 0);
  if (VAR_9)
   break;

  VAR_7[VAR_10] = FUNC_3(VAR_4, VAR_5);
 }
 FUNC_1(VAR_8->mode_reg_int | VAR_0,
      VAR_4->iobase + VAR_1);
 FUNC_2(VAR_4);

 return VAR_9 ? VAR_9 : VAR_6->n;
}
