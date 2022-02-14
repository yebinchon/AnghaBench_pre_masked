
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned char VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (unsigned char,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_12, unsigned int VAR_13)
{
 unsigned char VAR_14, VAR_15, VAR_16;
 unsigned short VAR_17;


 VAR_14 = 200;
 VAR_17 = VAR_13 / 20000;
 VAR_16 = (VAR_17 & 0xff00) >> 8;
 VAR_15 = VAR_17 & 0x00ff;


 FUNC_0(0, VAR_12->iobase + VAR_5);


 FUNC_0(VAR_6, VAR_12->iobase + VAR_7);


 FUNC_0(VAR_3, VAR_12->iobase + VAR_2);
 FUNC_0(VAR_14, VAR_12->iobase + VAR_0);


 FUNC_0(VAR_4, VAR_12->iobase + VAR_2);
 FUNC_0(VAR_15, VAR_12->iobase + VAR_1);
 FUNC_0(VAR_16, VAR_12->iobase + VAR_1);


 FUNC_0(VAR_8 |
      VAR_9 | VAR_10,
      VAR_12->iobase + VAR_11);
}
