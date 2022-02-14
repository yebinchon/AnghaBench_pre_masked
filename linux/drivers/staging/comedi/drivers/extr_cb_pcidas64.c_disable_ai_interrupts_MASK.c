
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcidas64_private {int intr_enable_bits; scalar_t__ main_iobase; } ;
struct comedi_device {int spinlock; struct pcidas64_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_7)
{
 struct pcidas64_private *VAR_8 = VAR_7->private;
 unsigned long VAR_9;

 FUNC_0(&VAR_7->spinlock, VAR_9);
 VAR_8->intr_enable_bits &=
  ~VAR_3 & ~VAR_2 &
  ~VAR_1 & ~VAR_5 &
  ~VAR_4 & ~VAR_0;
 FUNC_2(VAR_8->intr_enable_bits,
        VAR_8->main_iobase + VAR_6);
 FUNC_1(&VAR_7->spinlock, VAR_9);
}
