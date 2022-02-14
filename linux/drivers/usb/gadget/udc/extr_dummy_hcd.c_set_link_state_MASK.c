
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct dummy_hcd {scalar_t__ active; int port_status; unsigned int old_status; scalar_t__ old_active; scalar_t__ resuming; struct dummy* dum; } ;
struct TYPE_7__ {scalar_t__ speed; } ;
struct dummy {int callback_usage; int lock; TYPE_1__ gadget; TYPE_2__* driver; scalar_t__ ints_enabled; scalar_t__ pullup; } ;
struct TYPE_9__ {scalar_t__ speed; } ;
struct TYPE_8__ {int (* resume ) (TYPE_1__*) ;int (* suspend ) (TYPE_1__*) ;int (* disconnect ) (TYPE_1__*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 TYPE_6__* FUNC_0 (struct dummy_hcd*) ;
 int FUNC_1 (struct dummy_hcd*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct dummy*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_9(struct dummy_hcd *VAR_6)
{
 struct dummy *VAR_7 = VAR_6->dum;
 unsigned int VAR_8;

 VAR_6->active = 0;
 if (VAR_7->pullup)
  if ((FUNC_0(VAR_6)->speed == VAR_0 &&
       VAR_7->gadget.speed != VAR_4) ||
      (FUNC_0(VAR_6)->speed != VAR_0 &&
       VAR_7->gadget.speed == VAR_4))
   return;

 FUNC_1(VAR_6);
 VAR_8 = (FUNC_0(VAR_6)->speed == VAR_0 ?
   VAR_5 : VAR_2);

 if ((VAR_6->port_status & VAR_1) == 0 ||
      VAR_6->active)
  VAR_6->resuming = 0;


 if ((VAR_6->port_status & VAR_8) == 0 ||
   (VAR_6->port_status & VAR_3) != 0) {
  unsigned int VAR_9 = VAR_8 &
    VAR_6->old_status & (~VAR_6->port_status);
  unsigned int VAR_10 = VAR_3 &
    (~VAR_6->old_status) & VAR_6->port_status;


  if (VAR_7->ints_enabled && (VAR_9 || VAR_10)) {
   FUNC_4(VAR_7);
   ++VAR_7->callback_usage;
   FUNC_3(&VAR_7->lock);
   if (VAR_10)
    FUNC_8(&VAR_7->gadget, VAR_7->driver);
   else
    VAR_7->driver->disconnect(&VAR_7->gadget);
   FUNC_2(&VAR_7->lock);
   --VAR_7->callback_usage;
  }
 } else if (VAR_6->active != VAR_6->old_active &&
   VAR_7->ints_enabled) {
  ++VAR_7->callback_usage;
  FUNC_3(&VAR_7->lock);
  if (VAR_6->old_active && VAR_7->driver->suspend)
   VAR_7->driver->suspend(&VAR_7->gadget);
  else if (!VAR_6->old_active && VAR_7->driver->resume)
   VAR_7->driver->resume(&VAR_7->gadget);
  FUNC_2(&VAR_7->lock);
  --VAR_7->callback_usage;
 }

 VAR_6->old_status = VAR_6->port_status;
 VAR_6->old_active = VAR_6->active;
}
