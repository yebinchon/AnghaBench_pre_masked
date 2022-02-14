
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct das6402_private {int ao_range; } ;
struct comedi_device {scalar_t__ iobase; struct das6402_private* private; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_6 (struct comedi_device*) ;
 int FUNC_7 (struct comedi_device*,int ) ;
 int FUNC_8 (struct comedi_device*,int) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int,scalar_t__) ;
 int FUNC_11 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_12(struct comedi_device *VAR_11)
{
 struct das6402_private *VAR_12 = VAR_11->private;


 FUNC_10(VAR_4, VAR_11->iobase + VAR_6);


 FUNC_7(VAR_11, VAR_9);


 FUNC_10(VAR_2, VAR_11->iobase + VAR_1);


 FUNC_8(VAR_11, FUNC_5(0) |
         VAR_5 |
         VAR_7 |
         VAR_8);


 FUNC_11(FUNC_0(0) | FUNC_1(0),
      VAR_11->iobase + VAR_0);


 VAR_12->ao_range = FUNC_4(0, 2) | FUNC_4(1, 2);
 FUNC_10(VAR_12->ao_range, VAR_11->iobase + VAR_10);


 FUNC_11(0, VAR_11->iobase + FUNC_2(0));
 FUNC_11(0, VAR_11->iobase + FUNC_2(0));
 FUNC_9(VAR_11->iobase + FUNC_3(0));


 FUNC_10(0, VAR_11->iobase + VAR_3);

 FUNC_6(VAR_11);
}
