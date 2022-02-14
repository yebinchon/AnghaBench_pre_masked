
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ni_private {int ai_cmd2; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {struct ni_private* private; } ;
struct comedi_cmd {unsigned int start_arg; } ;
struct TYPE_2__ {int * inttrig; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct comedi_device*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_3,
    struct comedi_subdevice *VAR_4,
    unsigned int VAR_5)
{
 struct ni_private *VAR_6 = VAR_3->private;
 struct comedi_cmd *VAR_7 = &VAR_4->async->cmd;

 if (VAR_5 != VAR_7->start_arg)
  return -VAR_0;

 FUNC_0(VAR_3, VAR_2 | VAR_6->ai_cmd2,
        VAR_1);
 VAR_4->async->inttrig = ((void*)0);

 return 1;
}
