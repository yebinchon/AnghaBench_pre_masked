
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcidas64_private {scalar_t__ plx9080_iobase; } ;
struct comedi_device {int spinlock; struct pcidas64_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_4(struct comedi_device *VAR_3,
      unsigned int VAR_4)
{
 struct pcidas64_private *VAR_5 = VAR_3->private;
 unsigned long VAR_6;


 FUNC_1(&VAR_3->spinlock, VAR_6);
 FUNC_3(VAR_1 | VAR_2 | VAR_0,
        VAR_5->plx9080_iobase + FUNC_0(VAR_4));
 FUNC_2(&VAR_3->spinlock, VAR_6);
}
