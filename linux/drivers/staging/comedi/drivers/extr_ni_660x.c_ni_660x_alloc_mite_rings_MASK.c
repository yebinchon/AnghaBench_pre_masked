
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_660x_private {int ** ring; int mite; } ;
struct ni_660x_board {unsigned int n_chips; } ;
struct comedi_device {struct ni_660x_private* private; struct ni_660x_board* board_ptr; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_2)
{
 const struct ni_660x_board *VAR_3 = VAR_2->board_ptr;
 struct ni_660x_private *VAR_4 = VAR_2->private;
 unsigned int VAR_5;
 unsigned int VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_3->n_chips; ++VAR_5) {
  for (VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6) {
   VAR_4->ring[VAR_5][VAR_6] = FUNC_0(VAR_4->mite);
   if (!VAR_4->ring[VAR_5][VAR_6])
    return -VAR_0;
  }
 }
 return 0;
}
