
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vchiq_bulk_queue {scalar_t__ process; scalar_t__ remote_notify; scalar_t__ remove; struct vchiq_bulk* bulks; } ;
struct vchiq_service {struct vchiq_bulk_queue bulk_tx; TYPE_1__* state; int bulk_remove_event; scalar_t__ instance; int localport; } ;
struct vchiq_bulk {scalar_t__ actual; scalar_t__ dir; scalar_t__ mode; struct bulk_waiter* userdata; scalar_t__ data; } ;
struct bulk_waiter {scalar_t__ actual; int event; } ;
typedef scalar_t__ VCHIQ_STATUS_T ;
typedef int VCHIQ_REASON_T ;
struct TYPE_2__ {int id; } ;


 size_t FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (struct vchiq_service*,int ,scalar_t__) ;
 int FUNC_2 (struct vchiq_service*,int ) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct vchiq_service*,int ,int *,struct bulk_waiter*) ;
 int FUNC_5 (TYPE_1__*,struct vchiq_service*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_18 ;
 int FUNC_8 (int ,char*,int ,int ,char,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static VCHIQ_STATUS_T
FUNC_9(struct vchiq_service *VAR_19, struct vchiq_bulk_queue *VAR_20,
      int VAR_21)
{
 VCHIQ_STATUS_T VAR_22 = VAR_11;

 FUNC_8(VAR_18,
  "%d: nb:%d %cx - p=%x rn=%x r=%x",
  VAR_19->state->id, VAR_19->localport,
  (VAR_20 == &VAR_19->bulk_tx) ? 't' : 'r',
  VAR_20->process, VAR_20->remote_notify, VAR_20->remove);

 VAR_20->remote_notify = VAR_20->process;

 if (VAR_22 == VAR_11) {
  while (VAR_20->remove != VAR_20->remote_notify) {
   struct vchiq_bulk *VAR_23 =
    &VAR_20->bulks[FUNC_0(VAR_20->remove)];



   if (VAR_23->data && VAR_19->instance) {
    if (VAR_23->actual != VAR_0) {
     if (VAR_23->dir == VAR_5) {
      FUNC_2(VAR_19,
       VAR_16);
      FUNC_1(VAR_19,
       VAR_15,
       VAR_23->actual);
     } else {
      FUNC_2(VAR_19,
       VAR_14);
      FUNC_1(VAR_19,
       VAR_13,
       VAR_23->actual);
     }
    } else {
     FUNC_2(VAR_19,
      VAR_12);
    }
    if (VAR_23->mode == VAR_1) {
     struct bulk_waiter *VAR_24;

     FUNC_6(&VAR_17);
     VAR_24 = VAR_23->userdata;
     if (VAR_24) {
      VAR_24->actual = VAR_23->actual;
      FUNC_3(&VAR_24->event);
     }
     FUNC_7(&VAR_17);
    } else if (VAR_23->mode ==
     VAR_2) {
     VCHIQ_REASON_T VAR_25 = (VAR_23->dir ==
      VAR_5) ?
      ((VAR_23->actual ==
      VAR_0) ?
      VAR_6 :
      VAR_7) :
      ((VAR_23->actual ==
      VAR_0) ?
      VAR_3 :
      VAR_4);
     VAR_22 = FUNC_4(VAR_19,
      VAR_25, ((void*)0), VAR_23->userdata);
     if (VAR_22 == VAR_10)
      break;
    }
   }

   VAR_20->remove++;
   FUNC_3(&VAR_19->bulk_remove_event);
  }
  if (!VAR_21)
   VAR_22 = VAR_11;
 }

 if (VAR_22 == VAR_10)
  FUNC_5(VAR_19->state, VAR_19,
   (VAR_20 == &VAR_19->bulk_tx) ?
   VAR_9 : VAR_8);

 return VAR_22;
}
