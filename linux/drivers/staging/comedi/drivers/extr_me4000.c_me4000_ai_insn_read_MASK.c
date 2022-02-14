
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int subdev_flags; int n_chan; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; int class_dev; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int FUNC_3 (unsigned int) ;
 unsigned int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 unsigned int FUNC_4 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_5 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_6 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (scalar_t__) ;
 int VAR_13 ;
 unsigned int FUNC_9 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_10 (struct comedi_device*) ;
 int FUNC_11 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct comedi_device *VAR_14,
          struct comedi_subdevice *VAR_15,
          struct comedi_insn *VAR_16,
          unsigned int *VAR_17)
{
 unsigned int VAR_18 = FUNC_1(VAR_16->chanspec);
 unsigned int VAR_19 = FUNC_2(VAR_16->chanspec);
 unsigned int VAR_20 = FUNC_0(VAR_16->chanspec);
 unsigned int VAR_21;
 int VAR_22 = 0;
 int VAR_23;

 VAR_21 = VAR_18 | FUNC_3(VAR_19);
 if (VAR_20 == VAR_0) {
  if (!(VAR_15->subdev_flags & VAR_12)) {
   FUNC_7(VAR_14->class_dev,
    "Differential inputs are not available\n");
   return -VAR_1;
  }

  if (!FUNC_5(VAR_15, VAR_19)) {
   FUNC_7(VAR_14->class_dev,
    "Range must be bipolar when aref = diff\n");
   return -VAR_1;
  }

  if (VAR_18 >= (VAR_15->n_chan / 2)) {
   FUNC_7(VAR_14->class_dev,
    "Analog input is not available\n");
   return -VAR_1;
  }
  VAR_21 |= VAR_8;
 }

 VAR_21 |= VAR_9;


 FUNC_11(VAR_5 | VAR_6,
      VAR_14->iobase + VAR_7);


 FUNC_11(VAR_21, VAR_14->iobase + VAR_2);


 FUNC_11(VAR_10, VAR_14->iobase + VAR_4);
 FUNC_11(VAR_10, VAR_14->iobase + VAR_3);

 for (VAR_23 = 0; VAR_23 < VAR_16->n; VAR_23++) {
  unsigned int VAR_24;


  FUNC_8(VAR_14->iobase + VAR_11);

  VAR_22 = FUNC_6(VAR_14, VAR_15, VAR_16, VAR_13, 0);
  if (VAR_22)
   break;

  VAR_24 = FUNC_9(VAR_14, VAR_15);
  VAR_17[VAR_23] = FUNC_4(VAR_15, VAR_24);
 }

 FUNC_10(VAR_14);

 return VAR_22 ? VAR_22 : VAR_16->n;
}
