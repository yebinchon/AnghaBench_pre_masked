
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int class_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned short VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 unsigned short FUNC_1 (struct comedi_device*,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_6)
{
 unsigned short VAR_7;
 const int VAR_8 = VAR_2;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  VAR_7 = FUNC_1(VAR_6, VAR_4);
  if ((VAR_7 & VAR_3) == 0)
   break;
  FUNC_3(VAR_5);
  if (FUNC_2(1))
   return -VAR_0;
 }
 if (VAR_9 == VAR_8) {
  FUNC_0(VAR_6->class_dev, "timeout\n");
  return -VAR_1;
 }
 return 0;
}
