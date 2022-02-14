
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int class_dev; scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_7)
{

 FUNC_2(VAR_3, VAR_7->iobase + VAR_4);
 FUNC_1(VAR_7->iobase + VAR_0);





 if (((FUNC_1(VAR_7->iobase + VAR_0) & 0xfff0) != 0x7c00) ||
     ((FUNC_1(VAR_7->iobase + VAR_1) & 0xf0f0) != 0x70f0) ||
     ((FUNC_1(VAR_7->iobase + VAR_2) & 0x7c93) != 0x7c90) ||
     ((FUNC_1(VAR_7->iobase + VAR_4) & 0xf8ff) != 0x0000) ||
     ((FUNC_1(VAR_7->iobase + VAR_5) & 0xff00) != 0xf000)) {
  FUNC_0(VAR_7->class_dev, "board not found\n");
  return -VAR_6;
 }
 return 0;
}
