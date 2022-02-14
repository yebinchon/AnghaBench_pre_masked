
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;






 unsigned long VAR_9 ;






 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_10, unsigned long VAR_11)
{

 if (VAR_11 == VAR_9 || VAR_11 == 130)
  FUNC_4(0, VAR_10->iobase + VAR_4);


 switch (VAR_11) {
 case 139:
 case 138:
 case 137:
  FUNC_3(0, VAR_10->iobase + VAR_1);
  FUNC_3(0x0f, VAR_10->iobase + VAR_0);
  FUNC_3(0, VAR_10->iobase + VAR_2);
  break;
 case 136:
 case 135:
 case 134:
  FUNC_3(0x88, VAR_10->iobase + VAR_3);
  break;
 case 133:
 case 132:
  FUNC_3(0x88, VAR_10->iobase + FUNC_1(0));
  FUNC_3(0x80, VAR_10->iobase + FUNC_1(1));
  FUNC_3(0x80, VAR_10->iobase + FUNC_1(2));
  FUNC_3(0x80, VAR_10->iobase + FUNC_1(3));
  if (VAR_11 == 132) {
   FUNC_3(0x88, VAR_10->iobase + FUNC_0(0));
   FUNC_3(0x80, VAR_10->iobase + FUNC_0(1));
   FUNC_3(0x80, VAR_10->iobase + FUNC_0(2));
   FUNC_3(0x80, VAR_10->iobase + FUNC_0(3));
  }
  break;
 case 131:
 case 130:
  FUNC_4(0x08, VAR_10->iobase + FUNC_2(0));
  FUNC_4(0x08, VAR_10->iobase + FUNC_2(1));
  if (VAR_11 == 131) {
   FUNC_4(0x08, VAR_10->iobase + FUNC_2(2));
   FUNC_4(0x08, VAR_10->iobase + FUNC_2(3));
  }
  break;
 case 129:

  FUNC_3(0, VAR_10->iobase + VAR_6);

  FUNC_3(0xff, VAR_10->iobase + VAR_5);

  FUNC_3(0, VAR_10->iobase + VAR_7);
  break;
 case 128:
  FUNC_4(0x0101, VAR_10->iobase + VAR_8);
  break;
 default:
  break;
 }

 return 0;
}
