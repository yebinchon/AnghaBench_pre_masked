
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ni_gpct {TYPE_1__* counter_dev; } ;
struct comedi_device {int dummy; } ;
typedef enum ni_gpct_register { ____Placeholder_ni_gpct_register } ni_gpct_register ;
struct TYPE_2__ {struct comedi_device* dev; } ;
 unsigned int FUNC_0 (struct comedi_device*,int) ;
 unsigned int FUNC_1 (struct comedi_device*,unsigned int) ;
 unsigned int FUNC_2 (struct comedi_device*,unsigned int) ;
 unsigned int FUNC_3 (struct comedi_device*,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_4(struct ni_gpct *VAR_0,
       enum ni_gpct_register VAR_1)
{
 struct comedi_device *VAR_2 = VAR_0->counter_dev->dev;
 unsigned int VAR_3 = FUNC_0(VAR_2, VAR_1);

 if (VAR_3 == 0)
  return 0;

 switch (VAR_1) {

 case 133:
 case 130:
  return FUNC_1(VAR_2, VAR_3);


 case 132:
 case 129:
 case 131:
 case 128:
  return FUNC_2(VAR_2, VAR_3);


 default:
  return FUNC_3(VAR_2, VAR_3);
 }
}
