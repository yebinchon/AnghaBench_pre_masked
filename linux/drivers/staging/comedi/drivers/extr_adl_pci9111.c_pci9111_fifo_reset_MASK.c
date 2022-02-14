
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {unsigned long iobase; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_2)
{
 unsigned long VAR_3 = VAR_2->iobase + VAR_1;


 FUNC_0(0, VAR_3);
 FUNC_0(VAR_0, VAR_3);
 FUNC_0(0, VAR_3);
}
