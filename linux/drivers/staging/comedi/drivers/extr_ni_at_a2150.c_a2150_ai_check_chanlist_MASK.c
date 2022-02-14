
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
 unsigned int VAR_5 = FUNC_0(VAR_3->chanlist[0]);
 int VAR_6;

 if (VAR_3->chanlist_len == 2 && (VAR_4 == 1 || VAR_4 == 3)) {
  FUNC_2(VAR_1->class_dev,
   "length 2 chanlist must be channels 0,1 or channels 2,3\n");
  return -VAR_0;
 }

 if (VAR_3->chanlist_len == 3) {
  FUNC_2(VAR_1->class_dev,
   "chanlist must have 1,2 or 4 channels\n");
  return -VAR_0;
 }

 for (VAR_6 = 1; VAR_6 < VAR_3->chanlist_len; VAR_6++) {
  unsigned int VAR_7 = FUNC_1(VAR_3->chanlist[VAR_6]);
  unsigned int VAR_8 = FUNC_0(VAR_3->chanlist[VAR_6]);

  if (VAR_7 != (VAR_4 + VAR_6)) {
   FUNC_2(VAR_1->class_dev,
    "entries in chanlist must be consecutive channels, counting upwards\n");
   return -VAR_0;
  }

  if (VAR_7 == 2)
   VAR_5 = VAR_8;
  if (VAR_8 != VAR_5) {
   FUNC_2(VAR_1->class_dev,
    "channels 0/1 and 2/3 must have the same analog reference\n");
   return -VAR_0;
  }
 }

 return 0;
}
