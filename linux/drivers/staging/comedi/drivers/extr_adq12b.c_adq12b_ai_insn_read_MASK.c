
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; struct adq12b_private* private; } ;
struct adq12b_private {unsigned int last_ctreg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 unsigned int FUNC_5 (scalar_t__) ;
 int FUNC_6 (unsigned int,scalar_t__) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct comedi_device *VAR_4,
          struct comedi_subdevice *VAR_5,
          struct comedi_insn *VAR_6,
          unsigned int *VAR_7)
{
 struct adq12b_private *VAR_8 = VAR_4->private;
 unsigned int VAR_9 = FUNC_2(VAR_6->chanspec);
 unsigned int VAR_10 = FUNC_3(VAR_6->chanspec);
 unsigned int VAR_11;
 int VAR_12;
 int VAR_13;


 VAR_11 = FUNC_1(VAR_10) | FUNC_0(VAR_9);
 if (VAR_11 != VAR_8->last_ctreg) {
  FUNC_6(VAR_11, VAR_4->iobase + VAR_2);
  VAR_8->last_ctreg = VAR_11;
  FUNC_7(50, 100);
 }

 VAR_11 = FUNC_5(VAR_4->iobase + VAR_1);

 for (VAR_13 = 0; VAR_13 < VAR_6->n; VAR_13++) {
  VAR_12 = FUNC_4(VAR_4, VAR_5, VAR_6, VAR_3, 0);
  if (VAR_12)
   return VAR_12;

  VAR_11 = FUNC_5(VAR_4->iobase + VAR_0) << 8;
  VAR_11 |= FUNC_5(VAR_4->iobase + VAR_1);

  VAR_7[VAR_13] = VAR_11;
 }

 return VAR_6->n;
}
