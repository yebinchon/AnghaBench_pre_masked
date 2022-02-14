
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int subdev_flags; int n_chan; } ;
struct comedi_device {int class_dev; } ;
struct comedi_cmd {int chanlist_len; int * chanlist; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_3,
        struct comedi_subdevice *VAR_4,
        struct comedi_cmd *VAR_5)
{
 unsigned int VAR_6 = FUNC_0(VAR_5->chanlist[0]);
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_5->chanlist_len; VAR_7++) {
  unsigned int VAR_8 = FUNC_1(VAR_5->chanlist[VAR_7]);
  unsigned int VAR_9 = FUNC_2(VAR_5->chanlist[VAR_7]);
  unsigned int VAR_10 = FUNC_0(VAR_5->chanlist[VAR_7]);

  if (VAR_10 != VAR_6) {
   FUNC_4(VAR_3->class_dev,
    "Mode is not equal for all entries\n");
   return -VAR_1;
  }

  if (VAR_10 == VAR_0) {
   if (!(VAR_4->subdev_flags & VAR_2)) {
    FUNC_5(VAR_3->class_dev,
     "Differential inputs are not available\n");
    return -VAR_1;
   }

   if (VAR_8 >= (VAR_4->n_chan / 2)) {
    FUNC_4(VAR_3->class_dev,
     "Channel number to high\n");
    return -VAR_1;
   }

   if (!FUNC_3(VAR_4, VAR_9)) {
    FUNC_4(VAR_3->class_dev,
     "Bipolar is not selected in differential mode\n");
    return -VAR_1;
   }
  }
 }

 return 0;
}
