
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcidas64_board {scalar_t__ layout; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {int class_dev; struct pcidas64_board* board_ptr; } ;
struct comedi_cmd {int chanlist_len; int * chanlist; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_2,
      struct comedi_subdevice *VAR_3,
      struct comedi_cmd *VAR_4)
{
 const struct pcidas64_board *VAR_5 = VAR_2->board_ptr;
 unsigned int VAR_6 = FUNC_0(VAR_4->chanlist[0]);
 int VAR_7;

 for (VAR_7 = 1; VAR_7 < VAR_4->chanlist_len; VAR_7++) {
  unsigned int VAR_8 = FUNC_0(VAR_4->chanlist[VAR_7]);

  if (VAR_8 != VAR_6) {
   FUNC_2(VAR_2->class_dev,
    "all elements in chanlist must use the same analog reference\n");
   return -VAR_0;
  }
 }

 if (VAR_5->layout == VAR_1) {
  unsigned int VAR_9 = FUNC_1(VAR_4->chanlist[0]);

  for (VAR_7 = 1; VAR_7 < VAR_4->chanlist_len; VAR_7++) {
   unsigned int VAR_10 = FUNC_1(VAR_4->chanlist[VAR_7]);

   if (VAR_10 != (VAR_9 + VAR_7)) {
    FUNC_2(VAR_2->class_dev,
     "chanlist must use consecutive channels\n");
    return -VAR_0;
   }
  }
  if (VAR_4->chanlist_len == 3) {
   FUNC_2(VAR_2->class_dev,
    "chanlist cannot be 3 channels long, use 1, 2, or 4 channels\n");
   return -VAR_0;
  }
 }

 return 0;
}
