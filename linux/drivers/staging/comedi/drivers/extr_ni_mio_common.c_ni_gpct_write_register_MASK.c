
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ni_gpct {TYPE_1__* counter_dev; } ;
struct comedi_device {int dummy; } ;
typedef enum ni_gpct_register { ____Placeholder_ni_gpct_register } ni_gpct_register ;
struct TYPE_2__ {struct comedi_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (struct comedi_device*,int) ;
 int FUNC_1 (struct comedi_device*,unsigned int,int,unsigned int) ;
 int FUNC_2 (struct comedi_device*,unsigned int,unsigned int) ;
 int FUNC_3 (struct comedi_device*,unsigned int,unsigned int) ;
 int FUNC_4 (struct comedi_device*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct ni_gpct *VAR_4, unsigned int VAR_5,
       enum ni_gpct_register VAR_6)
{
 struct comedi_device *VAR_7 = VAR_4->counter_dev->dev;
 unsigned int VAR_8 = FUNC_0(VAR_7, VAR_6);

 if (VAR_8 == 0)
  return;

 switch (VAR_6) {

 case 140:
 case 133:
 case 138:
 case 131:
 case 139:
 case 132:
 case 141:
 case 134:
  FUNC_4(VAR_7, VAR_5, VAR_8);
  break;


 case 136:
 case 129:
 case 135:
 case 128:
  FUNC_2(VAR_7, VAR_5, VAR_8);
  break;


 case 137:
  FUNC_1(VAR_7, VAR_8,
    VAR_0 | VAR_1,
    VAR_5);
  break;
 case 130:
  FUNC_1(VAR_7, VAR_8,
    VAR_2 | VAR_3,
    VAR_5);
  break;
 default:
  FUNC_3(VAR_7, VAR_5, VAR_8);
 }
}
