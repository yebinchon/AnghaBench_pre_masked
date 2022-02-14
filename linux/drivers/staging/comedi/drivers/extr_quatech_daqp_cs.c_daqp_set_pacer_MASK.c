
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_3, unsigned int VAR_4)
{
 FUNC_0(VAR_4 & 0xff, VAR_3->iobase + VAR_1);
 FUNC_0((VAR_4 >> 8) & 0xff, VAR_3->iobase + VAR_2);
 FUNC_0((VAR_4 >> 16) & 0xff, VAR_3->iobase + VAR_0);
}
