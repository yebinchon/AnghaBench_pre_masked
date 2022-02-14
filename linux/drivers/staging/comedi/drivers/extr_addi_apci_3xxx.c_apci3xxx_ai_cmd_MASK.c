
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ mmio; struct apci3xxx_private* private; } ;
struct comedi_cmd {int * chanlist; } ;
struct apci3xxx_private {int ai_time_base; int ai_timer; } ;
struct TYPE_2__ {struct comedi_cmd cmd; } ;


 int FUNC_0 (struct comedi_device*,int ) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_0,
      struct comedi_subdevice *VAR_1)
{
 struct apci3xxx_private *VAR_2 = VAR_0->private;
 struct comedi_cmd *VAR_3 = &VAR_1->async->cmd;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_3->chanlist[0]);
 if (VAR_4)
  return VAR_4;


 FUNC_1(VAR_2->ai_time_base, VAR_0->mmio + 36);


 FUNC_1(VAR_2->ai_timer, VAR_0->mmio + 32);


 FUNC_1(0x180000, VAR_0->mmio + 8);

 return 0;
}
