
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct db2k_private {scalar_t__ plx; } ;
struct comedi_device {struct db2k_private* private; } ;


 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_0)
{
 struct db2k_private *VAR_1 = VAR_0->private;

 if (VAR_1 && VAR_1->plx)
  FUNC_1(VAR_1->plx);
 FUNC_0(VAR_0);
}
