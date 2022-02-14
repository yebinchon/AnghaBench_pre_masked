
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbdux_private {int ai_cmd_running; int mut; int n_ai_urbs; int ai_urbs; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {struct usbdux_private* private; } ;
struct comedi_cmd {unsigned int start_arg; } ;
struct TYPE_2__ {int * inttrig; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct comedi_device*,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_2,
        struct comedi_subdevice *VAR_3,
        unsigned int VAR_4)
{
 struct usbdux_private *VAR_5 = VAR_2->private;
 struct comedi_cmd *VAR_6 = &VAR_3->async->cmd;
 int VAR_7;

 if (VAR_4 != VAR_6->start_arg)
  return -VAR_1;

 FUNC_0(&VAR_5->mut);

 if (!VAR_5->ai_cmd_running) {
  VAR_5->ai_cmd_running = 1;
  VAR_7 = FUNC_2(VAR_2, VAR_5->ai_urbs,
      VAR_5->n_ai_urbs, 1);
  if (VAR_7 < 0) {
   VAR_5->ai_cmd_running = 0;
   goto ai_trig_exit;
  }
  VAR_3->async->inttrig = ((void*)0);
 } else {
  VAR_7 = -VAR_0;
 }

ai_trig_exit:
 FUNC_1(&VAR_5->mut);
 return VAR_7;
}
