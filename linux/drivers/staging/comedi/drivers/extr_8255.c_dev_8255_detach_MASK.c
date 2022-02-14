
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {scalar_t__ type; } ;
struct comedi_device {int n_subdevices; struct comedi_subdevice* subdevices; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long,int ) ;
 unsigned long FUNC_1 (struct comedi_subdevice*) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_2)
{
 struct comedi_subdevice *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->n_subdevices; VAR_4++) {
  VAR_3 = &VAR_2->subdevices[VAR_4];
  if (VAR_3->type != VAR_0) {
   unsigned long VAR_5 = FUNC_1(VAR_3);

   FUNC_0(VAR_5, VAR_1);
  }
 }
}
