
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {int class_dev; } ;
struct comedi_cmd {int chanlist_len; int * chanlist; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_1,
     struct comedi_subdevice *VAR_2,
     struct comedi_cmd *VAR_3)
{
 unsigned int VAR_4 = FUNC_1(VAR_3->chanlist[0]);
 int VAR_5;

 if (VAR_3->chanlist_len > 3 && VAR_3->chanlist_len != 16) {
  FUNC_2(VAR_1->class_dev, "unsupported combination of channels\n");
  return -VAR_0;
 }

 for (VAR_5 = 0; VAR_5 < VAR_3->chanlist_len; ++VAR_5) {
  unsigned int VAR_6 = FUNC_0(VAR_3->chanlist[VAR_5]);
  unsigned int VAR_7 = FUNC_1(VAR_3->chanlist[VAR_5]);

  if (VAR_6 != VAR_5) {
   FUNC_2(VAR_1->class_dev,
    "channels are not consecutive\n");
   return -VAR_0;
  }
  if (VAR_7 != VAR_4 && VAR_3->chanlist_len > 3) {
   FUNC_2(VAR_1->class_dev,
    "gain must be the same for all channels\n");
   return -VAR_0;
  }
 }
 return 0;
}
