
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int devt; } ;
struct comedi_subdevice {int subdev_flags; TYPE_1__* async; } ;
struct comedi_device {int mutex; } ;
typedef int ssize_t ;
struct TYPE_2__ {int prealloc_bufsz; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct comedi_device* FUNC_1 (unsigned int) ;
 int FUNC_2 (struct comedi_device*) ;
 struct comedi_subdevice* FUNC_3 (struct comedi_device*,unsigned int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int ,char*,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_3,
       struct device_attribute *VAR_4, char *VAR_5)
{
 unsigned int VAR_6 = FUNC_0(VAR_3->devt);
 struct comedi_device *VAR_7;
 struct comedi_subdevice *VAR_8;
 unsigned int VAR_9 = 0;

 VAR_7 = FUNC_1(VAR_6);
 if (!VAR_7)
  return -VAR_0;

 FUNC_4(&VAR_7->mutex);
 VAR_8 = FUNC_3(VAR_7, VAR_6);
 if (VAR_8 && (VAR_8->subdev_flags & VAR_2) && VAR_8->async)
  VAR_9 = VAR_8->async->prealloc_bufsz / 1024;
 FUNC_5(&VAR_7->mutex);

 FUNC_2(VAR_7);
 return FUNC_6(VAR_5, VAR_1, "%u\n", VAR_9);
}
