
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int* readback; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int spinlock; struct cb_pcidas_private* private; } ;
struct cb_pcidas_private {int ao_ctrl; scalar_t__ pcibar4; scalar_t__ pcibar1; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (unsigned int,unsigned int) ;
 int FUNC_4 (unsigned int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (unsigned int,scalar_t__) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct comedi_device *VAR_7,
     struct comedi_subdevice *VAR_8,
     struct comedi_insn *VAR_9,
     unsigned int *VAR_10)
{
 struct cb_pcidas_private *VAR_11 = VAR_7->private;
 unsigned int VAR_12 = FUNC_0(VAR_9->chanspec);
 unsigned int VAR_13 = FUNC_1(VAR_9->chanspec);
 unsigned int VAR_14 = VAR_8->readback[VAR_12];
 unsigned long VAR_15;
 int VAR_16;


 FUNC_5(0, VAR_11->pcibar4 + VAR_2);


 FUNC_6(&VAR_7->spinlock, VAR_15);
 VAR_11->ao_ctrl &= ~(VAR_0 | FUNC_4(VAR_12) |
         VAR_4);
 VAR_11->ao_ctrl |= VAR_1 | FUNC_3(VAR_12, VAR_13) |
       FUNC_2(VAR_12) | VAR_6;
 FUNC_5(VAR_11->ao_ctrl, VAR_11->pcibar1 + VAR_5);
 FUNC_7(&VAR_7->spinlock, VAR_15);

 for (VAR_16 = 0; VAR_16 < VAR_9->n; VAR_16++) {
  VAR_14 = VAR_10[VAR_16];
  FUNC_5(VAR_14, VAR_11->pcibar4 + VAR_3);
 }

 VAR_8->readback[VAR_12] = VAR_14;

 return VAR_9->n;
}
