
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ni_private {unsigned int* ao_conf; } ;
struct comedi_subdevice {int n_chan; TYPE_1__* range_table; } ;
struct comedi_krange {int max; int min; } ;
struct comedi_device {int class_dev; struct ni_private* private; } ;
struct TYPE_2__ {struct comedi_krange* range; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_2 (unsigned int) ;
 unsigned int VAR_4 ;
 int FUNC_3 (unsigned int) ;
 int VAR_5 ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct comedi_device*,int,int ) ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_6,
       struct comedi_subdevice *VAR_7,
       unsigned int VAR_8[],
       unsigned int VAR_9, int VAR_10)
{
 struct ni_private *VAR_11 = VAR_6->private;
 unsigned int VAR_12;
 unsigned int VAR_13;
 unsigned int VAR_14;
 int VAR_15;
 int VAR_16 = 0;

 if (VAR_10) {
  for (VAR_15 = 0; VAR_15 < VAR_7->n_chan; ++VAR_15) {
   VAR_11->ao_conf[VAR_15] &= ~VAR_4;
   FUNC_6(VAR_6, VAR_11->ao_conf[VAR_15],
      FUNC_2(VAR_15));
   FUNC_6(VAR_6, 0xf, FUNC_4(VAR_15));
  }
 }
 for (VAR_15 = 0; VAR_15 < VAR_9; VAR_15++) {
  const struct comedi_krange *VAR_17;

  VAR_13 = FUNC_0(VAR_8[VAR_15]);
  VAR_12 = FUNC_1(VAR_8[VAR_15]);
  VAR_17 = VAR_7->range_table->range + VAR_12;
  VAR_16 = 0;
  VAR_14 = 0;
  switch (VAR_17->max - VAR_17->min) {
  case 20000000:
   VAR_14 |= VAR_2;
   FUNC_6(VAR_6, 0, FUNC_3(VAR_13));
   break;
  case 10000000:
   VAR_14 |= VAR_3;
   FUNC_6(VAR_6, 0, FUNC_3(VAR_13));
   break;
  case 4000000:
   VAR_14 |= VAR_2;
   FUNC_6(VAR_6, VAR_5,
      FUNC_3(VAR_13));
   break;
  case 2000000:
   VAR_14 |= VAR_3;
   FUNC_6(VAR_6, VAR_5,
      FUNC_3(VAR_13));
   break;
  default:
   FUNC_5(VAR_6->class_dev,
    "bug! unhandled ao reference voltage\n");
   break;
  }
  switch (VAR_17->max + VAR_17->min) {
  case 0:
   VAR_14 |= VAR_0;
   break;
  case 10000000:
   VAR_14 |= VAR_1;
   break;
  default:
   FUNC_5(VAR_6->class_dev,
    "bug! unhandled ao offset voltage\n");
   break;
  }
  if (VAR_10)
   VAR_14 |= VAR_4;
  FUNC_6(VAR_6, VAR_14, FUNC_2(VAR_13));
  VAR_11->ao_conf[VAR_13] = VAR_14;
  FUNC_6(VAR_6, VAR_15, FUNC_4(VAR_13));
 }
 return VAR_16;
}
