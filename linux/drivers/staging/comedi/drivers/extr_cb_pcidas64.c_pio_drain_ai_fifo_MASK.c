
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcidas64_board {scalar_t__ layout; } ;
struct comedi_device {struct pcidas64_board* board_ptr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (struct comedi_device*) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_1)
{
 const struct pcidas64_board *VAR_2 = VAR_1->board_ptr;

 if (VAR_2->layout == VAR_0)
  FUNC_1(VAR_1);
 else
  FUNC_0(VAR_1);
}
