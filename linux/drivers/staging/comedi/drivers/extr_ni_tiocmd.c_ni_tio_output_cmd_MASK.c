
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ni_gpct {TYPE_2__* counter_dev; } ;
struct comedi_subdevice {struct ni_gpct* private; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {int class_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct comedi_subdevice *VAR_1)
{
 struct ni_gpct *VAR_2 = VAR_1->private;

 FUNC_0(VAR_2->counter_dev->dev->class_dev,
  "output commands not yet implemented.\n");
 return -VAR_0;
}
