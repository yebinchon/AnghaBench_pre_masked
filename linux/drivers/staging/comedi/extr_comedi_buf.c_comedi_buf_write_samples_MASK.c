
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {TYPE_2__* async; TYPE_1__* device; } ;
struct TYPE_4__ {int events; } ;
struct TYPE_3__ {int class_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct comedi_subdevice*,void const*,unsigned int) ;
 unsigned int FUNC_1 (struct comedi_subdevice*,int ) ;
 int FUNC_2 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_3 (struct comedi_subdevice*) ;
 unsigned int FUNC_4 (struct comedi_subdevice*,int ) ;
 int FUNC_5 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_6 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_7 (int ,char*) ;

unsigned int FUNC_8(struct comedi_subdevice *VAR_2,
          const void *VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5;
 unsigned int VAR_6;






 VAR_5 = FUNC_4(VAR_2, FUNC_3(VAR_2));
 if (VAR_4 > VAR_5) {
  FUNC_7(VAR_2->device->class_dev, "buffer overrun\n");
  VAR_2->async->events |= VAR_1;
  VAR_4 = VAR_5;
 }

 if (VAR_4 == 0)
  return 0;

 VAR_6 = FUNC_1(VAR_2,
     FUNC_6(VAR_2, VAR_4));
 FUNC_0(VAR_2, VAR_3, VAR_6);
 FUNC_2(VAR_2, VAR_6);
 FUNC_5(VAR_2, VAR_6);
 VAR_2->async->events |= VAR_0;

 return VAR_6;
}
