
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbdux_private {int ai_cmd_running; int* dux_commands; int ai_interval; int ai_timer; int ai_counter; int mut; int n_ai_urbs; int ai_urbs; scalar_t__ high_speed; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {struct usbdux_private* private; } ;
struct comedi_cmd {int chanlist_len; int scan_begin_arg; scalar_t__ start_src; int * chanlist; } ;
struct TYPE_2__ {int * inttrig; struct comedi_cmd cmd; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct comedi_device*,int ) ;
 int * VAR_4 ;
 int FUNC_6 (struct comedi_device*,int ,int ,int) ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_5, struct comedi_subdevice *VAR_6)
{
 struct usbdux_private *VAR_7 = VAR_5->private;
 struct comedi_cmd *VAR_8 = &VAR_6->async->cmd;
 int VAR_9 = VAR_8->chanlist_len;
 int VAR_10 = -VAR_0;
 int VAR_11;


 FUNC_3(&VAR_7->mut);

 if (VAR_7->ai_cmd_running)
  goto ai_cmd_exit;

 VAR_7->dux_commands[1] = VAR_9;
 for (VAR_11 = 0; VAR_11 < VAR_9; ++VAR_11) {
  unsigned int VAR_12 = FUNC_0(VAR_8->chanlist[VAR_11]);
  unsigned int VAR_13 = FUNC_1(VAR_8->chanlist[VAR_11]);

  VAR_7->dux_commands[VAR_11 + 2] = FUNC_2(VAR_12, VAR_13);
 }

 VAR_10 = FUNC_5(VAR_5, VAR_3);
 if (VAR_10 < 0)
  goto ai_cmd_exit;

 if (VAR_7->high_speed) {





  VAR_7->ai_interval = 1;

  while (VAR_7->ai_interval < VAR_9)
   VAR_7->ai_interval *= 2;

  VAR_7->ai_timer = VAR_8->scan_begin_arg /
        (125000 * VAR_7->ai_interval);
 } else {

  VAR_7->ai_interval = 1;
  VAR_7->ai_timer = VAR_8->scan_begin_arg / 1000000;
 }
 if (VAR_7->ai_timer < 1) {
  VAR_10 = -VAR_1;
  goto ai_cmd_exit;
 }

 VAR_7->ai_counter = VAR_7->ai_timer;

 if (VAR_8->start_src == VAR_2) {

  VAR_7->ai_cmd_running = 1;
  VAR_10 = FUNC_6(VAR_5, VAR_7->ai_urbs,
      VAR_7->n_ai_urbs, 1);
  if (VAR_10 < 0) {
   VAR_7->ai_cmd_running = 0;

   goto ai_cmd_exit;
  }
  VAR_6->async->inttrig = ((void*)0);
 } else {



  VAR_6->async->inttrig = VAR_4;
 }

ai_cmd_exit:
 FUNC_4(&VAR_7->mut);

 return VAR_10;
}
