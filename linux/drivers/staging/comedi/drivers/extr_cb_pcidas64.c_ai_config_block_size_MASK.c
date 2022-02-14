
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcidas64_board {struct hw_fifo_info* ai_fifo; } ;
struct hw_fifo_info {unsigned int num_segments; } ;
struct comedi_device {struct pcidas64_board* board_ptr; } ;


 unsigned int FUNC_0 (struct comedi_device*) ;
 unsigned int VAR_0 ;
 int FUNC_1 (struct comedi_device*,int) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_1, unsigned int *VAR_2)
{
 const struct pcidas64_board *VAR_3 = VAR_1->board_ptr;
 int VAR_4;
 const struct hw_fifo_info *const VAR_5 = VAR_3->ai_fifo;
 unsigned int VAR_6, VAR_7;
 int VAR_8;

 VAR_7 = VAR_2[1];

 if (VAR_7) {
  VAR_4 = VAR_7 * VAR_5->num_segments /
       VAR_0;

  VAR_8 = FUNC_1(VAR_1, VAR_4);
  if (VAR_8 < 0)
   return VAR_8;
 }

 VAR_6 = FUNC_0(VAR_1) / VAR_5->num_segments * VAR_0;

 VAR_2[1] = VAR_6;

 return 2;
}
