
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s526_private {unsigned int ai_ctrl; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; struct s526_private* private; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int FUNC_2 (unsigned int) ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_3 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_4 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 unsigned int FUNC_5 (scalar_t__) ;
 int FUNC_6 (unsigned int,scalar_t__) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_6,
        struct comedi_subdevice *VAR_7,
        struct comedi_insn *VAR_8,
        unsigned int *VAR_9)
{
 struct s526_private *VAR_10 = VAR_6->private;
 unsigned int VAR_11 = FUNC_0(VAR_8->chanspec);
 unsigned int VAR_12;
 unsigned int VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_12 = FUNC_1(VAR_11) | FUNC_2(VAR_11) |
        VAR_2;
 if (VAR_12 != VAR_10->ai_ctrl) {




  VAR_10->ai_ctrl = VAR_12;
  VAR_12 |= VAR_0;
 }

 for (VAR_15 = 0; VAR_15 < VAR_8->n; VAR_15++) {

  FUNC_6(VAR_12, VAR_6->iobase + VAR_1);
  VAR_12 &= ~VAR_0;


  VAR_14 = FUNC_4(VAR_6, VAR_7, VAR_8, VAR_5, VAR_4);
  if (VAR_14)
   return VAR_14;

  VAR_13 = FUNC_5(VAR_6->iobase + VAR_3);
  VAR_9[VAR_15] = FUNC_3(VAR_7, VAR_13);
 }

 return VAR_8->n;
}
