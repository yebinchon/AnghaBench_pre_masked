
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int spinlock; int attached; struct cb_pcidas_private* private; } ;
struct cb_pcidas_private {int amcc_intcsr; unsigned int ctrl; scalar_t__ pcibar1; scalar_t__ amcc; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned int FUNC_0 (struct comedi_device*,unsigned int) ;
 unsigned int FUNC_1 (struct comedi_device*,unsigned int) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 unsigned int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (unsigned int,scalar_t__) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_9, void *VAR_10)
{
 struct comedi_device *VAR_11 = VAR_10;
 struct cb_pcidas_private *VAR_12 = VAR_11->private;
 unsigned int VAR_13 = 0;
 unsigned int VAR_14;
 unsigned int VAR_15;

 if (!VAR_11->attached)
  return VAR_5;

 VAR_14 = FUNC_2(VAR_12->amcc + VAR_1);

 if ((VAR_3 & VAR_14) == 0)
  return VAR_5;


 FUNC_3(VAR_12->amcc + VAR_0);

 FUNC_5(VAR_12->amcc_intcsr | VAR_2,
      VAR_12->amcc + VAR_1);

 VAR_15 = FUNC_4(VAR_12->pcibar1 + VAR_8);


 if (VAR_15 & VAR_7)
  VAR_13 |= FUNC_1(VAR_11, VAR_15);


 if (VAR_15 & VAR_6)
  VAR_13 |= FUNC_0(VAR_11, VAR_15);

 if (VAR_13) {
  unsigned long VAR_16;

  FUNC_7(&VAR_11->spinlock, VAR_16);
  FUNC_6(VAR_12->ctrl | VAR_13,
       VAR_12->pcibar1 + VAR_8);
  FUNC_8(&VAR_11->spinlock, VAR_16);
 }

 return VAR_4;
}
