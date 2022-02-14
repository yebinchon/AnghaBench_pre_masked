
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcidas64_private {int adc_control1_bits; scalar_t__ main_iobase; } ;
struct comedi_device {int spinlock; struct pcidas64_private* private; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_6)
{
 struct pcidas64_private *VAR_7 = VAR_6->private;
 unsigned long VAR_8;

 FUNC_0(VAR_6);

 FUNC_1(&VAR_6->spinlock, VAR_8);
 VAR_7->adc_control1_bits &= ~VAR_5;
 FUNC_3(VAR_7->adc_control1_bits,
        VAR_7->main_iobase + VAR_1);
 FUNC_2(&VAR_6->spinlock, VAR_8);


 FUNC_3(VAR_2 | VAR_4 | VAR_3,
        VAR_7->main_iobase + VAR_0);
}
