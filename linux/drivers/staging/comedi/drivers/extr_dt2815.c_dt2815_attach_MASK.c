
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dt2815_private {struct comedi_lrange const** range_type_list; } ;
struct comedi_subdevice {int maxdata; int n_chan; struct comedi_lrange const** range_table_list; int insn_read; int insn_write; int subdev_flags; int type; } ;
struct comedi_lrange {int dummy; } ;
struct comedi_device {scalar_t__ iobase; int class_dev; struct comedi_subdevice* subdevices; } ;
struct comedi_devconfig {int* options; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct dt2815_private* FUNC_0 (struct comedi_device*,int) ;
 int FUNC_1 (struct comedi_device*,int) ;
 int FUNC_2 (struct comedi_device*,int,int) ;
 int FUNC_3 (int ,char*,unsigned int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;
 struct comedi_lrange VAR_7 ;
 struct comedi_lrange VAR_8 ;
 struct comedi_lrange VAR_9 ;
 struct comedi_lrange VAR_10 ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_11, struct comedi_devconfig *VAR_12)
{
 struct dt2815_private *VAR_13;
 struct comedi_subdevice *VAR_14;
 int VAR_15;
 const struct comedi_lrange *VAR_16, *VAR_17;
 int VAR_18;

 VAR_18 = FUNC_2(VAR_11, VAR_12->options[0], 0x2);
 if (VAR_18)
  return VAR_18;

 VAR_18 = FUNC_1(VAR_11, 1);
 if (VAR_18)
  return VAR_18;

 VAR_13 = FUNC_0(VAR_11, sizeof(*VAR_13));
 if (!VAR_13)
  return -VAR_3;

 VAR_14 = &VAR_11->subdevices[0];

 VAR_14->type = VAR_0;
 VAR_14->subdev_flags = VAR_4;
 VAR_14->maxdata = 0xfff;
 VAR_14->n_chan = 8;
 VAR_14->insn_write = VAR_5;
 VAR_14->insn_read = VAR_6;
 VAR_14->range_table_list = VAR_13->range_type_list;

 VAR_16 = (VAR_12->options[3])
     ? &VAR_8 : &VAR_7;
 VAR_17 = (VAR_12->options[2])
     ? &VAR_9 : &VAR_10;
 for (VAR_15 = 0; VAR_15 < 8; VAR_15++) {
  VAR_13->range_type_list[VAR_15] = (VAR_12->options[5 + VAR_15])
      ? VAR_16 : VAR_17;
 }


 FUNC_5(0x00, VAR_11->iobase + VAR_2);
 for (VAR_15 = 0; VAR_15 < 100; VAR_15++) {

  unsigned int VAR_19;

  FUNC_6(1000, 3000);
  VAR_19 = FUNC_4(VAR_11->iobase + VAR_2);
  if (VAR_19 == 4) {
   unsigned int VAR_20;

   VAR_20 = (VAR_12->options[4] & 0x3) << 3 | 0x7;
   FUNC_5(VAR_20, VAR_11->iobase + VAR_1);
   FUNC_3(VAR_11->class_dev, "program: 0x%x (@t=%d)\n",
    VAR_20, VAR_15);
   break;
  } else if (VAR_19 != 0x00) {
   FUNC_3(VAR_11->class_dev,
    "unexpected status 0x%x (@t=%d)\n",
    VAR_19, VAR_15);
   if (VAR_19 & 0x60)
    FUNC_5(0x00, VAR_11->iobase + VAR_2);
  }
 }

 return 0;
}
