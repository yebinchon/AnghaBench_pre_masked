
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct labpc_private {int stat1; int stat2; } ;
struct labpc_boardinfo {scalar_t__ is_labpc1200; } ;
struct comedi_device {struct labpc_private* private; struct labpc_boardinfo* board_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct comedi_device*) ;

void FUNC_1(struct comedi_device *VAR_2)
{
 const struct labpc_boardinfo *VAR_3 = VAR_2->board_ptr;
 struct labpc_private *VAR_4 = VAR_2->private;





 if (VAR_4->stat1 & VAR_0 ||
     (VAR_3->is_labpc1200 && VAR_4->stat2 & VAR_1))
  FUNC_0(VAR_2);
}
