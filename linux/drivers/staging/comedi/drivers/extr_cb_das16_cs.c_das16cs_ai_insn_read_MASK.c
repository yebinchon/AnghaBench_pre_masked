
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct das16cs_private {int misc1; int misc2; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; struct das16cs_private* private; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_4 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 int VAR_15 ;
 unsigned int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_16,
    struct comedi_subdevice *VAR_17,
    struct comedi_insn *VAR_18,
    unsigned int *VAR_19)
{
 struct das16cs_private *VAR_20 = VAR_16->private;
 int VAR_21 = FUNC_1(VAR_18->chanspec);
 int VAR_22 = FUNC_2(VAR_18->chanspec);
 int VAR_23 = FUNC_0(VAR_18->chanspec);
 int VAR_24;
 int VAR_25;

 FUNC_6(FUNC_3(VAR_21),
      VAR_16->iobase + VAR_2);


 VAR_20->misc1 &= ~(VAR_4 | VAR_5 |
         VAR_3);
 if (VAR_23 == VAR_0)
  VAR_20->misc1 &= ~VAR_7;
 else
  VAR_20->misc1 |= VAR_7;
 FUNC_6(VAR_20->misc1, VAR_16->iobase + VAR_6);

 VAR_20->misc2 &= ~(VAR_13 | VAR_12);
 switch (VAR_22) {
 case 0:
  VAR_20->misc2 |= VAR_8;
  break;
 case 1:
  VAR_20->misc2 |= VAR_9;
  break;
 case 2:
  VAR_20->misc2 |= VAR_10;
  break;
 case 3:
  VAR_20->misc2 |= VAR_11;
  break;
 }
 FUNC_6(VAR_20->misc2, VAR_16->iobase + VAR_14);

 for (VAR_25 = 0; VAR_25 < VAR_18->n; VAR_25++) {
  FUNC_6(0, VAR_16->iobase + VAR_1);

  VAR_24 = FUNC_4(VAR_16, VAR_17, VAR_18, VAR_15, 0);
  if (VAR_24)
   return VAR_24;

  VAR_19[VAR_25] = FUNC_5(VAR_16->iobase + VAR_1);
 }

 return VAR_25;
}
