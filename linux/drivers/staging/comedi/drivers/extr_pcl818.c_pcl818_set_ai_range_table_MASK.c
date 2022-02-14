
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcl818_board {scalar_t__ is_818; int * ai_range_type; } ;
struct comedi_subdevice {int * range_table; } ;
struct comedi_device {struct pcl818_board* board_ptr; } ;
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

__attribute__((used)) static void FUNC_0(struct comedi_device *VAR_11,
          struct comedi_subdevice *VAR_12,
          struct comedi_devconfig *VAR_13)
{
 const struct pcl818_board *VAR_14 = VAR_11->board_ptr;


 VAR_12->range_table = VAR_14->ai_range_type;


 if (VAR_14->is_818) {
  if (VAR_13->options[4] == 1 || VAR_13->options[4] == 10) {

   VAR_12->range_table = &VAR_7;
  }
 } else {
  switch (VAR_13->options[4]) {
  case 0:
   VAR_12->range_table = &VAR_4;
   break;
  case 1:
   VAR_12->range_table = &VAR_6;
   break;
  case 2:
   VAR_12->range_table = &VAR_5;
   break;
  case 3:
   VAR_12->range_table = &VAR_1;
   break;
  case 4:
   VAR_12->range_table = &VAR_0;
   break;
  case 6:
   VAR_12->range_table = &VAR_8;
   break;
  case 7:
   VAR_12->range_table = &VAR_9;
   break;
  case 8:
   VAR_12->range_table = &VAR_3;
   break;
  case 9:
   VAR_12->range_table = &VAR_2;
   break;
  default:
   VAR_12->range_table = &VAR_10;
   break;
  }
 }
}
