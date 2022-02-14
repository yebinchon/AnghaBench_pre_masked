
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dt282x_private {int adcsr; int supcsr; scalar_t__ ad_2scomp; } ;
struct comedi_subdevice {unsigned int maxdata; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; struct dt282x_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_0 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 int VAR_8 ;
 int FUNC_2 (struct comedi_device*,int,int *) ;
 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_9,
          struct comedi_subdevice *VAR_10,
          struct comedi_insn *VAR_11,
          unsigned int *VAR_12)
{
 struct dt282x_private *VAR_13 = VAR_9->private;
 unsigned int VAR_14;
 int VAR_15;
 int VAR_16;


 VAR_13->adcsr = VAR_0;
 FUNC_4(VAR_13->adcsr, VAR_9->iobase + VAR_3);

 FUNC_2(VAR_9, 1, &VAR_11->chanspec);

 FUNC_4(VAR_13->supcsr | VAR_5,
      VAR_9->iobase + VAR_6);
 VAR_15 = FUNC_1(VAR_9, VAR_10, VAR_11,
        VAR_8, VAR_2);
 if (VAR_15)
  return VAR_15;

 for (VAR_16 = 0; VAR_16 < VAR_11->n; VAR_16++) {
  FUNC_4(VAR_13->supcsr | VAR_7,
       VAR_9->iobase + VAR_6);

  VAR_15 = FUNC_1(VAR_9, VAR_10, VAR_11,
         VAR_8, VAR_1);
  if (VAR_15)
   return VAR_15;

  VAR_14 = FUNC_3(VAR_9->iobase + VAR_4);
  VAR_14 &= VAR_10->maxdata;
  if (VAR_13->ad_2scomp)
   VAR_14 = FUNC_0(VAR_10, VAR_14);

  VAR_12[VAR_16] = VAR_14;
 }

 return VAR_16;
}
