
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {scalar_t__ minor; int * class_dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;
 int VAR_3 ;
 struct comedi_subdevice** VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct comedi_subdevice *VAR_6)
{
 unsigned int VAR_7;

 if (!VAR_6)
  return;
 if (VAR_6->minor < VAR_1 ||
     VAR_6->minor >= VAR_2)
  return;

 VAR_7 = VAR_6->minor - VAR_1;
 FUNC_2(&VAR_5);
 if (VAR_6 == VAR_4[VAR_7])
  VAR_4[VAR_7] = ((void*)0);
 FUNC_3(&VAR_5);
 if (VAR_6->class_dev) {
  FUNC_1(VAR_3, FUNC_0(VAR_0, VAR_6->minor));
  VAR_6->class_dev = ((void*)0);
 }
}
