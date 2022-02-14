
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct ahc_tmode_tstate {int auto_negotiate; } ;
struct ahc_softc {int features; } ;
struct TYPE_4__ {scalar_t__ period; scalar_t__ width; scalar_t__ offset; scalar_t__ ppr_options; } ;
struct TYPE_3__ {scalar_t__ width; scalar_t__ period; scalar_t__ offset; scalar_t__ ppr_options; } ;
struct ahc_initiator_tinfo {TYPE_2__ goal; TYPE_1__ curr; } ;
struct ahc_devinfo {int target_mask; } ;
typedef scalar_t__ ahc_neg_type ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

int
FUNC_0(struct ahc_softc *VAR_7, struct ahc_devinfo *VAR_8,
         struct ahc_tmode_tstate *VAR_9,
         struct ahc_initiator_tinfo *VAR_10, ahc_neg_type VAR_11)
{
 u_int VAR_12;

 VAR_12 = VAR_9->auto_negotiate;
 if (VAR_11 == VAR_0) {






  if ((VAR_7->features & VAR_4) != 0)
   VAR_10->curr.width = VAR_5;
  VAR_10->curr.period = VAR_3;
  VAR_10->curr.offset = VAR_2;
 }
 if (VAR_10->curr.period != VAR_10->goal.period
  || VAR_10->curr.width != VAR_10->goal.width
  || VAR_10->curr.offset != VAR_10->goal.offset
  || VAR_10->curr.ppr_options != VAR_10->goal.ppr_options
  || (VAR_11 == VAR_1
   && (VAR_10->goal.offset != 0
    || VAR_10->goal.width != VAR_6
    || VAR_10->goal.ppr_options != 0)))
  VAR_9->auto_negotiate |= VAR_8->target_mask;
 else
  VAR_9->auto_negotiate &= ~VAR_8->target_mask;

 return (VAR_12 != VAR_9->auto_negotiate);
}
