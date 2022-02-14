
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {struct apci1500_private* private; } ;
struct apci1500_private {scalar_t__ amcc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_1)
{
 struct apci1500_private *VAR_2 = VAR_1->private;

 if (VAR_2->amcc)
  FUNC_1(0x0, VAR_2->amcc + VAR_0);
 FUNC_0(VAR_1);
}
