
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcl818_board {unsigned int n_aochan; scalar_t__ has_fifo; } ;
struct comedi_device {scalar_t__ iobase; struct pcl818_board* board_ptr; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct comedi_device*) ;
 int FUNC_4 (struct comedi_device*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_8)
{
 const struct pcl818_board *VAR_9 = VAR_8->board_ptr;
 unsigned int VAR_10;


 if (VAR_9->has_fifo) {
  FUNC_2(0, VAR_8->iobase + VAR_7);
  FUNC_2(0, VAR_8->iobase + VAR_6);
  FUNC_2(0, VAR_8->iobase + VAR_5);
 }


 FUNC_2(VAR_1, VAR_8->iobase + VAR_2);
 FUNC_3(VAR_8);

 FUNC_4(VAR_8, 0, 0);


 FUNC_2(0, VAR_8->iobase + VAR_0);


 for (VAR_10 = 0; VAR_10 < VAR_9->n_aochan; VAR_10++) {
  FUNC_2(0, VAR_8->iobase + FUNC_0(VAR_10));
  FUNC_2(0, VAR_8->iobase + FUNC_1(VAR_10));
 }


 FUNC_2(0, VAR_8->iobase + VAR_4);
 FUNC_2(0, VAR_8->iobase + VAR_3);
}
