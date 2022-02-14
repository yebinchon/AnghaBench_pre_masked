
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int divisor; unsigned int chanspec; } ;
struct pcidas64_private {TYPE_1__ ext_clock; } ;
struct comedi_device {struct pcidas64_private* private; } ;



 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct comedi_device *VAR_2,
           unsigned int *VAR_3)
{
 struct pcidas64_private *VAR_4 = VAR_2->private;
 unsigned int VAR_5 = VAR_3[4];
 int VAR_6 = 0;

 if (VAR_5 < 2) {
  VAR_5 = 2;
  VAR_6 = -VAR_0;
 }

 switch (VAR_3[1]) {
 case 128:
  VAR_4->ext_clock.divisor = VAR_5;
  VAR_4->ext_clock.chanspec = VAR_3[2];
  break;
 default:
  return -VAR_1;
 }

 VAR_3[4] = VAR_5;

 return VAR_6 ? VAR_6 : 5;
}
