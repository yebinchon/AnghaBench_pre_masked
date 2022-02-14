
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct comedi_subdevice {unsigned int minor; struct device* class_dev; int index; struct comedi_device* device; } ;
struct comedi_device {int minor; int class_dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (int ,unsigned int) ;
 int VAR_4 ;
 struct comedi_subdevice** VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,char*) ;
 struct device* FUNC_3 (int ,int ,int ,int *,char*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct comedi_subdevice *VAR_7)
{
 struct comedi_device *VAR_8 = VAR_7->device;
 struct device *VAR_9;
 unsigned int VAR_10;

 FUNC_4(&VAR_6);
 for (VAR_10 = 0; VAR_10 < VAR_2; ++VAR_10) {
  if (!VAR_5[VAR_10]) {
   VAR_5[VAR_10] = VAR_7;
   break;
  }
 }
 FUNC_5(&VAR_6);
 if (VAR_10 == VAR_2) {
  FUNC_2(VAR_8->class_dev,
   "ran out of minor numbers for subdevice files\n");
  return -VAR_3;
 }
 VAR_10 += VAR_1;
 VAR_7->minor = VAR_10;
 VAR_9 = FUNC_3(VAR_4, VAR_8->class_dev,
         FUNC_1(VAR_0, VAR_10), ((void*)0), "comedi%i_subd%i",
         VAR_8->minor, VAR_7->index);
 if (!FUNC_0(VAR_9))
  VAR_7->class_dev = VAR_9;

 return 0;
}
