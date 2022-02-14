
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {TYPE_2__* async; } ;
struct comedi_device {int class_dev; } ;
struct TYPE_3__ {scalar_t__ stop_src; } ;
struct TYPE_4__ {int events; TYPE_1__ cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_2 (struct comedi_device*,int ,int,int ) ;
 int FUNC_3 (struct comedi_device*,int ) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_10,
          struct comedi_subdevice *VAR_11,
          unsigned short VAR_12)
{
 if (VAR_12 == 0xffff)
  return;
 if (VAR_12 & VAR_4) {
  FUNC_0(VAR_10->class_dev,
   "AO FIFO underrun status=0x%04x status2=0x%04x\n",
   VAR_12, FUNC_3(VAR_10, VAR_5));
  VAR_11->async->events |= VAR_1;
 }

 if (VAR_11->async->cmd.stop_src != VAR_9 &&
     VAR_12 & VAR_2)
  VAR_11->async->events |= VAR_0;


 if (VAR_12 & VAR_3) {
  int VAR_13;

  VAR_13 = FUNC_1(VAR_10, VAR_11);
  if (!VAR_13) {
   FUNC_0(VAR_10->class_dev, "AO buffer underrun\n");
   FUNC_2(VAR_10, VAR_8,
        VAR_7 |
        VAR_6, 0);
   VAR_11->async->events |= VAR_1;
  }
 }

}
