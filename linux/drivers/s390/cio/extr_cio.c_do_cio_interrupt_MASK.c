
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tpi_info {int schid; scalar_t__ intparm; } ;
struct TYPE_4__ {int scsw; } ;
struct subchannel {int lock; TYPE_2__* driver; TYPE_1__ schib; } ;
struct irb {int scsw; } ;
typedef int irqreturn_t ;
struct TYPE_6__ {int int_code; } ;
struct TYPE_5__ {int (* irq ) (struct subchannel*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct subchannel*) ;
 struct irb* FUNC_7 (int *) ;
 int FUNC_8 (struct tpi_info*) ;
 scalar_t__ FUNC_9 (int ,struct irb*) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_4, void *VAR_5)
{
 struct tpi_info *VAR_6;
 struct subchannel *VAR_7;
 struct irb *VAR_8;

 FUNC_3(VAR_0);
 VAR_6 = (struct tpi_info *) &FUNC_0()->int_code;
 FUNC_8(VAR_6);
 VAR_8 = FUNC_7(&VAR_3);
 VAR_7 = (struct subchannel *)(unsigned long) VAR_6->intparm;
 if (!VAR_7) {

  FUNC_1(VAR_1);
  FUNC_9(VAR_6->schid, VAR_8);
  return VAR_2;
 }
 FUNC_4(VAR_7->lock);

 if (FUNC_9(VAR_6->schid, VAR_8) == 0) {

  FUNC_2 (&VAR_7->schib.scsw, &VAR_8->scsw, sizeof (VAR_8->scsw));

  if (VAR_7->driver && VAR_7->driver->irq)
   VAR_7->driver->irq(VAR_7);
  else
   FUNC_1(VAR_1);
 } else
  FUNC_1(VAR_1);
 FUNC_5(VAR_7->lock);

 return VAR_2;
}
