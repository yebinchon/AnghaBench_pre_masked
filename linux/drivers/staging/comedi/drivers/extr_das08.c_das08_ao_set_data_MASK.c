
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct das08_board_struct {scalar_t__ is_jr; } ;
struct comedi_device {scalar_t__ iobase; struct das08_board_struct* board_ptr; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (unsigned char,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct comedi_device *VAR_2,
         unsigned int VAR_3, unsigned int VAR_4)
{
 const struct das08_board_struct *VAR_5 = VAR_2->board_ptr;
 unsigned char VAR_6;
 unsigned char VAR_7;

 VAR_6 = VAR_4 & 0xff;
 VAR_7 = (VAR_4 >> 8) & 0xff;
 if (VAR_5->is_jr) {
  FUNC_5(VAR_6, VAR_2->iobase + FUNC_2(VAR_3));
  FUNC_5(VAR_7, VAR_2->iobase + FUNC_3(VAR_3));

  FUNC_4(VAR_2->iobase + VAR_1);
 } else {
  FUNC_5(VAR_6, VAR_2->iobase + FUNC_0(VAR_3));
  FUNC_5(VAR_7, VAR_2->iobase + FUNC_1(VAR_3));

  FUNC_4(VAR_2->iobase + VAR_0);
 }
}
