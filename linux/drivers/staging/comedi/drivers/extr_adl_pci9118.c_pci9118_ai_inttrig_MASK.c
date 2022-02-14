
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {unsigned int start_arg; } ;
struct TYPE_2__ {int * inttrig; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int FUNC_0 (struct comedi_device*) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_1,
         struct comedi_subdevice *VAR_2,
         unsigned int VAR_3)
{
 struct comedi_cmd *VAR_4 = &VAR_2->async->cmd;

 if (VAR_3 != VAR_4->start_arg)
  return -VAR_0;

 VAR_2->async->inttrig = ((void*)0);
 FUNC_0(VAR_1);

 return 1;
}
