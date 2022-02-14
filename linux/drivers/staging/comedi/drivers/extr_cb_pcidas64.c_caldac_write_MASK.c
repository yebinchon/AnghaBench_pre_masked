
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcidas64_board {int layout; } ;
struct comedi_device {struct pcidas64_board* board_ptr; } ;





 int FUNC_0 (struct comedi_device*,unsigned int,unsigned int) ;
 int FUNC_1 (struct comedi_device*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_0, unsigned int VAR_1,
    unsigned int VAR_2)
{
 const struct pcidas64_board *VAR_3 = VAR_0->board_ptr;

 switch (VAR_3->layout) {
 case 129:
 case 128:
  FUNC_0(VAR_0, VAR_1, VAR_2);
  break;
 case 130:
  FUNC_1(VAR_0, VAR_1, VAR_2);
  break;
 default:
  break;
 }
}
