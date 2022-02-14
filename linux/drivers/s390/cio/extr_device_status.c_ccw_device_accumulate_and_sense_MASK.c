
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_18__ {int actl; int dstat; } ;
struct TYPE_10__ {TYPE_9__ cmd; } ;
struct irb {TYPE_1__ scsw; } ;
struct ccw_device {TYPE_8__* private; } ;
struct TYPE_16__ {scalar_t__ dosense; } ;
struct TYPE_17__ {TYPE_7__ flags; TYPE_6__* dma_area; } ;
struct TYPE_11__ {int cons; } ;
struct TYPE_12__ {TYPE_2__ erw; } ;
struct TYPE_13__ {TYPE_3__ esw0; } ;
struct TYPE_14__ {TYPE_4__ esw; } ;
struct TYPE_15__ {TYPE_5__ irb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ccw_device*,struct irb*) ;
 int FUNC_1 (struct ccw_device*,struct irb*) ;

int
FUNC_2(struct ccw_device *VAR_4, struct irb *VAR_5)
{
 FUNC_0(VAR_4, VAR_5);
 if ((VAR_5->scsw.cmd.actl & (VAR_2 | VAR_3)) != 0)
  return -VAR_1;

 if (VAR_4->private->flags.dosense &&
     !(VAR_5->scsw.cmd.dstat & VAR_0)) {
  VAR_4->private->dma_area->irb.esw.esw0.erw.cons = 1;
  VAR_4->private->flags.dosense = 0;
  return 0;
 }
 if (VAR_4->private->flags.dosense) {
  FUNC_1(VAR_4, VAR_5);
  return -VAR_1;
 }
 return 0;
}
