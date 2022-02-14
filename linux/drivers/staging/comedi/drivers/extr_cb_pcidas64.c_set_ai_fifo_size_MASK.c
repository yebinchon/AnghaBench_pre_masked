
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcidas64_board {struct hw_fifo_info* ai_fifo; } ;
struct hw_fifo_info {unsigned int sample_packing_ratio; unsigned int num_segments; } ;
struct comedi_device {struct pcidas64_board* board_ptr; } ;


 int FUNC_0 (struct comedi_device*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_0, unsigned int VAR_1)
{
 const struct pcidas64_board *VAR_2 = VAR_0->board_ptr;
 unsigned int VAR_3;
 int VAR_4;
 const struct hw_fifo_info *const VAR_5 = VAR_2->ai_fifo;

 VAR_3 = VAR_1 / VAR_5->sample_packing_ratio;

 VAR_4 = FUNC_0(VAR_0,
         VAR_3 /
         VAR_5->num_segments);
 if (VAR_4 < 0)
  return VAR_4;

 return VAR_4 * VAR_5->num_segments * VAR_5->sample_packing_ratio;
}
