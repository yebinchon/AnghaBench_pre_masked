
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {struct cb_pcidas_board* board_ptr; } ;
struct cb_pcidas_board {scalar_t__ has_ad8402; } ;


 int FUNC_0 (struct comedi_device*,unsigned int,int,int) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_0,
        unsigned int VAR_1, unsigned int VAR_2)
{
 const struct cb_pcidas_board *VAR_3 = VAR_0->board_ptr;

 if (VAR_3->has_ad8402) {

  FUNC_0(VAR_0, (VAR_1 << 8) | VAR_2, 10, 1);
 } else {

  FUNC_0(VAR_0, VAR_2, 7, 1);
 }
}
