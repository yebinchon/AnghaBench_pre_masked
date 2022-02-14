
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subdev_8255_private {int (* io ) (struct comedi_device*,int,int,int,unsigned long) ;unsigned long regbase; } ;
struct comedi_subdevice {int subdev_flags; int n_chan; int maxdata; int insn_config; int insn_bits; int * range_table; int type; } ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct subdev_8255_private* FUNC_0 (struct comedi_subdevice*,int) ;
 int VAR_4 ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct comedi_device*,int,int,int,unsigned long) ;
 int FUNC_3 (struct comedi_device*,int,int,int,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_7,
         struct comedi_subdevice *VAR_8,
         int (*VAR_9)(struct comedi_device *VAR_10,
     int VAR_11, int VAR_12, int VAR_13,
     unsigned long VAR_14),
         unsigned long VAR_15,
         bool VAR_16)
{
 struct subdev_8255_private *VAR_17;

 VAR_17 = FUNC_0(VAR_8, sizeof(*VAR_17));
 if (!VAR_17)
  return -VAR_1;

 if (VAR_9)
  VAR_17->io = VAR_9;
 else if (VAR_16)
  VAR_17->io = FUNC_3;
 else
  VAR_17->io = FUNC_2;
 VAR_17->regbase = VAR_15;

 VAR_8->type = VAR_0;
 VAR_8->subdev_flags = VAR_2 | VAR_3;
 VAR_8->n_chan = 24;
 VAR_8->range_table = &VAR_4;
 VAR_8->maxdata = 1;
 VAR_8->insn_bits = VAR_5;
 VAR_8->insn_config = VAR_6;

 FUNC_1(VAR_7, VAR_8);

 return 0;
}
