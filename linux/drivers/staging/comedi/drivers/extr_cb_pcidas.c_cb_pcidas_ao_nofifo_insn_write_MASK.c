
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
 int VAR_0 ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int,unsigned int) ;
 int FUNC_4 (unsigned int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (unsigned int,scalar_t__) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct comedi_device *VAR_3,
       struct comedi_subdevice *VAR_4,
       struct comedi_insn *VAR_5,
       unsigned int *VAR_6)
{
 struct cb_pcidas_private *VAR_7 = VAR_3->private;
 unsigned int VAR_8 = FUNC_0(VAR_5->chanspec);
 unsigned int VAR_9 = FUNC_1(VAR_5->chanspec);
 unsigned int VAR_10 = VAR_4->readback[VAR_8];
 unsigned long VAR_11;
 int VAR_12;


 FUNC_6(&VAR_3->spinlock, VAR_11);
 VAR_7->ao_ctrl &= ~(VAR_2 |
         FUNC_4(VAR_8));
 VAR_7->ao_ctrl |= VAR_0 | FUNC_3(VAR_8, VAR_9);
 FUNC_5(VAR_7->ao_ctrl, VAR_7->pcibar1 + VAR_1);
 FUNC_7(&VAR_3->spinlock, VAR_11);

 for (VAR_12 = 0; VAR_12 < VAR_5->n; VAR_12++) {
  VAR_10 = VAR_6[VAR_12];
  FUNC_5(VAR_10, VAR_7->pcibar4 + FUNC_2(VAR_8));
 }

 VAR_4->readback[VAR_8] = VAR_10;

 return VAR_5->n;
}
