
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmuio_private {struct pcmuio_asic* asics; } ;
struct pcmuio_asic {scalar_t__ active; scalar_t__ enabled_mask; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {struct pcmuio_private* private; } ;
struct TYPE_2__ {int * inttrig; } ;


 int VAR_0 ;
 int FUNC_0 (struct comedi_subdevice*) ;
 int FUNC_1 (struct comedi_device*,int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_1,
        struct comedi_subdevice *VAR_2)
{
 struct pcmuio_private *VAR_3 = VAR_1->private;
 int VAR_4 = FUNC_0(VAR_2);
 struct pcmuio_asic *VAR_5 = &VAR_3->asics[VAR_4];

 VAR_5->enabled_mask = 0;
 VAR_5->active = 0;
 VAR_2->async->inttrig = ((void*)0);


 FUNC_1(VAR_1, 0, VAR_4, VAR_0, 0);
}
