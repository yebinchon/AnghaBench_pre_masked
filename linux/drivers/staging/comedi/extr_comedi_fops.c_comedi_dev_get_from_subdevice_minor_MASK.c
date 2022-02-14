
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int * device; } ;
struct comedi_device {int dummy; } ;


 unsigned int VAR_0 ;
 struct comedi_device* FUNC_0 (int *) ;
 struct comedi_subdevice** VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct comedi_device *
FUNC_3(unsigned int VAR_3)
{
 struct comedi_device *VAR_4;
 struct comedi_subdevice *VAR_5;
 unsigned int VAR_6 = VAR_3 - VAR_0;

 FUNC_1(&VAR_2);
 VAR_5 = VAR_1[VAR_6];
 VAR_4 = FUNC_0(VAR_5 ? VAR_5->device : ((void*)0));
 FUNC_2(&VAR_2);
 return VAR_4;
}
