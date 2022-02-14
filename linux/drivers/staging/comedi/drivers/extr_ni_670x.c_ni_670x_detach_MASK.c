
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int range_table_list; } ;
struct comedi_device {struct comedi_subdevice* subdevices; scalar_t__ n_subdevices; } ;


 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_0)
{
 struct comedi_subdevice *VAR_1;

 FUNC_0(VAR_0);
 if (VAR_0->n_subdevices) {
  VAR_1 = &VAR_0->subdevices[0];
  if (VAR_1)
   FUNC_1(VAR_1->range_table_list);
 }
}
