
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtd_private {int fifosz; int xfer_count; int ai_count; int flags; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ mmio; struct rtd_private* private; } ;
struct comedi_cmd {int chanlist_len; int scan_begin_src; int flags; int scan_begin_arg; int stop_src; int stop_arg; int convert_src; int convert_arg; int chanlist; } ;
struct TYPE_2__ {struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;




 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct comedi_device*,int,int ) ;
 int FUNC_4 (int*,int ) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_19, struct comedi_subdevice *VAR_20)
{
 struct rtd_private *VAR_21 = VAR_19->private;
 struct comedi_cmd *VAR_22 = &VAR_20->async->cmd;
 int VAR_23;



 FUNC_5(0, VAR_19->mmio + VAR_15);
 FUNC_5(0, VAR_19->mmio + VAR_12);
 FUNC_5(0, VAR_19->mmio + VAR_5);
 FUNC_6(0, VAR_19->mmio + VAR_10);
 FUNC_5(0, VAR_19->mmio + VAR_6);
 FUNC_5(0, VAR_19->mmio + VAR_11);



 FUNC_3(VAR_19, VAR_22->chanlist_len, VAR_22->chanlist);


 if (VAR_22->chanlist_len > 1) {

  FUNC_5(0, VAR_19->mmio + VAR_14);

  FUNC_5(1, VAR_19->mmio + VAR_8);

  FUNC_5(2, VAR_19->mmio + VAR_5);
 } else {

  FUNC_5(0, VAR_19->mmio + VAR_14);

  FUNC_5(1, VAR_19->mmio + VAR_5);
 }
 FUNC_5((VAR_21->fifosz / 2 - 1) & 0xffff, VAR_19->mmio + VAR_3);

 if (VAR_22->scan_begin_src == 128) {


  if (VAR_22->flags & VAR_1) {





   VAR_21->xfer_count = VAR_22->chanlist_len;
   VAR_21->flags |= VAR_17;
  } else {

   VAR_21->xfer_count =
       (VAR_18 * VAR_22->chanlist_len) /
       VAR_22->scan_begin_arg;
   if (VAR_21->xfer_count < VAR_22->chanlist_len) {

    VAR_21->xfer_count = VAR_22->chanlist_len;
   } else {
    VAR_21->xfer_count =
        FUNC_0(VAR_21->xfer_count,
       VAR_22->chanlist_len);
    VAR_21->xfer_count *= VAR_22->chanlist_len;
   }
   VAR_21->flags |= VAR_17;
  }
  if (VAR_21->xfer_count >= (VAR_21->fifosz / 2)) {

   VAR_21->xfer_count = 0;
   VAR_21->flags &= ~VAR_17;
  } else {

   FUNC_5((VAR_21->xfer_count - 1) & 0xffff,
          VAR_19->mmio + VAR_3);
  }
 } else {
  VAR_21->xfer_count = 0;
  VAR_21->flags &= ~VAR_17;
 }

 FUNC_5(1, VAR_19->mmio + VAR_13);

 FUNC_5(1, VAR_19->mmio + VAR_4);




 switch (VAR_22->stop_src) {
 case 131:
  VAR_21->ai_count = VAR_22->stop_arg * VAR_22->chanlist_len;
  if ((VAR_21->xfer_count > 0) &&
      (VAR_21->xfer_count > VAR_21->ai_count)) {
   VAR_21->xfer_count = VAR_21->ai_count;
  }
  break;

 case 129:
  VAR_21->ai_count = -1;
  break;
 }


 switch (VAR_22->scan_begin_src) {
 case 128:
  VAR_23 = FUNC_4(&VAR_22->scan_begin_arg,
     VAR_0);

  FUNC_5(VAR_23 & 0xffffff, VAR_19->mmio + VAR_16);

  break;

 case 130:

  FUNC_5(1, VAR_19->mmio + VAR_14);
  break;
 }


 switch (VAR_22->convert_src) {
 case 128:
  if (VAR_22->chanlist_len > 1) {

   VAR_23 = FUNC_4(&VAR_22->convert_arg,
      VAR_0);

   FUNC_5(VAR_23 & 0x3ff, VAR_19->mmio + VAR_7);
  }

  break;

 case 130:

  FUNC_5(2, VAR_19->mmio + VAR_8);
  break;
 }






 FUNC_6(~0, VAR_19->mmio + VAR_9);
 FUNC_2(VAR_19->mmio + VAR_9);



 FUNC_6(VAR_2, VAR_19->mmio + VAR_10);



 FUNC_1(VAR_19->mmio + VAR_12);
 return 0;
}
