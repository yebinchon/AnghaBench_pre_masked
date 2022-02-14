
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < 3; VAR_1++)
  FUNC_1(0, VAR_0->iobase + FUNC_0(VAR_1));
}
