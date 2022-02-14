
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct s626_private {scalar_t__ ai_convert_count; scalar_t__ ai_cmd_running; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {struct comedi_subdevice* read_subdev; struct s626_private* private; } ;
struct comedi_cmd {int start_arg; scalar_t__ start_src; scalar_t__ scan_begin_src; int scan_begin_arg; scalar_t__ convert_src; scalar_t__ chanlist_len; int convert_arg; } ;
struct TYPE_2__ {struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct comedi_device*,int,int) ;
 int FUNC_1 (struct comedi_device*,int) ;
 int FUNC_2 (struct comedi_device*,int ,int ) ;
 int FUNC_3 (struct comedi_device*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_7,
          u16 VAR_8, u8 VAR_9)
{
 struct s626_private *VAR_10 = VAR_7->private;
 struct comedi_subdevice *VAR_11 = VAR_7->read_subdev;
 struct comedi_cmd *VAR_12 = &VAR_11->async->cmd;

 FUNC_0(VAR_7, VAR_9, VAR_8);

 if (VAR_10->ai_cmd_running) {

  if ((VAR_8 >> (VAR_12->start_arg - (16 * VAR_9))) == 1 &&
      VAR_12->start_src == VAR_5) {

   FUNC_2(VAR_7, VAR_1, VAR_3);

   if (VAR_12->scan_begin_src == VAR_5)
    FUNC_1(VAR_7, VAR_12->scan_begin_arg);
  }
  if ((VAR_8 >> (VAR_12->scan_begin_arg - (16 * VAR_9))) == 1 &&
      VAR_12->scan_begin_src == VAR_5) {

   FUNC_2(VAR_7, VAR_2, VAR_4);

   if (VAR_12->convert_src == VAR_5) {
    VAR_10->ai_convert_count = VAR_12->chanlist_len;

    FUNC_1(VAR_7, VAR_12->convert_arg);
   }

   if (VAR_12->convert_src == VAR_6) {
    VAR_10->ai_convert_count = VAR_12->chanlist_len;
    FUNC_3(VAR_7, 5, VAR_0);
   }
  }
  if ((VAR_8 >> (VAR_12->convert_arg - (16 * VAR_9))) == 1 &&
      VAR_12->convert_src == VAR_5) {

   FUNC_2(VAR_7, VAR_2, VAR_4);

   VAR_10->ai_convert_count--;
   if (VAR_10->ai_convert_count > 0)
    FUNC_1(VAR_7, VAR_12->convert_arg);
  }
 }
}
