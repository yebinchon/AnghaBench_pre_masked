
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
struct TYPE_2__ {unsigned int max_bufsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct comedi_device* FUNC_1 (unsigned int) ;
 int FUNC_2 (struct comedi_device*) ;
 struct comedi_subdevice* FUNC_3 (struct comedi_device*,unsigned int) ;
 int FUNC_4 (char const*,int,unsigned int*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_4,
      struct device_attribute *VAR_5,
      const char *VAR_6, size_t VAR_7)
{
 unsigned int VAR_8 = FUNC_0(VAR_4->devt);
 struct comedi_device *VAR_9;
 struct comedi_subdevice *VAR_10;
 unsigned int VAR_11;
 int VAR_12;

 VAR_12 = FUNC_4(VAR_6, 10, &VAR_11);
 if (VAR_12)
  return VAR_12;
 if (VAR_11 > (VAR_3 / 1024))
  return -VAR_0;
 VAR_11 *= 1024;

 VAR_9 = FUNC_1(VAR_8);
 if (!VAR_9)
  return -VAR_1;

 FUNC_5(&VAR_9->mutex);
 VAR_10 = FUNC_3(VAR_9, VAR_8);
 if (VAR_10 && (VAR_10->subdev_flags & VAR_2) && VAR_10->async)
  VAR_10->async->max_bufsize = VAR_11;
 else
  VAR_12 = -VAR_0;
 FUNC_6(&VAR_9->mutex);

 FUNC_2(VAR_9);
 return VAR_12 ? VAR_12 : VAR_7;
}
