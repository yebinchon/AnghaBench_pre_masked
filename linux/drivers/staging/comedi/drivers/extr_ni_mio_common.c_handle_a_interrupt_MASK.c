
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {int class_dev; } ;
struct comedi_cmd {scalar_t__ stop_src; } ;
struct TYPE_2__ {int events; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 int VAR_5 ;
 unsigned short VAR_6 ;
 unsigned short VAR_7 ;
 unsigned short VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (struct comedi_subdevice*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_3 (struct comedi_device*) ;
 unsigned short FUNC_4 (struct comedi_device*,int ) ;
 int FUNC_5 (struct comedi_device*) ;

__attribute__((used)) static void FUNC_6(struct comedi_device *VAR_10,
          struct comedi_subdevice *VAR_11,
          unsigned short VAR_12)
{
 struct comedi_cmd *VAR_13 = &VAR_11->async->cmd;


 if (VAR_12 & (VAR_2 |
        VAR_6 | VAR_7)) {
  if (VAR_12 == 0xffff) {
   FUNC_1(VAR_10->class_dev, "Card removed?\n");




   if (FUNC_0(VAR_11))
    VAR_11->async->events |= VAR_0;
   return;
  }
  if (VAR_12 & VAR_2) {
   FUNC_1(VAR_10->class_dev, "ai error a_status=%04x\n",
    VAR_12);

   FUNC_5(VAR_10);

   VAR_11->async->events |= VAR_0;
   if (VAR_12 & VAR_4)
    VAR_11->async->events |= VAR_1;
   return;
  }
  if (VAR_12 & VAR_6) {
   if (VAR_13->stop_src == VAR_9)
    FUNC_5(VAR_10);
  }
 }

 if (VAR_12 & VAR_3) {
  int VAR_14;
  static const int VAR_15 = 10;





  for (VAR_14 = 0; VAR_14 < VAR_15; ++VAR_14) {
   FUNC_3(VAR_10);
   if ((FUNC_4(VAR_10, VAR_5) &
        VAR_3) == 0)
    break;
  }
 }


 if (VAR_12 & VAR_8)
  FUNC_2(VAR_10, VAR_11);
}
