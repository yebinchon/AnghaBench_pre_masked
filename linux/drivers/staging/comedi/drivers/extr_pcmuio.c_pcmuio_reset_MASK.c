
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmuio_board {int num_asics; } ;
struct comedi_device {struct pcmuio_board* board_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct comedi_device*,int ,int,int ,int) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_3)
{
 const struct pcmuio_board *VAR_4 = VAR_3->board_ptr;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4->num_asics; ++VAR_5) {

  FUNC_0(VAR_3, 0, VAR_5, 0, 0);
  FUNC_0(VAR_3, 0, VAR_5, 0, 3);


  FUNC_0(VAR_3, 0, VAR_5, VAR_2, 0);
  FUNC_0(VAR_3, 0, VAR_5, VAR_0, 0);
  FUNC_0(VAR_3, 0, VAR_5, VAR_1, 0);
 }
}
