
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
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 unsigned char VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 unsigned char FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_15)
{
 unsigned char VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;


 FUNC_1(VAR_8, VAR_15->iobase + VAR_7);


 FUNC_2(1000, 3000);


 FUNC_1(0x0, VAR_15->iobase + VAR_9);


 FUNC_1(0x0, VAR_15->iobase + VAR_12);


 FUNC_1(0x80, VAR_15->iobase + VAR_2);
 FUNC_1(0xff, VAR_15->iobase + VAR_1);


 FUNC_1(VAR_13, VAR_15->iobase + VAR_0);


 FUNC_2(100, 200);


 VAR_17 = FUNC_0(VAR_15->iobase + VAR_2);
 VAR_16 = FUNC_0(VAR_15->iobase + VAR_1);
 VAR_18 = FUNC_0(VAR_15->iobase + VAR_11);
 VAR_19 = FUNC_0(VAR_15->iobase + VAR_4);
 VAR_20 = FUNC_0(VAR_15->iobase + VAR_12);
 VAR_21 = FUNC_0(VAR_15->iobase + VAR_3);






 if (VAR_17 != 0x00 || VAR_16 != 0x1f ||
     VAR_18 != VAR_10 ||
     VAR_19 != (VAR_6 | VAR_5) ||
     VAR_20 != 0x00 || VAR_21 != 0x0c)
  return -VAR_14;

 return 0;
}
