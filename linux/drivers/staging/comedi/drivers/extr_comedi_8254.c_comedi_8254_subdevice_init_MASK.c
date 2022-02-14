
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int subdev_flags; int n_chan; int maxdata; struct comedi_8254* private; int insn_config; int insn_write; int insn_read; int * range_table; int type; } ;
struct comedi_8254 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_0(struct comedi_subdevice *VAR_7,
    struct comedi_8254 *VAR_8)
{
 VAR_7->type = VAR_0;
 VAR_7->subdev_flags = VAR_1 | VAR_2;
 VAR_7->n_chan = 3;
 VAR_7->maxdata = 0xffff;
 VAR_7->range_table = &VAR_6;
 VAR_7->insn_read = VAR_4;
 VAR_7->insn_write = VAR_5;
 VAR_7->insn_config = VAR_3;

 VAR_7->private = VAR_8;
}
