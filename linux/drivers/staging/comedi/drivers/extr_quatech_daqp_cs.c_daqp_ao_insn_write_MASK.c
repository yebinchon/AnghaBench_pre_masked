
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct daqp_private {scalar_t__ stop; } ;
struct comedi_subdevice {unsigned int* readback; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; struct daqp_private* private; } ;


 unsigned int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_1 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_4,
         struct comedi_subdevice *VAR_5,
         struct comedi_insn *VAR_6,
         unsigned int *VAR_7)
{
 struct daqp_private *VAR_8 = VAR_4->private;
 unsigned int VAR_9 = FUNC_0(VAR_6->chanspec);
 int VAR_10;

 if (VAR_8->stop)
  return -VAR_2;


 FUNC_3(0, VAR_4->iobase + VAR_1);

 for (VAR_10 = 0; VAR_10 < VAR_6->n; VAR_10++) {
  unsigned int VAR_11 = VAR_7[VAR_10];
  int VAR_12;


  VAR_12 = FUNC_2(VAR_4, VAR_5, VAR_6, VAR_3, 0);
  if (VAR_12)
   return VAR_12;


  FUNC_4((VAR_9 << 12) | FUNC_1(VAR_5, VAR_11),
       VAR_4->iobase + VAR_0);

  VAR_5->readback[VAR_9] = VAR_11;
 }

 return VAR_6->n;
}
