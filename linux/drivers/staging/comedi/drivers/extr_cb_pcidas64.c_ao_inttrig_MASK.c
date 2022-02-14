
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcidas64_private {scalar_t__ main_iobase; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {struct pcidas64_private* private; } ;
struct comedi_cmd {unsigned int start_arg; scalar_t__ start_src; } ;
struct TYPE_2__ {int * inttrig; struct comedi_cmd cmd; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct comedi_device*,struct comedi_cmd*) ;
 int FUNC_1 (struct comedi_device*,struct comedi_cmd*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_4, struct comedi_subdevice *VAR_5,
        unsigned int VAR_6)
{
 struct pcidas64_private *VAR_7 = VAR_4->private;
 struct comedi_cmd *VAR_8 = &VAR_5->async->cmd;
 int VAR_9;

 if (VAR_6 != VAR_8->start_arg)
  return -VAR_1;

 VAR_9 = FUNC_0(VAR_4, VAR_8);
 if (VAR_9 < 0)
  return -VAR_2;

 FUNC_1(VAR_4, VAR_8);

 if (VAR_8->start_src == VAR_3)
  FUNC_2(0, VAR_7->main_iobase + VAR_0);

 VAR_5->async->inttrig = ((void*)0);

 return 0;
}
