
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcidas64_private {scalar_t__ plx9080_iobase; } ;
struct comedi_device {struct pcidas64_private* private; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (unsigned int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct comedi_device *VAR_8,
          unsigned int VAR_9,
          unsigned int VAR_10)
{
 struct pcidas64_private *VAR_11 = VAR_8->private;
 if (VAR_9) {
  FUNC_0(0, VAR_11->plx9080_iobase + VAR_7);
  FUNC_0(0, VAR_11->plx9080_iobase + VAR_5);
  FUNC_0(0, VAR_11->plx9080_iobase + VAR_3);
  FUNC_0(VAR_10,
         VAR_11->plx9080_iobase + VAR_1);
 } else {
  FUNC_0(0, VAR_11->plx9080_iobase + VAR_6);
  FUNC_0(0, VAR_11->plx9080_iobase + VAR_4);
  FUNC_0(0, VAR_11->plx9080_iobase + VAR_2);
  FUNC_0(VAR_10,
         VAR_11->plx9080_iobase + VAR_0);
 }
}
