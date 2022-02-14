
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_cmd {int dummy; } ;
struct TYPE_2__ {struct comedi_cmd cmd; } ;


 unsigned int FUNC_0 (struct comedi_subdevice*,struct comedi_cmd*) ;

unsigned int FUNC_1(struct comedi_subdevice *VAR_0)
{
 struct comedi_cmd *VAR_1 = &VAR_0->async->cmd;

 return FUNC_0(VAR_0, VAR_1);
}
