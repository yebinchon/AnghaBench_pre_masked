
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {TYPE_1__* read_subdev; } ;
struct TYPE_2__ {int maxdata; } ;



__attribute__((used)) static unsigned short FUNC_0(struct comedi_device *VAR_0,
        unsigned int VAR_1,
        unsigned int VAR_2)
{
 return VAR_0->read_subdev->maxdata / 2;
}
