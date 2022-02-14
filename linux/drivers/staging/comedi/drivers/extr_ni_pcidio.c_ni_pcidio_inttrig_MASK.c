
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nidio96_private {int OP_MODEBits; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ mmio; struct nidio96_private* private; } ;
struct comedi_cmd {unsigned int start_arg; } ;
struct TYPE_2__ {int * inttrig; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_2,
        struct comedi_subdevice *VAR_3,
        unsigned int VAR_4)
{
 struct nidio96_private *VAR_5 = VAR_2->private;
 struct comedi_cmd *VAR_6 = &VAR_3->async->cmd;

 if (VAR_4 != VAR_6->start_arg)
  return -VAR_0;

 FUNC_0(VAR_5->OP_MODEBits, VAR_2->mmio + VAR_1);
 VAR_3->async->inttrig = ((void*)0);

 return 1;
}
