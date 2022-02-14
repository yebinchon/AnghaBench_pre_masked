
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (struct comedi_device*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_3)
{
 FUNC_0(0, VAR_3->iobase + VAR_0);
 FUNC_2(VAR_3, 0, 0);
 FUNC_1(VAR_3);


 FUNC_0(0, VAR_3->iobase + VAR_1);
 FUNC_0(0, VAR_3->iobase + VAR_2);
}
