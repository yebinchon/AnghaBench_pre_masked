
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {int spinlock; struct cb_pcidas_private* private; } ;
struct cb_pcidas_private {int ctrl; int ao_ctrl; scalar_t__ pcibar1; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_6,
          struct comedi_subdevice *VAR_7)
{
 struct cb_pcidas_private *VAR_8 = VAR_6->private;
 unsigned long VAR_9;

 FUNC_1(&VAR_6->spinlock, VAR_9);

 VAR_8->ctrl &= ~(VAR_4 | VAR_3);
 FUNC_0(VAR_8->ctrl, VAR_8->pcibar1 + VAR_5);


 VAR_8->ao_ctrl &= ~(VAR_0 | VAR_1);
 FUNC_0(VAR_8->ao_ctrl, VAR_8->pcibar1 + VAR_2);
 FUNC_2(&VAR_6->spinlock, VAR_9);

 return 0;
}
