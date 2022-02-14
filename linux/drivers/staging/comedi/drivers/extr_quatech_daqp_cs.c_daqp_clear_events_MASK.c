
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int class_dev; scalar_t__ iobase; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 unsigned int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_3, int VAR_4)
{
 unsigned int VAR_5;





 while (--VAR_4) {
  VAR_5 = FUNC_1(VAR_3->iobase + VAR_1);
  if ((VAR_5 & VAR_0) == 0)
   return 0;
 }
 FUNC_0(VAR_3->class_dev, "couldn't clear events in status register\n");
 return -VAR_2;
}
