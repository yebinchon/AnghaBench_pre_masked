
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct usbduxsigma_private {unsigned int ai_interval; int ai_timer; int* dux_commands; int ai_counter; int ai_cmd_running; int mut; int n_ai_urbs; int ai_urbs; scalar_t__ high_speed; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {struct usbduxsigma_private* private; } ;
struct comedi_cmd {unsigned int chanlist_len; int scan_begin_arg; scalar_t__ start_src; int * chanlist; } ;
struct TYPE_2__ {int * inttrig; struct comedi_cmd cmd; } ;


 unsigned int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned int,void**,void**) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct comedi_device*,int ) ;
 int * VAR_2 ;
 unsigned int FUNC_5 (unsigned int) ;
 int FUNC_6 (struct comedi_device*,int ,int ,int) ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_3,
         struct comedi_subdevice *VAR_4)
{
 struct usbduxsigma_private *VAR_5 = VAR_3->private;
 struct comedi_cmd *VAR_6 = &VAR_4->async->cmd;
 unsigned int VAR_7 = VAR_6->chanlist_len;
 u8 VAR_8 = 0;
 u8 VAR_9 = 0;
 u8 VAR_10 = 0;
 int VAR_11;
 int VAR_12;

 FUNC_2(&VAR_5->mut);

 if (VAR_5->high_speed) {





  unsigned int VAR_13 = FUNC_5(VAR_7);

  VAR_5->ai_interval = VAR_13;
  VAR_5->ai_timer = VAR_6->scan_begin_arg / (125000 * VAR_13);
 } else {

  VAR_5->ai_interval = 1;
  VAR_5->ai_timer = VAR_6->scan_begin_arg / 1000000;
 }

 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
  unsigned int VAR_14 = FUNC_0(VAR_6->chanlist[VAR_12]);

  FUNC_1(VAR_14, &VAR_8, &VAR_9);
 }

 VAR_5->dux_commands[1] = VAR_5->ai_interval;
 VAR_5->dux_commands[2] = VAR_7;
 VAR_5->dux_commands[3] = 0x12;
 VAR_5->dux_commands[4] = 0x03;
 VAR_5->dux_commands[5] = 0x00;
 VAR_5->dux_commands[6] = VAR_8;
 VAR_5->dux_commands[7] = VAR_9;
 VAR_5->dux_commands[8] = VAR_10;

 VAR_11 = FUNC_4(VAR_3, VAR_1);
 if (VAR_11 < 0) {
  FUNC_3(&VAR_5->mut);
  return VAR_11;
 }

 VAR_5->ai_counter = VAR_5->ai_timer;

 if (VAR_6->start_src == VAR_0) {

  VAR_5->ai_cmd_running = 1;
  VAR_11 = FUNC_6(VAR_3, VAR_5->ai_urbs,
           VAR_5->n_ai_urbs, 1);
  if (VAR_11 < 0) {
   VAR_5->ai_cmd_running = 0;
   FUNC_3(&VAR_5->mut);
   return VAR_11;
  }
  VAR_4->async->inttrig = ((void*)0);
 } else {
  VAR_4->async->inttrig = VAR_2;
 }

 FUNC_3(&VAR_5->mut);

 return 0;
}
