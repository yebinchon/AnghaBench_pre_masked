
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct comedi_device {struct device* hw_dev; } ;


 int VAR_0 ;
 struct comedi_device** VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct comedi_device*) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct device *VAR_4)
{
 int VAR_5;
 struct comedi_device *VAR_6;

 for (VAR_5 = VAR_3; VAR_5 < VAR_0;
      VAR_5++) {
  FUNC_1(&VAR_2);
  VAR_6 = VAR_1[VAR_5];
  if (VAR_6 && VAR_6->hw_dev == VAR_4) {
   VAR_1[VAR_5] = ((void*)0);
   FUNC_2(&VAR_2);
   FUNC_0(VAR_6);
   break;
  }
  FUNC_2(&VAR_2);
 }
}
