
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {int class_dev; } ;
struct comedi_cmd {scalar_t__* chanlist; } ;
struct TYPE_2__ {unsigned int cur_chan; int events; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int FUNC_0 (struct comedi_subdevice*,unsigned short*,int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct comedi_device*,struct comedi_subdevice*,int *,int ) ;
 unsigned short FUNC_3 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_4 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_5 (struct comedi_device*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_6(struct comedi_device *VAR_1,
         struct comedi_subdevice *VAR_2)
{
 struct comedi_cmd *VAR_3 = &VAR_2->async->cmd;
 unsigned int VAR_4 = VAR_2->async->cur_chan;
 unsigned int VAR_5;
 unsigned short VAR_6;

 if (FUNC_2(VAR_1, VAR_2, ((void*)0), 0)) {
  FUNC_1(VAR_1->class_dev, "A/D cmd IRQ without DRDY!\n");
  VAR_2->async->events |= VAR_0;
  return;
 }

 VAR_6 = FUNC_3(VAR_1, VAR_2);
 FUNC_0(VAR_2, &VAR_6, 1);


 VAR_5 = VAR_2->async->cur_chan;
 if (VAR_3->chanlist[VAR_4] != VAR_3->chanlist[VAR_5])
  FUNC_5(VAR_1, VAR_3->chanlist[VAR_5], 0);

 FUNC_4(VAR_1, VAR_2);
}
