
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct comedi_device*,int) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_10,
      unsigned int VAR_11)
{
 FUNC_1(VAR_10, VAR_4 | FUNC_0(VAR_11));
 FUNC_2(VAR_5, VAR_10->iobase + VAR_6);
 FUNC_2(VAR_0, VAR_10->iobase + VAR_6);
 FUNC_2(VAR_1, VAR_10->iobase + VAR_7);
 FUNC_2(VAR_2, VAR_10->iobase + VAR_6);
 FUNC_2(VAR_8, VAR_10->iobase + VAR_6);
 FUNC_2(VAR_9, VAR_10->iobase + VAR_6);
 FUNC_2(VAR_3, VAR_10->iobase + VAR_6);
}
