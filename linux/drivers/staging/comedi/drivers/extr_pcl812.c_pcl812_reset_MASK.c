
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcl812_private {int mode_reg_int; int last_ai_chanspec; } ;
struct pcl812_board {unsigned int n_aochan; scalar_t__ has_dio; } ;
struct comedi_device {scalar_t__ iobase; struct pcl812_private* private; struct pcl812_board* board_ptr; } ;


 int FUNC_0 (int,int ,int ) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (struct comedi_device*) ;
 int FUNC_5 (struct comedi_device*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct comedi_device *VAR_4)
{
 const struct pcl812_board *VAR_5 = VAR_4->board_ptr;
 struct pcl812_private *VAR_6 = VAR_4->private;
 unsigned int VAR_7;


 FUNC_3(VAR_6->mode_reg_int | VAR_0,
      VAR_4->iobase + VAR_1);
 FUNC_4(VAR_4);





 VAR_6->last_ai_chanspec = FUNC_0(16, 0, 0);
 FUNC_5(VAR_4, FUNC_0(0, 0, 0), 0);


 for (VAR_7 = 0; VAR_7 < VAR_5->n_aochan; VAR_7++) {
  FUNC_3(0, VAR_4->iobase + FUNC_1(VAR_7));
  FUNC_3(0, VAR_4->iobase + FUNC_2(VAR_7));
 }


 if (VAR_5->has_dio) {
  FUNC_3(0, VAR_4->iobase + VAR_3);
  FUNC_3(0, VAR_4->iobase + VAR_2);
 }
}
