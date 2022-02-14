
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct das16_board {size_t ai_pg; } ;
struct comedi_device {scalar_t__ iobase; struct das16_board* board_ptr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int** VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_4,
       unsigned int VAR_5,
       unsigned int VAR_6,
       unsigned int VAR_7)
{
 const struct das16_board *VAR_8 = VAR_4->board_ptr;


 FUNC_0(VAR_5 | (VAR_6 << 4), VAR_4->iobase + VAR_1);


 if (VAR_8->ai_pg == VAR_3)
  return;






 FUNC_0((VAR_2[VAR_8->ai_pg])[VAR_7],
      VAR_4->iobase + VAR_0);
}
