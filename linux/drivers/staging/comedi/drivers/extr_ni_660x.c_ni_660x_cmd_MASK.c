
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct {int dummy; } ;
struct comedi_subdevice {struct ni_gpct* private; } ;
struct comedi_device {int class_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct comedi_device*,struct ni_gpct*,int ) ;
 int FUNC_2 (struct ni_gpct*) ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_1, struct comedi_subdevice *VAR_2)
{
 struct ni_gpct *VAR_3 = VAR_2->private;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_3, VAR_0);
 if (VAR_4) {
  FUNC_0(VAR_1->class_dev,
   "no dma channel available for use by counter\n");
  return VAR_4;
 }
 FUNC_2(VAR_3);

 return FUNC_3(VAR_1, VAR_2);
}
