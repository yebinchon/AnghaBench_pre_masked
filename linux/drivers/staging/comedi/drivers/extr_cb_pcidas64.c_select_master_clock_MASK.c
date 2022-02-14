
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcidas64_board {int layout; } ;
struct comedi_device {struct pcidas64_board* board_ptr; } ;
struct comedi_cmd {int dummy; } ;



 int FUNC_0 (struct comedi_device*,struct comedi_cmd const*) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_0,
    const struct comedi_cmd *VAR_1)
{
 const struct pcidas64_board *VAR_2 = VAR_0->board_ptr;

 switch (VAR_2->layout) {
 case 128:
  FUNC_0(VAR_0, VAR_1);
  break;
 default:
  break;
 }
}
