
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_660x_private {int ** ring; } ;
struct ni_660x_board {unsigned int n_chips; } ;
struct comedi_device {struct ni_660x_private* private; struct ni_660x_board* board_ptr; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_1)
{
 const struct ni_660x_board *VAR_2 = VAR_1->board_ptr;
 struct ni_660x_private *VAR_3 = VAR_1->private;
 unsigned int VAR_4;
 unsigned int VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_2->n_chips; ++VAR_4) {
  for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5)
   FUNC_0(VAR_3->ring[VAR_4][VAR_5]);
 }
}
