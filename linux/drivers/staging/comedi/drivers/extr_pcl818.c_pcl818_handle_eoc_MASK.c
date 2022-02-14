
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {int class_dev; } ;
struct TYPE_2__ {int events; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct comedi_device*,struct comedi_subdevice*,int *,int ) ;
 unsigned int FUNC_2 (struct comedi_device*,struct comedi_subdevice*,unsigned int*) ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_1,
         struct comedi_subdevice *VAR_2)
{
 unsigned int VAR_3;
 unsigned int VAR_4;

 if (FUNC_1(VAR_1, VAR_2, ((void*)0), 0)) {
  FUNC_0(VAR_1->class_dev, "A/D mode1/3 IRQ without DRDY!\n");
  VAR_2->async->events |= VAR_0;
  return;
 }

 VAR_4 = FUNC_2(VAR_1, VAR_2, &VAR_3);
 FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);
}
