
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct {int counter_index; } ;
struct comedi_subdevice {struct ni_gpct* private; } ;
struct comedi_device {int dummy; } ;


 int FUNC_0 (struct comedi_device*,int ,int ) ;
 int FUNC_1 (struct comedi_device*,int ) ;
 int FUNC_2 (struct ni_gpct*) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_0, struct comedi_subdevice *VAR_1)
{
 struct ni_gpct *VAR_2 = VAR_1->private;
 int VAR_3;

 VAR_3 = FUNC_2(VAR_2);
 FUNC_0(VAR_0, VAR_2->counter_index, 0);
 FUNC_1(VAR_0, VAR_2->counter_index);
 return VAR_3;
}
