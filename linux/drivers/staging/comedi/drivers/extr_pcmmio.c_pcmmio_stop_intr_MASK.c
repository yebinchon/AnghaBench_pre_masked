
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmmio_private {scalar_t__ active; scalar_t__ enabled_mask; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {struct pcmmio_private* private; } ;
struct TYPE_2__ {int * inttrig; } ;


 int VAR_0 ;
 int FUNC_0 (struct comedi_device*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_1,
        struct comedi_subdevice *VAR_2)
{
 struct pcmmio_private *VAR_3 = VAR_1->private;

 VAR_3->enabled_mask = 0;
 VAR_3->active = 0;
 VAR_2->async->inttrig = ((void*)0);


 FUNC_0(VAR_1, 0, VAR_0, 0);
}
