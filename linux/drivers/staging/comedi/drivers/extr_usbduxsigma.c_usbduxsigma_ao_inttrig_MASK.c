
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbduxsigma_private {int ao_cmd_running; int mut; int n_ao_urbs; int ao_urbs; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {struct usbduxsigma_private* private; } ;
struct comedi_cmd {unsigned int start_arg; } ;
struct TYPE_2__ {int * inttrig; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct comedi_device*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_1,
      struct comedi_subdevice *VAR_2,
      unsigned int VAR_3)
{
 struct usbduxsigma_private *VAR_4 = VAR_1->private;
 struct comedi_cmd *VAR_5 = &VAR_2->async->cmd;
 int VAR_6;

 if (VAR_3 != VAR_5->start_arg)
  return -VAR_0;

 FUNC_0(&VAR_4->mut);
 if (!VAR_4->ao_cmd_running) {
  VAR_4->ao_cmd_running = 1;
  VAR_6 = FUNC_2(VAR_1, VAR_4->ao_urbs,
           VAR_4->n_ao_urbs, 0);
  if (VAR_6 < 0) {
   VAR_4->ao_cmd_running = 0;
   FUNC_1(&VAR_4->mut);
   return VAR_6;
  }
  VAR_2->async->inttrig = ((void*)0);
 }
 FUNC_1(&VAR_4->mut);

 return 1;
}
