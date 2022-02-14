
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct me4000_private {scalar_t__ plx_regbase; } ;
struct comedi_device {scalar_t__ iobase; struct me4000_private* private; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct comedi_device*) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_9)
{
 struct me4000_private *VAR_10 = VAR_9->private;
 unsigned int VAR_11;
 int VAR_12;


 FUNC_4(0, VAR_10->plx_regbase + VAR_8);


 VAR_11 = FUNC_2(VAR_10->plx_regbase + VAR_6);
 VAR_11 |= VAR_7;
 FUNC_4(VAR_11, VAR_10->plx_regbase + VAR_6);
 VAR_11 &= ~VAR_7;
 FUNC_4(VAR_11, VAR_10->plx_regbase + VAR_6);


 for (VAR_12 = 0; VAR_12 < 4; VAR_12++)
  FUNC_4(0x8000, VAR_9->iobase + FUNC_1(VAR_12));

 FUNC_3(VAR_9);


 VAR_11 = VAR_0 | VAR_1;
 for (VAR_12 = 0; VAR_12 < 4; VAR_12++)
  FUNC_4(VAR_11, VAR_9->iobase + FUNC_0(VAR_12));


 FUNC_4(VAR_3,
      VAR_9->iobase + VAR_2);





 if (!(FUNC_2(VAR_9->iobase + VAR_5) & 0x1))
  FUNC_4(0x1, VAR_9->iobase + VAR_4);
}
