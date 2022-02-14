
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ logical_base; } ;
struct s626_private {scalar_t__ ai_cmd_running; TYPE_1__ ana_buf; } ;
struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {struct comedi_subdevice* read_subdev; struct s626_private* private; } ;
struct comedi_cmd {int chanlist_len; scalar_t__ stop_src; scalar_t__ stop_arg; scalar_t__ scan_begin_src; int scan_begin_arg; } ;
struct comedi_async {scalar_t__ scans_done; int events; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct comedi_subdevice*,unsigned short*,int) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 unsigned short FUNC_2 (int ) ;
 int FUNC_3 (struct comedi_device*,int ) ;

__attribute__((used)) static bool FUNC_4(struct comedi_device *VAR_4)
{
 struct s626_private *VAR_5 = VAR_4->private;
 struct comedi_subdevice *VAR_6 = VAR_4->read_subdev;
 struct comedi_async *VAR_7 = VAR_6->async;
 struct comedi_cmd *VAR_8 = &VAR_7->cmd;





 u32 *VAR_9 = (u32 *)VAR_5->ana_buf.logical_base + 1;
 int VAR_10;


 for (VAR_10 = 0; VAR_10 < VAR_8->chanlist_len; VAR_10++) {
  unsigned short VAR_11;





  VAR_11 = FUNC_2(*VAR_9);
  VAR_9++;

  FUNC_0(VAR_6, &VAR_11, 1);
 }

 if (VAR_8->stop_src == VAR_2 && VAR_7->scans_done >= VAR_8->stop_arg)
  VAR_7->events |= VAR_1;

 if (VAR_7->events & VAR_0)
  VAR_5->ai_cmd_running = 0;

 if (VAR_5->ai_cmd_running && VAR_8->scan_begin_src == VAR_3)
  FUNC_3(VAR_4, VAR_8->scan_begin_arg);

 FUNC_1(VAR_4, VAR_6);

 return !VAR_5->ai_cmd_running;
}
