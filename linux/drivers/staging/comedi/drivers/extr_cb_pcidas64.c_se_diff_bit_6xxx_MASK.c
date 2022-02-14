
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcidas64_board {scalar_t__ layout; } ;
struct comedi_device {struct pcidas64_board* board_ptr; } ;


 unsigned short VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline unsigned short FUNC_0(struct comedi_device *VAR_3,
           int VAR_4)
{
 const struct pcidas64_board *VAR_5 = VAR_3->board_ptr;

 if ((VAR_5->layout == VAR_2 && !VAR_4) ||
     (VAR_5->layout == VAR_1 && VAR_4))
  return VAR_0;

 return 0;
}
