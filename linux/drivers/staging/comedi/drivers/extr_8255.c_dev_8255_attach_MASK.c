
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {void* type; } ;
struct comedi_device {int n_subdevices; struct comedi_subdevice* subdevices; int class_dev; } ;
struct comedi_devconfig {unsigned long* options; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct comedi_device*,unsigned long,int ) ;
 int FUNC_1 (struct comedi_device*,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (unsigned long,int ) ;
 int FUNC_4 (struct comedi_device*,struct comedi_subdevice*,int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_4,
      struct comedi_devconfig *VAR_5)
{
 struct comedi_subdevice *VAR_6;
 unsigned long VAR_7;
 int VAR_8;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  VAR_7 = VAR_5->options[VAR_9];
  if (!VAR_7)
   break;
 }
 if (VAR_9 == 0) {
  FUNC_2(VAR_4->class_dev, "no devices specified\n");
  return -VAR_2;
 }

 VAR_8 = FUNC_1(VAR_4, VAR_9);
 if (VAR_8)
  return VAR_8;

 for (VAR_9 = 0; VAR_9 < VAR_4->n_subdevices; VAR_9++) {
  VAR_6 = &VAR_4->subdevices[VAR_9];
  VAR_7 = VAR_5->options[VAR_9];
  VAR_8 = FUNC_0(VAR_4, VAR_7, VAR_3);
  if (VAR_8) {
   VAR_6->type = VAR_1;
  } else {
   VAR_8 = FUNC_4(VAR_4, VAR_6, ((void*)0), VAR_7);
   if (VAR_8) {




    FUNC_3(VAR_7, VAR_3);
    VAR_6->type = VAR_1;
    return VAR_8;
   }
  }
 }

 return 0;
}
