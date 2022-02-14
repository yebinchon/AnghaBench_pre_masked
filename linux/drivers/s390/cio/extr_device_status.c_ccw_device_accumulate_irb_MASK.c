
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int cons; } ;
struct TYPE_14__ {TYPE_1__ erw; } ;
struct TYPE_15__ {TYPE_2__ esw0; } ;
struct TYPE_19__ {int fctl; int actl; int stctl; int dstat; int cstat; int count; int cpa; int ssi; int alcc; int isic; int pfch; int fmt; int cc; int sctl; int key; } ;
struct TYPE_20__ {TYPE_7__ cmd; } ;
struct irb {TYPE_3__ esw; TYPE_8__ scsw; } ;
struct ccw_device {TYPE_6__* private; } ;
struct TYPE_16__ {int dosense; } ;
struct TYPE_18__ {TYPE_4__ flags; TYPE_5__* dma_area; } ;
struct TYPE_17__ {struct irb irb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct ccw_device*,struct irb*) ;
 int FUNC_1 (struct ccw_device*,struct irb*) ;
 int FUNC_2 (struct ccw_device*,struct irb*) ;
 int FUNC_3 (struct ccw_device*) ;
 int FUNC_4 (struct irb*,struct irb*,int) ;
 int FUNC_5 (struct irb*,int ,int) ;
 int FUNC_6 (TYPE_8__*) ;
 scalar_t__ FUNC_7 (TYPE_8__*) ;
 scalar_t__ FUNC_8 (TYPE_8__*) ;
 scalar_t__ FUNC_9 (TYPE_8__*) ;
 int FUNC_10 (TYPE_8__*) ;

void
FUNC_11(struct ccw_device *VAR_14, struct irb *VAR_15)
{
 struct irb *VAR_16;






 if (!(FUNC_10(&VAR_15->scsw) & VAR_13))
  return;


 FUNC_2(VAR_14, VAR_15);


 if (FUNC_8(&VAR_15->scsw) && FUNC_9(&VAR_15->scsw))
  FUNC_3(VAR_14);

 if (FUNC_7(&VAR_15->scsw)) {
  FUNC_4(&VAR_14->private->dma_area->irb, VAR_15, sizeof(struct irb));
  return;
 }



 if (!FUNC_6(&VAR_15->scsw))
  return;

 VAR_16 = &VAR_14->private->dma_area->irb;






 if (VAR_15->scsw.cmd.fctl & VAR_7)
  FUNC_5(&VAR_14->private->dma_area->irb, 0, sizeof(struct irb));


 if (VAR_15->scsw.cmd.fctl & VAR_8) {

  VAR_16->scsw.cmd.key = VAR_15->scsw.cmd.key;

  VAR_16->scsw.cmd.sctl = VAR_15->scsw.cmd.sctl;

  VAR_16->scsw.cmd.cc |= VAR_15->scsw.cmd.cc;

  VAR_16->scsw.cmd.fmt = VAR_15->scsw.cmd.fmt;

  VAR_16->scsw.cmd.pfch = VAR_15->scsw.cmd.pfch;

  VAR_16->scsw.cmd.isic = VAR_15->scsw.cmd.isic;

  VAR_16->scsw.cmd.alcc = VAR_15->scsw.cmd.alcc;

  VAR_16->scsw.cmd.ssi = VAR_15->scsw.cmd.ssi;
 }


 FUNC_0(VAR_14, VAR_15);


 VAR_16->scsw.cmd.fctl |= VAR_15->scsw.cmd.fctl;

 VAR_16->scsw.cmd.actl = VAR_15->scsw.cmd.actl;

 VAR_16->scsw.cmd.stctl |= VAR_15->scsw.cmd.stctl;




 if ((VAR_15->scsw.cmd.stctl & VAR_11) ||
     ((VAR_15->scsw.cmd.stctl ==
       (VAR_10|VAR_13)) &&
      (VAR_15->scsw.cmd.actl & VAR_4) &&
      (VAR_15->scsw.cmd.actl & VAR_5)) ||
     (VAR_15->scsw.cmd.actl & VAR_6))
  VAR_16->scsw.cmd.cpa = VAR_15->scsw.cmd.cpa;

 VAR_16->scsw.cmd.dstat &= ~VAR_0;

 if (VAR_15->scsw.cmd.stctl &
     (VAR_11 | VAR_12
      | VAR_10 | VAR_9))
  VAR_16->scsw.cmd.dstat |= VAR_15->scsw.cmd.dstat;

 VAR_16->scsw.cmd.cstat |= VAR_15->scsw.cmd.cstat;

 if ((VAR_15->scsw.cmd.stctl & VAR_11) &&
     (VAR_15->scsw.cmd.cstat & ~(VAR_3 | VAR_2))
      == 0)
  VAR_16->scsw.cmd.count = VAR_15->scsw.cmd.count;


 FUNC_1(VAR_14, VAR_15);
 if ((VAR_16->scsw.cmd.dstat & VAR_1) &&
     !(VAR_16->esw.esw0.erw.cons))
  VAR_14->private->flags.dosense = 1;
}
