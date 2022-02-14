
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ni_private {int ao_needs_arming; int ao_mite_ring; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ irq; int class_dev; struct ni_private* private; } ;
struct comedi_cmd {int dummy; } ;
struct TYPE_2__ {struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct comedi_device*,struct comedi_cmd const*) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_3 (struct comedi_device*,struct comedi_cmd const*) ;
 int FUNC_4 (struct comedi_device*) ;
 int FUNC_5 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_6 (struct comedi_device*,struct comedi_cmd const*) ;
 int FUNC_7 (struct comedi_device*,struct comedi_cmd const*) ;
 int FUNC_8 (struct comedi_device*,struct comedi_cmd const*) ;
 int FUNC_9 (int ,struct comedi_subdevice*,struct comedi_cmd const*,int) ;

__attribute__((used)) static int FUNC_10(struct comedi_device *VAR_1, struct comedi_subdevice *VAR_2)
{
 struct ni_private *VAR_3 = VAR_1->private;
 const struct comedi_cmd *VAR_4 = &VAR_2->async->cmd;

 if (VAR_1->irq == 0) {
  FUNC_0(VAR_1->class_dev, "cannot run command without an irq");
  return -VAR_0;
 }


 FUNC_1(VAR_1, VAR_4);


 FUNC_7(VAR_1, VAR_4);
 FUNC_3(VAR_1, VAR_4);
 FUNC_8(VAR_1, VAR_4);
 FUNC_2(VAR_1, VAR_2);
 FUNC_6(VAR_1, VAR_4);
 FUNC_4(VAR_1);
 FUNC_9(VAR_3->ao_mite_ring, VAR_2, VAR_4, 0x00ffffff);
 FUNC_5(VAR_1, VAR_2);
 VAR_3->ao_needs_arming = 1;
 return 0;
}
