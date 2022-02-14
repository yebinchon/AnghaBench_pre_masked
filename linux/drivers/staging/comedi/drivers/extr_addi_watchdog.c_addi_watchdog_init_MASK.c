
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int n_chan; int maxdata; int insn_write; int insn_read; int insn_config; int subdev_flags; int type; } ;
struct addi_watchdog_private {unsigned long iobase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct addi_watchdog_private* FUNC_0 (struct comedi_subdevice*,int) ;

int FUNC_1(struct comedi_subdevice *VAR_6, unsigned long VAR_7)
{
 struct addi_watchdog_private *VAR_8;

 VAR_8 = FUNC_0(VAR_6, sizeof(*VAR_8));
 if (!VAR_8)
  return -VAR_1;

 VAR_8->iobase = VAR_7;

 VAR_6->type = VAR_0;
 VAR_6->subdev_flags = VAR_2;
 VAR_6->n_chan = 1;
 VAR_6->maxdata = 0xff;
 VAR_6->insn_config = VAR_3;
 VAR_6->insn_read = VAR_4;
 VAR_6->insn_write = VAR_5;

 return 0;
}
