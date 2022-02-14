
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {scalar_t__ speed; int state; } ;
struct ci_hdrc {int suspended; int lock; TYPE_3__ gadget; TYPE_2__* driver; int resume_state; TYPE_1__* platdata; } ;
typedef int irqreturn_t ;
struct TYPE_7__ {int (* suspend ) (TYPE_3__*) ;int (* resume ) (TYPE_3__*) ;} ;
struct TYPE_6__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (struct ci_hdrc*) ;
 scalar_t__ FUNC_1 (struct ci_hdrc*,int ,int ) ;
 int FUNC_2 (struct ci_hdrc*) ;
 int FUNC_3 (struct ci_hdrc*) ;
 int FUNC_4 (struct ci_hdrc*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_10(struct ci_hdrc *VAR_14)
{
 irqreturn_t VAR_15;
 u32 VAR_16;

 if (VAR_14 == ((void*)0))
  return VAR_1;

 FUNC_5(&VAR_14->lock);

 if (VAR_14->platdata->flags & VAR_0) {
  if (FUNC_1(VAR_14, VAR_3, VAR_4) !=
    VAR_5) {
   FUNC_6(&VAR_14->lock);
   return VAR_2;
  }
 }
 VAR_16 = FUNC_2(VAR_14);

 if (VAR_16) {

  if (VAR_13 & VAR_16)
   FUNC_3(VAR_14);

  if (VAR_10 & VAR_16) {
   VAR_14->gadget.speed = FUNC_0(VAR_14) ?
    VAR_7 : VAR_6;
   if (VAR_14->suspended) {
    if (VAR_14->driver->resume) {
     FUNC_6(&VAR_14->lock);
     VAR_14->driver->resume(&VAR_14->gadget);
     FUNC_5(&VAR_14->lock);
    }
    VAR_14->suspended = 0;
    FUNC_9(&VAR_14->gadget,
      VAR_14->resume_state);
   }
  }

  if (VAR_12 & VAR_16)
   FUNC_4(VAR_14);

  if ((VAR_11 & VAR_16) && !(VAR_14->suspended)) {
   VAR_14->suspended = 1;
   VAR_14->resume_state = VAR_14->gadget.state;
   if (VAR_14->gadget.speed != VAR_8 &&
       VAR_14->driver->suspend) {
    FUNC_6(&VAR_14->lock);
    VAR_14->driver->suspend(&VAR_14->gadget);
    FUNC_5(&VAR_14->lock);
   }
   FUNC_9(&VAR_14->gadget,
     VAR_9);
  }
  VAR_15 = VAR_1;
 } else {
  VAR_15 = VAR_2;
 }
 FUNC_6(&VAR_14->lock);

 return VAR_15;
}
