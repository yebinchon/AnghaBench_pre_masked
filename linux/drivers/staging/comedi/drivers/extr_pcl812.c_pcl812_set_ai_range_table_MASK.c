
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcl812_private {int range_correction; } ;
struct pcl812_board {int board_type; int * rangelist_ai; } ;
struct comedi_subdevice {int * range_table; } ;
struct comedi_device {struct pcl812_private* private; struct pcl812_board* board_ptr; } ;
struct comedi_devconfig {int* options; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static void FUNC_0(struct comedi_device *VAR_16,
          struct comedi_subdevice *VAR_17,
          struct comedi_devconfig *VAR_18)
{
 const struct pcl812_board *VAR_19 = VAR_16->board_ptr;
 struct pcl812_private *VAR_20 = VAR_16->private;

 switch (VAR_19->board_type) {
 case 129:
  if (VAR_18->options[4] == 1)
   VAR_17->range_table = &VAR_14;
  else
   VAR_17->range_table = VAR_19->rangelist_ai;
  break;
 case 130:
  switch (VAR_18->options[4]) {
  case 0:
   VAR_17->range_table = &VAR_7;
   break;
  case 1:
   VAR_17->range_table = &VAR_9;
   break;
  case 2:
   VAR_17->range_table = &VAR_8;
   break;
  case 3:
   VAR_17->range_table = &VAR_2;
   break;
  case 4:
   VAR_17->range_table = &VAR_1;
   break;
  case 5:
   VAR_17->range_table = &VAR_0;
   break;
  default:
   VAR_17->range_table = &VAR_7;
   break;
  }
  break;
 case 128:
  if (VAR_18->options[1] == 1)
   VAR_17->range_table = &VAR_15;
  else
   VAR_17->range_table = VAR_19->rangelist_ai;
  break;
 case 131:
  switch (VAR_18->options[1]) {
  case 0:
   VAR_17->range_table = &VAR_11;
   break;
  case 1:
   VAR_17->range_table = &VAR_10;
   break;
  case 2:
   VAR_17->range_table = &VAR_13;
   VAR_20->range_correction = 1;
   break;
  case 3:
   VAR_17->range_table = &VAR_12;
   VAR_20->range_correction = 1;
   break;
  default:
   VAR_17->range_table = &VAR_11;
   break;
  }
  break;
 case 132:
  switch (VAR_18->options[1]) {
  case 0:
   VAR_17->range_table = &VAR_4;
   break;
  case 1:
   VAR_17->range_table = &VAR_3;
   break;
  case 2:
   VAR_17->range_table = &VAR_6;
   VAR_20->range_correction = 1;
   break;
  case 3:
   VAR_17->range_table = &VAR_5;
   VAR_20->range_correction = 1;
   break;
  default:
   VAR_17->range_table = &VAR_4;
   break;
  }
  break;
 default:
  VAR_17->range_table = VAR_19->rangelist_ai;
  break;
 }
}
