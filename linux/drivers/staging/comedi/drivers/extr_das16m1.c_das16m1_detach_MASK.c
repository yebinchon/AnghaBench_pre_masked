
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct das16m1_private {int counter; scalar_t__ extra_iobase; } ;
struct comedi_device {struct das16m1_private* private; } ;


 int VAR_0 ;
 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_1)
{
 struct das16m1_private *VAR_2 = VAR_1->private;

 if (VAR_2) {
  if (VAR_2->extra_iobase)
   FUNC_2(VAR_2->extra_iobase, VAR_0);
  FUNC_1(VAR_2->counter);
 }
 FUNC_0(VAR_1);
}
