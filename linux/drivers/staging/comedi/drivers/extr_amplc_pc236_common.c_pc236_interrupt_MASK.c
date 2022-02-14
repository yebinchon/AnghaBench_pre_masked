
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int state; } ;
struct comedi_device {scalar_t__ attached; struct comedi_subdevice* read_subdev; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct comedi_subdevice*,int *,int) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_3 (struct comedi_device*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_0, void *VAR_1)
{
 struct comedi_device *VAR_2 = VAR_1;
 struct comedi_subdevice *VAR_3 = VAR_2->read_subdev;
 bool VAR_4;

 VAR_4 = FUNC_3(VAR_2);
 if (VAR_2->attached && VAR_4) {
  FUNC_1(VAR_3, &VAR_3->state, 1);
  FUNC_2(VAR_2, VAR_3);
 }
 return FUNC_0(VAR_4);
}
