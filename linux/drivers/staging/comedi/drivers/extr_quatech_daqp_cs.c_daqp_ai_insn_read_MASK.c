
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct daqp_private {scalar_t__ stop; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; struct daqp_private* private; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 int VAR_11 ;
 unsigned int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_2 (struct comedi_device*,int ,int) ;
 int FUNC_3 (struct comedi_device*,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_12,
        struct comedi_subdevice *VAR_13,
        struct comedi_insn *VAR_14,
        unsigned int *VAR_15)
{
 struct daqp_private *VAR_16 = VAR_12->private;
 int VAR_17 = 0;
 int VAR_18;

 if (VAR_16->stop)
  return -VAR_10;

 FUNC_5(0, VAR_12->iobase + VAR_0);


 FUNC_5(VAR_5, VAR_12->iobase + VAR_3);


 FUNC_2(VAR_12, VAR_14->chanspec, 1);


 FUNC_5(VAR_4, VAR_12->iobase + VAR_3);


 FUNC_5(VAR_7, VAR_12->iobase + VAR_8);

 VAR_17 = FUNC_3(VAR_12, 10000);
 if (VAR_17)
  return VAR_17;

 for (VAR_18 = 0; VAR_18 < VAR_14->n; VAR_18++) {

  FUNC_5(VAR_1 | VAR_2,
       VAR_12->iobase + VAR_3);

  VAR_17 = FUNC_0(VAR_12, VAR_13, VAR_14, VAR_11, 0);
  if (VAR_17)
   break;


  FUNC_4(VAR_12->iobase + VAR_9);

  VAR_15[VAR_18] = FUNC_1(VAR_12, VAR_13);
 }


 FUNC_5(VAR_6, VAR_12->iobase + VAR_3);
 FUNC_4(VAR_12->iobase + VAR_9);

 return VAR_17 ? VAR_17 : VAR_14->n;
}
