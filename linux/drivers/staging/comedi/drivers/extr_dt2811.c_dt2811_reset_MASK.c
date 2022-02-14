
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_4)
{

 FUNC_2(FUNC_0(0), VAR_4->iobase + VAR_1);
 FUNC_3(100, 1000);
 FUNC_1(VAR_4->iobase + VAR_3);
 FUNC_1(VAR_4->iobase + VAR_2);
 FUNC_2(FUNC_0(0) | VAR_0,
      VAR_4->iobase + VAR_1);
}
