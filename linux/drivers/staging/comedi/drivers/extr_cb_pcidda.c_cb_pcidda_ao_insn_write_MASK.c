
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {unsigned int n; int chanspec; } ;
struct comedi_device {struct cb_pcidda_private* private; } ;
struct cb_pcidda_private {unsigned int* ao_range; scalar_t__ daqio; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (struct comedi_device*,unsigned int,unsigned int) ;
 int FUNC_5 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_6,
       struct comedi_subdevice *VAR_7,
       struct comedi_insn *VAR_8,
       unsigned int *VAR_9)
{
 struct cb_pcidda_private *VAR_10 = VAR_6->private;
 unsigned int VAR_11 = FUNC_2(VAR_8->chanspec);
 unsigned int VAR_12 = FUNC_3(VAR_8->chanspec);
 unsigned int VAR_13;
 unsigned int VAR_14;

 if (VAR_12 != VAR_10->ao_range[VAR_11])
  FUNC_4(VAR_6, VAR_11, VAR_12);

 VAR_13 = VAR_0 | FUNC_0(VAR_11);

 switch (VAR_12) {
 case 0:
 case 3:
  VAR_13 |= VAR_1;
  break;
 case 1:
 case 4:
  VAR_13 |= VAR_3;
  break;
 case 2:
 case 5:
  VAR_13 |= VAR_2;
  break;
 }

 if (VAR_12 > 2)
  VAR_13 |= VAR_5;

 FUNC_5(VAR_13, VAR_10->daqio + VAR_4);

 for (VAR_14 = 0; VAR_14 < VAR_8->n; VAR_14++)
  FUNC_5(VAR_9[VAR_14], VAR_10->daqio + FUNC_1(VAR_11));

 return VAR_8->n;
}
