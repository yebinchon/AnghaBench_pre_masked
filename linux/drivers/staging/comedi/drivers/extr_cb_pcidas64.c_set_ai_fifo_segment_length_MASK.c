
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;
struct pcidas64_private {unsigned int fifo_size_bits; unsigned int ai_fifo_segment_length; scalar_t__ main_iobase; } ;
struct pcidas64_board {struct hw_fifo_info* ai_fifo; } ;
struct hw_fifo_info {unsigned int max_segment_length; unsigned int fifo_size_reg_mask; } ;
struct comedi_device {struct pcidas64_private* private; struct pcidas64_board* board_ptr; } ;


 unsigned int FUNC_0 (unsigned int,int const) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_1,
          unsigned int VAR_2)
{
 const struct pcidas64_board *VAR_3 = VAR_1->board_ptr;
 struct pcidas64_private *VAR_4 = VAR_1->private;
 static const int VAR_5 = 0x100;
 const struct hw_fifo_info *const VAR_6 = VAR_3->ai_fifo;
 unsigned int VAR_7;
 u16 VAR_8;

 if (VAR_2 < VAR_5)
  VAR_2 = VAR_5;
 if (VAR_2 > VAR_6->max_segment_length)
  VAR_2 = VAR_6->max_segment_length;


 VAR_7 = FUNC_0(VAR_2, VAR_5);

 VAR_8 = (~(VAR_7 - 1)) & VAR_6->fifo_size_reg_mask;
 VAR_4->fifo_size_bits &= ~VAR_6->fifo_size_reg_mask;
 VAR_4->fifo_size_bits |= VAR_8;
 FUNC_1(VAR_4->fifo_size_bits,
        VAR_4->main_iobase + VAR_0);

 VAR_4->ai_fifo_segment_length = VAR_7 * VAR_5;

 return VAR_4->ai_fifo_segment_length;
}
