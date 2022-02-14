
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {int class_dev; } ;
struct comedi_cmd {int chanlist_len; int * chanlist; } ;
typedef enum scan_mode { ____Placeholder_scan_mode } scan_mode ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int VAR_0 ;




 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct comedi_cmd*) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_1,
       struct comedi_subdevice *VAR_2,
       struct comedi_cmd *VAR_3)
{
 enum scan_mode VAR_4 = FUNC_4(VAR_3);
 unsigned int VAR_5 = FUNC_1(VAR_3->chanlist[0]);
 unsigned int VAR_6 = FUNC_2(VAR_3->chanlist[0]);
 unsigned int VAR_7 = FUNC_0(VAR_3->chanlist[0]);
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_3->chanlist_len; VAR_8++) {
  unsigned int VAR_9 = FUNC_1(VAR_3->chanlist[VAR_8]);
  unsigned int VAR_10 = FUNC_2(VAR_3->chanlist[VAR_8]);
  unsigned int VAR_11 = FUNC_0(VAR_3->chanlist[VAR_8]);

  switch (VAR_4) {
  case 129:
   break;
  case 128:
   if (VAR_9 != VAR_5) {
    FUNC_3(VAR_1->class_dev,
     "channel scanning order specified in chanlist is not supported by hardware\n");
    return -VAR_0;
   }
   break;
  case 130:
   if (VAR_9 != VAR_8) {
    FUNC_3(VAR_1->class_dev,
     "channel scanning order specified in chanlist is not supported by hardware\n");
    return -VAR_0;
   }
   break;
  case 131:
   if (VAR_9 != (VAR_3->chanlist_len - VAR_8 - 1)) {
    FUNC_3(VAR_1->class_dev,
     "channel scanning order specified in chanlist is not supported by hardware\n");
    return -VAR_0;
   }
   break;
  }

  if (VAR_10 != VAR_6) {
   FUNC_3(VAR_1->class_dev,
    "entries in chanlist must all have the same range\n");
   return -VAR_0;
  }

  if (VAR_11 != VAR_7) {
   FUNC_3(VAR_1->class_dev,
    "entries in chanlist must all have the same reference\n");
   return -VAR_0;
  }
 }

 return 0;
}
