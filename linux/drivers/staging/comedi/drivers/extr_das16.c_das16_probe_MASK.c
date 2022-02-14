
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct das16_board {int id; } ;
struct comedi_device {int class_dev; scalar_t__ iobase; struct das16_board* board_ptr; } ;
struct comedi_devconfig {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_2, struct comedi_devconfig *VAR_3)
{
 const struct das16_board *VAR_4 = VAR_2->board_ptr;
 int VAR_5;


 VAR_5 = FUNC_1(VAR_2->iobase + VAR_0) & 0xf0;
 if (VAR_4->id != VAR_5) {
  FUNC_0(VAR_2->class_dev,
   "requested board's id bits are incorrect (0x%x != 0x%x)\n",
   VAR_4->id, VAR_5);
  return -VAR_1;
 }

 return 0;
}
