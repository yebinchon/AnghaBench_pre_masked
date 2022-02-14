
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct s626_private {scalar_t__ ai_convert_count; } ;
struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {struct comedi_subdevice* read_subdev; struct s626_private* private; } ;
struct comedi_cmd {scalar_t__ convert_src; scalar_t__ scan_begin_src; scalar_t__ chanlist_len; } ;
struct comedi_async {struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct comedi_device*,int ) ;
 int FUNC_1 (struct comedi_device*,int ,int ) ;
 int FUNC_2 (struct comedi_device*,int) ;
 int FUNC_3 (struct comedi_device*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_12)
{
 struct s626_private *VAR_13 = VAR_12->private;
 struct comedi_subdevice *VAR_14 = VAR_12->read_subdev;
 struct comedi_async *VAR_15 = VAR_14->async;
 struct comedi_cmd *VAR_16 = &VAR_15->cmd;
 u16 VAR_17;


 VAR_17 = FUNC_0(VAR_12, VAR_8);


 if (VAR_17 & VAR_2) {

  FUNC_2(VAR_12, 0);
 }
 if (VAR_17 & VAR_4) {

  FUNC_2(VAR_12, 1);
 }
 if (VAR_17 & VAR_6) {

  FUNC_2(VAR_12, 2);
 }
 if (VAR_17 & VAR_3) {

  FUNC_2(VAR_12, 3);
 }
 if (VAR_17 & VAR_5) {

  FUNC_2(VAR_12, 4);

  if (VAR_13->ai_convert_count > 0) {
   VAR_13->ai_convert_count--;
   if (VAR_13->ai_convert_count == 0)
    FUNC_3(VAR_12, 4, VAR_1);

   if (VAR_16->convert_src == VAR_11) {

    FUNC_1(VAR_12, VAR_9,
            VAR_10);
   }
  }
 }
 if (VAR_17 & VAR_7) {

  FUNC_2(VAR_12, 5);

  if (VAR_16->scan_begin_src == VAR_11) {

   FUNC_1(VAR_12, VAR_9, VAR_10);
  }

  if (VAR_16->convert_src == VAR_11) {
   VAR_13->ai_convert_count = VAR_16->chanlist_len;
   FUNC_3(VAR_12, 4, VAR_0);
  }
 }
}
