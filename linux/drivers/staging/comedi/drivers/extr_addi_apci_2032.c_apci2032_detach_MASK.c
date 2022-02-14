
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {TYPE_1__* read_subdev; scalar_t__ iobase; } ;
struct TYPE_2__ {int private; } ;


 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_0)
{
 if (VAR_0->iobase)
  FUNC_0(VAR_0);
 FUNC_1(VAR_0);
 if (VAR_0->read_subdev)
  FUNC_2(VAR_0->read_subdev->private);
}
