
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int class_dev; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 unsigned short FUNC_1 (struct comedi_device*,int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_3)
{
 static const int VAR_4 = 10000;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  unsigned short VAR_6;

  VAR_6 = FUNC_1(VAR_3, VAR_2);
  if (VAR_6 & VAR_1)
   break;




  FUNC_2(10, 100);
 }
 if (VAR_5 == VAR_4) {
  FUNC_0(VAR_3->class_dev, "timed out waiting for dma load\n");
  return -VAR_0;
 }
 return 0;
}
