
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; struct apci1516_private* private; struct apci1516_boardinfo* board_ptr; } ;
struct apci1516_private {int wdog_iobase; } ;
struct apci1516_boardinfo {int has_wdog; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_1)
{
 const struct apci1516_boardinfo *VAR_2 = VAR_1->board_ptr;
 struct apci1516_private *VAR_3 = VAR_1->private;

 if (!VAR_2->has_wdog)
  return 0;

 FUNC_1(0x0, VAR_1->iobase + VAR_0);

 FUNC_0(VAR_3->wdog_iobase);

 return 0;
}
