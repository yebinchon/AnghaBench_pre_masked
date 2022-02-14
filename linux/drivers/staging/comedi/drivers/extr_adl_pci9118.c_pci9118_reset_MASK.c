
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
 scalar_t__ VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (struct comedi_device*) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_6)
{

 FUNC_2(0, VAR_6->iobase + VAR_5);
 FUNC_2(0, VAR_6->iobase + VAR_3);
 FUNC_2(0, VAR_6->iobase + VAR_2);
 FUNC_3(VAR_6);


 FUNC_1(VAR_6->iobase + VAR_5);
 FUNC_1(VAR_6->iobase + VAR_4);


 FUNC_2(0, VAR_6->iobase + VAR_1);
 FUNC_2(1, VAR_6->iobase + VAR_0);
 FUNC_2(2, VAR_6->iobase + VAR_0);


 FUNC_2(2047, VAR_6->iobase + FUNC_0(0));
 FUNC_2(2047, VAR_6->iobase + FUNC_0(1));
}
