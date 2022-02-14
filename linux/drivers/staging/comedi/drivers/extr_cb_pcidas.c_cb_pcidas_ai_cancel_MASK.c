
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {int spinlock; struct cb_pcidas_private* private; } ;
struct cb_pcidas_private {int ctrl; scalar_t__ pcibar1; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_7,
          struct comedi_subdevice *VAR_8)
{
 struct cb_pcidas_private *VAR_9 = VAR_7->private;
 unsigned long VAR_10;

 FUNC_1(&VAR_7->spinlock, VAR_10);

 VAR_9->ctrl &= ~(VAR_3 | VAR_2);
 FUNC_0(VAR_9->ctrl, VAR_9->pcibar1 + VAR_4);
 FUNC_2(&VAR_7->spinlock, VAR_10);


 FUNC_0(VAR_6, VAR_9->pcibar1 + VAR_5);
 FUNC_0(VAR_0, VAR_9->pcibar1 + VAR_1);

 return 0;
}
