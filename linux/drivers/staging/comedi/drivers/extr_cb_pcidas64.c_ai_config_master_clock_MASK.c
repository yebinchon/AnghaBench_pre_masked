
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcidas64_board {int layout; } ;
struct comedi_device {struct pcidas64_board* board_ptr; } ;


 int VAR_0 ;

 int FUNC_0 (struct comedi_device*,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_1, unsigned int *VAR_2)
{
 const struct pcidas64_board *VAR_3 = VAR_1->board_ptr;

 switch (VAR_3->layout) {
 case 128:
  return FUNC_0(VAR_1, VAR_2);
 default:
  return -VAR_0;
 }

 return -VAR_0;
}
