
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dio200_subdev_8255 {unsigned int ofs; } ;
struct comedi_subdevice {int subdev_flags; int n_chan; int maxdata; int insn_config; int insn_bits; int * range_table; int type; } ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dio200_subdev_8255* FUNC_0 (struct comedi_subdevice*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_7,
       struct comedi_subdevice *VAR_8,
       unsigned int VAR_9)
{
 struct dio200_subdev_8255 *VAR_10;

 VAR_10 = FUNC_0(VAR_8, sizeof(*VAR_10));
 if (!VAR_10)
  return -VAR_1;

 VAR_10->ofs = VAR_9;

 VAR_8->type = VAR_0;
 VAR_8->subdev_flags = VAR_2 | VAR_3;
 VAR_8->n_chan = 24;
 VAR_8->range_table = &VAR_6;
 VAR_8->maxdata = 1;
 VAR_8->insn_bits = VAR_4;
 VAR_8->insn_config = VAR_5;
 FUNC_1(VAR_7, VAR_8);
 return 0;
}
