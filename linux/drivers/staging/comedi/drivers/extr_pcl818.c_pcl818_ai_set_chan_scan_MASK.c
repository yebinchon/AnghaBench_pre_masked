
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_1,
        unsigned int VAR_2,
        unsigned int VAR_3)
{
 FUNC_1(FUNC_0(VAR_2, VAR_3),
      VAR_1->iobase + VAR_0);
}
