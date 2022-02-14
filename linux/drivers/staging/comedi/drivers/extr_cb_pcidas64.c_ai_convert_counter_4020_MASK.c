
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_2__ {unsigned int divisor; } ;
struct pcidas64_private {TYPE_1__ ext_clock; } ;
struct comedi_device {int class_dev; struct pcidas64_private* private; } ;
struct comedi_cmd {int scan_begin_src; unsigned int scan_begin_arg; } ;


 unsigned int VAR_0 ;


 int FUNC_0 (int ,char*) ;

__attribute__((used)) static u32 FUNC_1(struct comedi_device *VAR_1,
       struct comedi_cmd *VAR_2)
{
 struct pcidas64_private *VAR_3 = VAR_1->private;
 unsigned int VAR_4;

 switch (VAR_2->scan_begin_src) {
 case 128:
  VAR_4 = VAR_2->scan_begin_arg / VAR_0;
  break;
 case 129:
  VAR_4 = VAR_3->ext_clock.divisor;
  break;
 default:
  FUNC_0(VAR_1->class_dev, "bug! failed to set ai pacing!\n");
  VAR_4 = 1000;
  break;
 }


 return VAR_4 - 2;
}
