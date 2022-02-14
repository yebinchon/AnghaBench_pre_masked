
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; struct apci1564_private* private; } ;
struct apci1564_private {long counters; scalar_t__ timer; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_9)
{
 struct apci1564_private *VAR_10 = VAR_9->private;


 FUNC_3(0x0, VAR_9->iobase + VAR_5);
 FUNC_2(VAR_9->iobase + VAR_4);
 FUNC_3(0x0, VAR_9->iobase + VAR_2);
 FUNC_3(0x0, VAR_9->iobase + VAR_3);


 FUNC_3(0x0, VAR_9->iobase + VAR_7);
 FUNC_3(0x0, VAR_9->iobase + VAR_6);


 FUNC_1(VAR_9->iobase + VAR_8);


 FUNC_3(0x0, VAR_10->timer + VAR_0);
 FUNC_3(0x0, VAR_10->timer + VAR_1);

 if (VAR_10->counters) {
  unsigned long VAR_11 = VAR_10->counters + VAR_0;


  FUNC_3(0x0, VAR_11 + FUNC_0(0));
  FUNC_3(0x0, VAR_11 + FUNC_0(1));
  FUNC_3(0x0, VAR_11 + FUNC_0(2));
 }

 return 0;
}
