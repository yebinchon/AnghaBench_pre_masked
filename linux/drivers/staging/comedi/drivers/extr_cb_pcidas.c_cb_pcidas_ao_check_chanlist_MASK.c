
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {int class_dev; } ;
struct comedi_cmd {int chanlist_len; int * chanlist; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_1,
           struct comedi_subdevice *VAR_2,
           struct comedi_cmd *VAR_3)
{
 unsigned int VAR_4 = FUNC_0(VAR_3->chanlist[0]);

 if (VAR_3->chanlist_len > 1) {
  unsigned int VAR_5 = FUNC_0(VAR_3->chanlist[1]);

  if (VAR_4 != 0 || VAR_5 != 1) {
   FUNC_1(VAR_1->class_dev,
    "channels must be ordered channel 0, channel 1 in chanlist\n");
   return -VAR_0;
  }
 }

 return 0;
}
