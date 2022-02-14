
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcidas64_private {unsigned int calibration_source; } ;
struct pcidas64_board {scalar_t__ layout; } ;
struct comedi_device {int class_dev; struct pcidas64_private* private; struct pcidas64_board* board_ptr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_2,
     unsigned int *VAR_3)
{
 const struct pcidas64_board *VAR_4 = VAR_2->board_ptr;
 struct pcidas64_private *VAR_5 = VAR_2->private;
 unsigned int VAR_6 = VAR_3[1];
 int VAR_7;

 if (VAR_4->layout == VAR_1)
  VAR_7 = 16;
 else
  VAR_7 = 8;
 if (VAR_6 >= VAR_7) {
  FUNC_0(VAR_2->class_dev, "invalid calibration source: %i\n",
   VAR_6);
  return -VAR_0;
 }

 VAR_5->calibration_source = VAR_6;

 return 2;
}
