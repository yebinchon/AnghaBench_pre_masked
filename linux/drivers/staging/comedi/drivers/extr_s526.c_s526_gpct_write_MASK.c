
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_0,
       unsigned int VAR_1, unsigned int VAR_2)
{

 FUNC_2((VAR_2 >> 16) & 0xffff, VAR_0->iobase + FUNC_1(VAR_1));
 FUNC_2(VAR_2 & 0xffff, VAR_0->iobase + FUNC_0(VAR_1));
}
