
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchiq_state {int slot_mutex; int id; } ;
struct vchiq_bulk_queue {scalar_t__ local_insert; scalar_t__ remove; int process; int remote_insert; struct vchiq_bulk* bulks; } ;
struct vchiq_service {scalar_t__ srvstate; int bulk_mutex; int localport; int remoteport; int bulk_remove_event; struct vchiq_bulk_queue bulk_rx; struct vchiq_bulk_queue bulk_tx; struct vchiq_state* state; } ;
struct vchiq_bulk {int mode; int size; scalar_t__ data; scalar_t__ actual; void* userdata; int dir; } ;
struct bulk_waiter {scalar_t__ actual; int event; struct vchiq_bulk* bulk; } ;
typedef int payload ;
typedef scalar_t__ VCHIQ_STATUS_T ;
typedef int VCHIQ_SERVICE_HANDLE_T ;
typedef int VCHIQ_BULK_MODE_T ;
typedef int VCHIQ_BULK_DIR_T ;


 size_t FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;




 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int const,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (struct vchiq_service*,int ) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 struct vchiq_service* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int VAR_13 ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct vchiq_state*,int *,int ,int ,int**,int,int) ;
 int FUNC_8 (struct vchiq_service*) ;
 scalar_t__ FUNC_9 (struct vchiq_service*) ;
 int FUNC_10 (struct vchiq_bulk*) ;
 int VAR_14 ;
 int FUNC_11 (int ,char*,int ,int ,int ,char const,int,scalar_t__,void*) ;
 int FUNC_12 (int ,char*,int ,int ,char const,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_13 (struct vchiq_bulk*,void*,int,int ) ;
 scalar_t__ FUNC_14 (int *) ;
 int FUNC_15 () ;

VCHIQ_STATUS_T FUNC_16(VCHIQ_SERVICE_HANDLE_T VAR_15,
       void *VAR_16, int VAR_17, void *VAR_18,
       VCHIQ_BULK_MODE_T VAR_19,
       VCHIQ_BULK_DIR_T VAR_20)
{
 struct vchiq_service *VAR_21 = FUNC_3(VAR_15);
 struct vchiq_bulk_queue *VAR_22;
 struct vchiq_bulk *VAR_23;
 struct vchiq_state *VAR_24;
 struct bulk_waiter *VAR_25 = ((void*)0);
 const char VAR_26 = (VAR_20 == VAR_4) ? 't' : 'r';
 const int VAR_27 = (VAR_20 == VAR_4) ?
  VAR_7 : VAR_6;
 VCHIQ_STATUS_T VAR_28 = VAR_5;
 int VAR_29[2];

 if (!VAR_21 || VAR_21->srvstate != VAR_10 ||
     !VAR_16 || FUNC_9(VAR_21) != VAR_11)
  goto error_exit;

 switch (VAR_19) {
 case 129:
 case 130:
  break;
 case 131:
  VAR_25 = VAR_18;
  FUNC_4(&VAR_25->event);
  VAR_25->actual = 0;
  VAR_25->bulk = ((void*)0);
  break;
 case 128:
  VAR_25 = VAR_18;
  VAR_23 = VAR_25->bulk;
  goto waiting;
 default:
  goto error_exit;
 }

 VAR_24 = VAR_21->state;

 VAR_22 = (VAR_20 == VAR_4) ?
  &VAR_21->bulk_tx : &VAR_21->bulk_rx;

 if (FUNC_5(&VAR_21->bulk_mutex)) {
  VAR_28 = VAR_9;
  goto error_exit;
 }

 if (VAR_22->local_insert == VAR_22->remove + VAR_8) {
  FUNC_2(VAR_21, VAR_12);
  do {
   FUNC_6(&VAR_21->bulk_mutex);
   if (FUNC_14(
      &VAR_21->bulk_remove_event)) {
    VAR_28 = VAR_9;
    goto error_exit;
   }
   if (FUNC_5(&VAR_21->bulk_mutex)) {
    VAR_28 = VAR_9;
    goto error_exit;
   }
  } while (VAR_22->local_insert == VAR_22->remove +
    VAR_8);
 }

 VAR_23 = &VAR_22->bulks[FUNC_0(VAR_22->local_insert)];

 VAR_23->mode = VAR_19;
 VAR_23->dir = VAR_20;
 VAR_23->userdata = VAR_18;
 VAR_23->size = VAR_17;
 VAR_23->actual = VAR_3;

 if (FUNC_13(VAR_23, VAR_16, VAR_17, VAR_20) != VAR_11)
  goto unlock_error_exit;

 FUNC_15();

 FUNC_11(VAR_14,
  "%d: bt (%d->%d) %cx %x@%pK %pK",
  VAR_24->id, VAR_21->localport, VAR_21->remoteport, VAR_26,
  VAR_17, VAR_23->data, VAR_18);



 if (FUNC_5(&VAR_24->slot_mutex)) {
  VAR_28 = VAR_9;
  goto cancel_bulk_error_exit;
 }

 if (VAR_21->srvstate != VAR_10)
  goto unlock_both_error_exit;

 VAR_29[0] = (int)(long)VAR_23->data;
 VAR_29[1] = VAR_23->size;
 VAR_28 = FUNC_7(VAR_24,
          ((void*)0),
          FUNC_1(VAR_27,
           VAR_21->localport,
           VAR_21->remoteport),
          VAR_13,
          &VAR_29,
          sizeof(VAR_29),
          VAR_0 |
          VAR_1 |
          VAR_2);
 if (VAR_28 != VAR_11)
  goto unlock_both_error_exit;

 VAR_22->local_insert++;

 FUNC_6(&VAR_24->slot_mutex);
 FUNC_6(&VAR_21->bulk_mutex);

 FUNC_12(VAR_14,
  "%d: bt:%d %cx li=%x ri=%x p=%x",
  VAR_24->id,
  VAR_21->localport, VAR_26,
  VAR_22->local_insert, VAR_22->remote_insert, VAR_22->process);

waiting:
 FUNC_8(VAR_21);

 VAR_28 = VAR_11;

 if (VAR_25) {
  VAR_25->bulk = VAR_23;
  if (FUNC_14(&VAR_25->event))
   VAR_28 = VAR_9;
  else if (VAR_25->actual == VAR_3)
   VAR_28 = VAR_5;
 }

 return VAR_28;

unlock_both_error_exit:
 FUNC_6(&VAR_24->slot_mutex);
cancel_bulk_error_exit:
 FUNC_10(VAR_23);
unlock_error_exit:
 FUNC_6(&VAR_21->bulk_mutex);

error_exit:
 if (VAR_21)
  FUNC_8(VAR_21);
 return VAR_28;
}
