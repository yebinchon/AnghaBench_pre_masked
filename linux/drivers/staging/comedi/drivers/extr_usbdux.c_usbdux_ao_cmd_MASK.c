
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbdux_private {int ao_cmd_running; int ao_timer; int ao_counter; int mut; int n_ao_urbs; int ao_urbs; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {struct usbdux_private* private; } ;
struct comedi_cmd {int convert_arg; int scan_begin_arg; scalar_t__ start_src; } ;
struct TYPE_2__ {int * inttrig; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * VAR_3 ;
 int FUNC_2 (struct comedi_device*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_4, struct comedi_subdevice *VAR_5)
{
 struct usbdux_private *VAR_6 = VAR_4->private;
 struct comedi_cmd *VAR_7 = &VAR_5->async->cmd;
 int VAR_8 = -VAR_0;

 FUNC_0(&VAR_6->mut);

 if (VAR_6->ao_cmd_running)
  goto ao_cmd_exit;



 if (0) {


  VAR_6->ao_timer = VAR_7->convert_arg / 125000;
 } else {


  VAR_6->ao_timer = VAR_7->scan_begin_arg / 1000000;
  if (VAR_6->ao_timer < 1) {
   VAR_8 = -VAR_1;
   goto ao_cmd_exit;
  }
 }

 VAR_6->ao_counter = VAR_6->ao_timer;

 if (VAR_7->start_src == VAR_2) {

  VAR_6->ao_cmd_running = 1;
  VAR_8 = FUNC_2(VAR_4, VAR_6->ao_urbs,
      VAR_6->n_ao_urbs, 0);
  if (VAR_8 < 0) {
   VAR_6->ao_cmd_running = 0;

   goto ao_cmd_exit;
  }
  VAR_5->async->inttrig = ((void*)0);
 } else {



  VAR_5->async->inttrig = VAR_3;
 }

ao_cmd_exit:
 FUNC_1(&VAR_6->mut);

 return VAR_8;
}
