
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int class_dev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static unsigned int FUNC_1(struct comedi_device *VAR_10,
        unsigned int VAR_11)
{

 switch (VAR_11) {
 case 0:
  return VAR_1;
 case 1:
  return VAR_2;
 case 2:
  return VAR_0;
 case 3:
  return VAR_9;
 case 4:
  return VAR_7;
 case 5:
  return VAR_5;
 case 6:
  return VAR_4;
 case 7:
  return VAR_3;
 case 8:
  return VAR_8;
 case 9:
  return VAR_6;
 default:
  FUNC_0(VAR_10->class_dev, "bug, unhandled case in switch.\n");
  break;
 }
 return 0;
}
