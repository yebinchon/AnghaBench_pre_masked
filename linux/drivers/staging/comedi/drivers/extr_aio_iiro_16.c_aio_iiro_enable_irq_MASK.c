
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_1, bool VAR_2)
{
 if (VAR_2)
  FUNC_0(VAR_1->iobase + VAR_0);
 else
  FUNC_1(0, VAR_1->iobase + VAR_0);
}
