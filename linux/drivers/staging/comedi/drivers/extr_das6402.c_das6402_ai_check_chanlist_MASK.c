
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int n_chan; } ;
struct comedi_device {int class_dev; } ;
struct comedi_cmd {int chanlist_len; int * chanlist; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_2,
         struct comedi_subdevice *VAR_3,
         struct comedi_cmd *VAR_4)
{
 unsigned int VAR_5 = FUNC_1(VAR_4->chanlist[0]);
 unsigned int VAR_6 = FUNC_2(VAR_4->chanlist[0]);
 unsigned int VAR_7 = FUNC_0(VAR_4->chanlist[0]);
 int VAR_8;

 for (VAR_8 = 1; VAR_8 < VAR_4->chanlist_len; VAR_8++) {
  unsigned int VAR_9 = FUNC_1(VAR_4->chanlist[VAR_8]);
  unsigned int VAR_10 = FUNC_2(VAR_4->chanlist[VAR_8]);
  unsigned int VAR_11 = FUNC_0(VAR_4->chanlist[VAR_8]);

  if (VAR_9 != VAR_5 + VAR_8) {
   FUNC_3(VAR_2->class_dev,
    "chanlist must be consecutive\n");
   return -VAR_1;
  }

  if (VAR_10 != VAR_6) {
   FUNC_3(VAR_2->class_dev,
    "chanlist must have the same range\n");
   return -VAR_1;
  }

  if (VAR_11 != VAR_7) {
   FUNC_3(VAR_2->class_dev,
    "chanlist must have the same reference\n");
   return -VAR_1;
  }

  if (VAR_7 == VAR_0 && VAR_9 > (VAR_3->n_chan / 2)) {
   FUNC_3(VAR_2->class_dev,
    "chanlist differential channel to large\n");
   return -VAR_1;
  }
 }
 return 0;
}
