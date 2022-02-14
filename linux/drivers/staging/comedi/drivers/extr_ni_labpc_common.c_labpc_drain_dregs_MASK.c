
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct labpc_private {scalar_t__ current_transfer; } ;
struct comedi_device {struct labpc_private* private; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (struct comedi_device*) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_1)
{
 struct labpc_private *VAR_2 = VAR_1->private;

 if (VAR_2->current_transfer == VAR_0)
  FUNC_0(VAR_1);

 FUNC_1(VAR_1);
}
